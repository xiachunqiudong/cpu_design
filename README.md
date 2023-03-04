## 一.参考书籍

- 手把手教你设计CPU-riscv处理器篇
- CPU设计实战
- 计算机组成与设计: 硬件软件接口

## 二.总体介绍

### 指令类型

#### 计算指令

- reg-reg

  `add`, `addw`, `sub`, `subw`, `sll`, `sllw`, `slt`, `sltu`,`xor`,`srl`,`srlw`, `sra`, `sraw`, `or`, `and`

- reg-imm

  `addi`, `addiw`, `slli`, `slliw`, `slti`, `sltiu`,`xori`,`srli`,`srliw`, `srai`, `sraiw`, `ori`, `andi`

#### 条件分支指令

根据源寄存器中值得大小决定是否需要跳转，跳转方式为PC相对跳转。

`beq`, `bne`, `blt`, `bltu`, `bge`, `bgeu`

#### 跳转链接指令

直接跳转到目的地址，并将返回地址存入寄存器中。

`jal`, `jalr`

#### 访存指令

- load

  `lb`, `lh`, `lw`, `ld`, `lbu`, `lhu`, `lwu`

- store

  `sb`, `sh`, `sw`, `sd`

#### CSR指令

- reg

  `csrrw`, `csrrs`, `csrrc`

- imm

  `csrrwi`, `csrrsi`, `csrrci`

#### 系统指令

`ecall` ,`mret`,`ebreak`

#### UPPER指令

加载数据高位。

`lui`, `auipc`

## 三.流水线的握手信号

在处理`load-use`冒险的时候，我们需要暂停译码阶段一个时钟周期。但是也需要注意暂停取指阶段和往执行阶段插入气泡。

下面是伪代码。

```verilog
assign IF_STALL = ID_STALL = load_use;
assign EX_BULLE = load_use;
```

我们是站在全局角度考虑，哪些阶段需要暂停，哪些阶段需要插入气泡。但是随着cpu复杂度的提高，可能需要暂停的情况很多，load-use冒险我们知道暂停一个时钟周期就可以了。但是有些情况，比如在访存阶段，如果后续加入AXI总线访问DRAM，加入缓存。缓存命中和缓存不命中访存阶段需要暂停的时钟周期数都是不确定的。这个时候如果还是在全局的角度去控制各个流水级，逻辑就会非常的复杂。

这个时候我们可以站在单独的阶段考虑，我们可以在各流水级之间加入握手信号，这样可以实现某个阶段阻塞，其他阶段会自动阻塞。消除了流水级之间的相关性。

以译码阶段为例

```verilog

    reg ID_data_valid;

	wire run;
    assign run = (!id_load_use_i);
    assign ID_valid_o = (ID_data_valid && run && !id_flush_i);
    assign ID_ready_o = (EX_ready_i && run);

    always @(posedge clk) begin
        if(rst) begin
            ID_data_valid <= 1'b0;
        end else if(ID_ready_o) begin
            ID_data_valid <= IF_valid_i;
        end
    end
```

`ID_data_valid`代表ID流水线寄存器中的数据是否有效。

ID流水线寄存器的输出信号只有在`ID_data_valid`有效时才是有效的。

```verilog
    assign ID_pc_o          = ID_pc_r          & {`PC_WIDTH{ID_data_valid}};
    assign ID_instr_o       = ID_instr_r       & {`INSTR_WIDTH{ID_data_valid}};
    assign ID_prdt_taken_o  = ID_prdt_taken_r  & ID_data_valid;
    assign ID_pc_misalign_o = ID_pc_misalign_r & ID_data_valid;
    assign ID_if_bus_err_o  = ID_if_bus_err_r  & ID_data_valid;
```

`run`信号代表id阶段准备完成

`ID_valid_o`代表发往EX阶段的数据是有效的，只有在当前阶段流水线数据有效`ID_data_valid == 1`，准备完毕 `run == 1`时，且没有冲刷流水线的情况下才有效`id_flush_i == 0`

`ID_ready_o`只有在当前阶段准备完毕`run == 1`且下个阶段可以接受`EX_ready_i == 1`的情况下才有效。

这样如果某个阶段没有准备完毕`run == 0`，那面前面的阶段都会因为`ready_o == 0`而阻塞，并向他下一个阶段插入气泡`valid_o ==0`。

## 四.取指

```verilog
module ifu(
    input  [`PC_WIDTH-1:0]    IF_pc_i,
    input                     if_flush_i,
    input  [`PC_WIDTH-1:0]    flush_pc_i,
    output [`PC_WIDTH-1:0]    ifu_pc_next_o,
    // to ID
    output [`INSTR_WIDTH-1:0] ifu_instr_o,
    output                    ifu_prdt_taken_o,
    // excp
    output                    ifu_pc_misalign_o, // 取指地址不对齐
    output                    ifu_bus_err_o      // 取指访存错误
);
```

### 根据PC取指

根据PC从内存中取指令。

这边是模拟了一个理想的指令RAM，可以在一个周期内读出指令送往译码阶段。

后续如果加入AXI总线，和指令Cache会复杂不少。

```verilog
    if_bus u_if_bus(
        .pc_i                 ( IF_pc_i           ),
        .if_bus_instr_o       ( ifu_instr_o       ),
        // excp
        .if_bus_pc_misalign_o ( ifu_pc_misalign_o ),
        .if_bus_bus_err_o     ( ifu_bus_err_o     )
    );
```

### 计算下个周期PC

我们是将指令的执行分成了五个阶段，为了每个周期都能取出一条指令，所以我们需要在取指阶段就知道下个周期的PC。

为了能在取指阶段得到下个周期的PC，我们必选知道指令的类型，需要知道它是普通指令还是分支跳转指令，所以就需要简单译码。

```verilog
    wire             jal;
    wire             jalr;
    wire             branch;
    wire [`XLEN-1:0] imm;

    if_mini_dec u_if_mini_dec_u(
        .instr_i                 ( ifu_instr_o  ),
        .mini_dec_jal_o          ( jal          ),
        .mini_dec_jalr_o         ( jalr         ),
        .mini_dec_branch_o       ( branch       ),
        .mini_dec_rs1_idx_o      (              ),
        .mini_dec_imm_o          ( imm          )   
    );
```

这样一来我们就可以得知指令的类型，那么问题又来了，如果是分支跳转指令那该怎么办呢？

#### 条件分支指令

对于条件分支指令我们在执行阶段才能知道它是否需要跳转。

一种方式是我们可以等到执行阶段冲刷流水线，从需要跳转的PC重新取指。

那有没有更好的办法？那我们可以猜测一下，是跳转还是不跳。至少有一半的几率是对的，如果猜测正确就不需要冲刷流水线了。

我们可以猜测往回跳转为跳，反之为不跳，可以规定编译器，循环向前跳转，这样预测的正确率可以进一步提高。

这里我们就采用这种方式预测，注意为了在执行阶段知道预测的结果是否正确，需要把预测结果带到执行阶段。

```verilog
// 静态分支预测, 往回跳预测为跳, 反之为不跳
assign ifu_prdt_taken_o = (branch & imm[63]);
```

随着流水线级数的加深，我们会越晚知道是否需要跳转，也就代表冲刷流水线的代价越大。所以越高级的CPU就要有更高预测准确率的分支预测器。

#### 跳转链接指令

- `jal`

  可以根据简单译码得出的`IMM`加上`PC`直接得出跳转地址。

  ```verilog
  	assign jump = ifu_prdt_taken_o | jal;
      wire [`XLEN-1:0] pc_add_src2;
      assign pc_add_src2 = jump ? imm : `XLEN'd4;
  
      assign ifu_pc_next_o = if_flush_i ? flush_pc_i 
          : (IF_pc_i + pc_add_src2); // 冲刷流水线
  ```

- `jalr`

  在`译码`阶段才可以得到寄存器中的值。

  这边我们的处理方式是在执行阶段处理，一方面是我们可以和分支预测错误共用一个冲刷流水线逻辑，另一方面我们是在执行阶段进行前递操作的，如果发生了`WAR`相关也可以通过前递解决。

  这边我们采用的方式相对简单，我们常用`x1`作为函数调用的返回地址寄存器，我们常使用`jal x1, tag`作为函数调用的指令，使用`jalr x0, x1, 0`作为函数返回指令。这样我们可以用硬件做一个栈，函数调用就把返回地址压栈，函数返回从栈中拿出返回地址。

#### 执行阶段决定是否冲刷流水线

```verilog
    wire op_jalr   = optype_info_i[`OP_JALR];

    wire mis_prdt = branch_jump ^ EX_prdt_taken_i;
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = (op_jalr || branch_jump) ? imm_i : 64'd4;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;
	
	// 分支预测错误 或者是jalr指令
    assign ex_jump_o = mis_prdt || op_jalr;
```

#### 什么是冲刷流水线

对于取指阶段我们需要从冲刷地址给定的PC开始取指令

对需要冲刷的所有阶段，其实就是让这个阶段产生的数据无效就好了。可以理解成向下一阶段流水线寄存器中插入气泡。

比如说冲刷ID阶段，就是在下个时钟上升沿到来的时候，往EX阶段流水线寄存器中插入气泡。

由于我们采用了`valid` `ready`握手信号，我们可以让`valid` = 0，这样数据到达下个阶段就是个无效数据。就是我们要让这条指令不能影响处理器的状态。

```verilog
assign IF_valid_o = !if_flush_i && run;
```

## 五.译码

```verilog
module id(
    input                           id_flush_i,
    input [`INSTR_WIDTH-1:0]        instr_i,
    // id x regfile
    // to regfile
    output [4:0]                    id_rs1_idx_o,
    output [4:0]                    id_rs2_idx_o,
    // form regfile
    input  [`XLEN-1:0]              rf_rs1_rdata_i,
    input  [`XLEN-1:0]              rf_rs2_rdata_i,
    // from EX
    input                           EX_op_load_i,   
    input  [4:0]                    EX_rd_idx_i,
    // to ex
    // op info
    output [`OP_INFO_WIDTH-1:0]     id_optype_info_o,
    output [`ALU_INFO_WIDTH-1:0]    id_alu_info_o,
    output [`BRANCH_INFO_WIDTH-1:0] id_branch_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info_o,
    output [`CSR_INFO_WIDTH-1:0]    id_csr_info_o,
    // op number
    output [`XLEN-1:0]              id_rs1_rdata_o,
    output [`XLEN-1:0]              id_rs2_rdata_o,
    output [`XLEN-1:0]              id_imm_o,
    // csr
    output                          id_csr_ren_o,
    output                          id_csr_wen_o,
    output [11:0]                   id_csr_idx_o,
    // rd
    output                          id_rd_wen_o,
    output [4:0]                    id_rd_idx_o,
    // load use
    output                          id_load_use_o,
    // excp
    output                          id_ilegl_instr_o,
    output                          id_ecall_o,
    output                          id_ebreak_o,
    output                          id_mret_o
);
```

### 译码

根据指令译码出读/写通用寄存器号，指令中的立即数，指令要执行的操作是什么...

`riscv`的译码还是比较简单的，这边可以自行阅读指令手册。

下面是部分译码代码

```verilog
    // opcode
    // reg-imm
    wire rv64_alu_imm   = (opcode == 7'b00_100_11);
    wire rv64_alu_imm_w = (opcode == 7'b00_110_11);
    // reg-reg
    wire rv64_alu       = (opcode == 7'b01_100_11);
    wire rv64_alu_w     = (opcode == 7'b01_110_11);
    wire rv64_branch    = (opcode == 7'b11_000_11);
    wire rv64_jal       = (opcode == 7'b11_011_11);
    wire rv64_jalr      = (opcode == 7'b11_001_11);
    wire rv64_load      = (opcode == 7'b00_000_11);
    wire rv64_store     = (opcode == 7'b01_000_11);
    wire rv64_lui       = (opcode == 7'b01_101_11);
    wire rv64_auipc     = (opcode == 7'b00_101_11);
    wire rv64_system    = (opcode == 7'b11_100_11);

	// ALU OP
    // 1. reg-imm
    wire rv64_addi  = rv64_alu_imm   & (fun3 == 3'b000);
    wire rv64_addiw = rv64_alu_imm_w & (fun3 == 3'b000);
    wire rv64_slli  = rv64_alu_imm   & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slliw = rv64_alu_imm_w & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slti  = rv64_alu_imm   & (fun3 == 3'b010);
    wire rv64_sltui = rv64_alu_imm   & (fun3 == 3'b011);
    wire rv64_xori  = rv64_alu_imm   & (fun3 == 3'b100);
    wire rv64_srli  = rv64_alu_imm   & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srliw = rv64_alu_imm_w & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srai  = rv64_alu_imm   & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_sraiw = rv64_alu_imm_w & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_ori   = rv64_alu_imm   & (fun3 == 3'b110);
```

### 读寄存器

根据上面译码出的寄存器号从寄存器文件中读出寄存器的值，也没什么好说的。

### load-use冒险

如果在译码阶段发现，要读的寄存器号等于在执行阶段且指令类型为`load`类型要写回的寄存器号，这个时候是无法通过前递解决数据冒险的，只能暂停一个周期。

```verilog
assign id_load_use_o =  !id_flush_i && EX_op_load_i 
                         && ((need_rs1 && EX_rd_idx_i == id_rs1_idx_o) || (need_rs2 && 
                         EX_rd_idx_i == id_rs2_idx_o));
```

这边有个坑就是，如果是需要冲刷译码阶段，是不需要检测load-use冒险的。因为冲刷了就代表这条指令不需要执行了，也不存在什么数据冒险了。

对于阻塞我们这边让`run = 0`就可以了，可以看流水线握手信号的讲述。

```verilog
assign run = (!id_load_use_i);
assign ID_valid_o = (ID_data_valid && run && !id_flush_i);
assign ID_ready_o = (EX_ready_i && run);
```

## 六.执行

```verilog
module ex(
    // from id
    // OP INFO
    input  [`OP_INFO_WIDTH-1:0]     optype_info_i,
    input  [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input  [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]  ld_st_info_i,
    input  [`CSR_INFO_WIDTH-1:0]    csr_info_i,
    input  [4:0]                    EX_rs1_idx_i,
    input  [4:0]                    EX_rs2_idx_i,
    input                           EX_prdt_taken_i,
    // OP NUMBER
    input  [`PC_WIDTH-1:0]          pc_i,
    input  [`XLEN-1:0]              rs1_rdata_i,
    input  [`XLEN-1:0]              rs2_rdata_i,
    input  [`XLEN-1:0]              imm_i,
    // from csr
    input  [`XLEN-1:0]              csr_rdata_i,
    // to MEM
    output [`XLEN-1:0]              ex_alu_res_o,
    output [`XLEN-1:0]              ex_csr_rdata_o,
    output [`XLEN-1:0]              ex_csr_wdata_o,
    // JUMP
    output                          ex_jump_o,
    output [`PC_WIDTH-1:0]          ex_jump_pc_o
);
```

### 1.前递

```verilog
    wire rs1_MEM_fwd = MEM_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == MEM_rd_idx_i);
    wire rs2_MEM_fwd = MEM_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == MEM_rd_idx_i);

    wire rs1_WB_fwd = WB_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == WB_rd_idx_i);
    wire rs2_WB_fwd = WB_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == WB_rd_idx_i);
	
	// 使用最新指令的写回的值作为前递的值
    assign EX_rs1_rdata_o = rs1_MEM_fwd ? MEM_fwd_data_i
                          : rs1_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs1_rdata_r & {`XLEN{EX_data_valid}};
    assign EX_rs2_rdata_o = rs2_MEM_fwd ? MEM_fwd_data_i
                          : rs2_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs2_rdata_r & {`XLEN{EX_data_valid}};
```

### 2.csr数据冒险检测

```verilog
    wire csr_hazard = EX_csr_ren && !ex_flush_i
                    && ((MEM_csr_wen_i && MEM_csr_idx_i == EX_csr_idx_o) || (WB_csr_wen_i  && WB_csr_idx_i  == EX_csr_idx_o));
	// 检测到冒险就阻塞
    assign run = (!csr_hazard);
```

### 3.ALU单元

```verilog
module alu(
    input [`OP_INFO_WIDTH-1:0]     optype_info_i,
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    // op number
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,
    output [`XLEN-1:0]    alu_res_o,
    output                alu_branch_jump_o
);
```

- 计算计算指令写回目的寄存器的值

  ```verilog
      // 加减
      wire [`XLEN-1:0] adder_op1 = alu_op1;
      wire [`XLEN-1:0] adder_op2 = {`XLEN{res_sel_sub}} ^ alu_op2;
      wire adder_cin = res_sel_sub;
      wire adder_cout;
      assign {adder_cout, alu_add_sub_res} = adder_op1 + adder_op2 + {63'b0, adder_cin};
  
      // slt
      assign alu_slt_res  = {63'b0, lt};
      // sltu
      assign alu_sltu_res = {63'b0, ltu};
  
      // 移位操作
      wire [5:0] shift_op2 = (op_alu_imm_w | op_alu_w) ? {1'b0, alu_op2[4:0]} : alu_op2[5:0];
      // sll
      assign alu_sll_res   = alu_op1 << shift_op2;
      // srl
      assign alu_srl_res   = alu_op1 >> shift_op2;
      // sra
      assign alu_sra_res   = $signed(alu_op1) >>> shift_op2;
      
      // 逻辑操作
      // and
      assign alu_and_res   = alu_op1 & alu_op2;
      // or
      assign alu_or_res    = alu_op1 | alu_op2;
      // xor
      assign alu_xor_res   = alu_op1 ^ alu_op2;
  
  //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
  // ALU结果选择
  //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
  
      wire [`XLEN-1:0] alu_res = ({`XLEN{res_sel_add_sub}} & alu_add_sub_res) 
                               | ({`XLEN{res_sel_sll}}     & alu_sll_res)
                               | ({`XLEN{res_sel_slt}}     & alu_slt_res)
                               | ({`XLEN{res_sel_sltu}}    & alu_sltu_res)
                               | ({`XLEN{res_sel_xor}}     & alu_xor_res)
                               | ({`XLEN{res_sel_srl}}     & alu_srl_res)
                               | ({`XLEN{res_sel_sra}}     & alu_sra_res)
                               | ({`XLEN{res_sel_or}}      & alu_or_res)
                               | ({`XLEN{res_sel_and}}     & alu_and_res);
  
      // 对于ALU_W ALU_IMM_W
      // 1. 将结果截断至32位 
      // 2. 将截断结果符号扩展后放入rd
      wire [`XLEN-1:0] alu_res_w = { {32{alu_res[31]}}, alu_res[31:0] };
      assign alu_res_o = (op_alu_w | op_alu_imm_w) ? alu_res_w : alu_res;
  ```

- 计算分支指令是否跳转

  ```verilog
  //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
  // 分支结果计算
  //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
      wire ne  = (|alu_xor_res);
      wire eq  = ~ne;
      // 有符号比较
      // 1. 符号不同 
      // op1为负数 op2为正数 lt = 1
      // 2. 符号相同
      // res为负数 lt = 1
      wire lt  = ((alu_op1[63] & ~alu_op2[63]) | (~(alu_op1[63] ^ alu_op2[63]) & alu_add_sub_res[63]));
      wire ltu = ~adder_cout;
      
      wire ge  = ~lt;
      wire geu = ~ltu;
  
      assign alu_branch_jump_o = (branch_beq  & eq)
                               | (branch_bne  & ne)
                               | (branch_blt  & lt)
                               | (branch_bge  & ge)
                               | (branch_bltu & ltu)
                               | (branch_bgeu & geu);
  ```

- 计算访存指令的访存地址

  复用`alu_res_o`的结果

### 4.分支预测冲刷流水线

```verilog
    wire op_jalr   = optype_info_i[`OP_JALR];

    wire mis_prdt = branch_jump ^ EX_prdt_taken_i;
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = (op_jalr || branch_jump) ? imm_i : 64'd4;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;

    assign ex_jump_o = mis_prdt || op_jalr;

    assign ex_csr_rdata_o = csr_rdata_i;
```

### 5.生成写回CSR寄存器的内容

- 读`CSR`寄存器
- 根据从`CSR`寄存器中读到的内容生成写回`CSR`寄存器的内容

```verilog
    wire csr_csrrw = csr_info_i[`CSR_CSRRW];
    wire csr_csrrs = csr_info_i[`CSR_CSRRS];
    wire csr_csrrc = csr_info_i[`CSR_CSRRC];

    wire csr_csrrwi = csr_info_i[`CSR_CSRRWI];
    wire csr_csrrsi = csr_info_i[`CSR_CSRRSI];
    wire csr_csrrci = csr_info_i[`CSR_CSRRCI];

    wire [`XLEN-1:0] csr_src2;
    assign csr_src2 = (csr_csrrw | csr_csrrs | csr_csrrc) ? rs1_rdata_i : {59'b0, EX_rs1_idx_i};

    wire [`XLEN-1:0] csrrw_res = csr_src2;
    wire [`XLEN-1:0] csrrs_res = csr_rdata_i |   csr_src2;
    wire [`XLEN-1:0] csrrc_res = csr_rdata_i & (~csr_src2);


    assign ex_csr_wdata_o = {`XLEN{(csr_csrrw | csr_csrrwi)}} & csrrw_res
                          | {`XLEN{(csr_csrrs | csr_csrrsi)}} & csrrs_res
                          | {`XLEN{(csr_csrrc | csr_csrrci)}} & csrrc_res;
```

## 七.访存

```verilog
module mem(
    input                          mem_flush_i,
    input  [`LD_ST_INFO_WIDTH-1:0] ld_st_info_i,
    input  [`XLEN-1:0]             mem_addr_i,
    input  [`XLEN-1:0]             mem_wdata_i,
    output [`XLEN-1:0]             mem_rdata_o,
    // excp
    input                          MEM_pc_misalign_i,
    input                          MEM_if_bus_err_i,
    input                          MEM_ilegl_instr_i,
    input                          MEM_ecall_i,
    input                          MEM_ebreak_i,
    input                          MEM_mret_i,
    output                         mem_ld_misalign_o,
    output                         mem_ld_bus_err_o,
    output                         mem_st_misalign_o,
    output                         mem_st_bus_err_o,
    // mem x ram
    output [`XLEN-1:0]             ram_addr_o,
    // write
    output                         ram_wen_o,
    output [7:0]                   ram_byte_en_o,
    output [`XLEN-1:0]             ram_wdata_o,
    // read
    output                         ram_ren_o,
    input  [`XLEN-1:0]             ram_rdata_i
);
```

- ram的读/写数据位宽为8字节，所以访问ram的地址的低三位为0，需要将访存地址的低三位置0作为ram的读写地址

  ```verilog
   assign ram_addr_o = {mem_addr_i[63:3], 3'b0};
  ```

### 1.异常处理

```verilog
    // excp
    assign mem_ld_misalign_o = (lh | lhu) & ( mem_addr_i[0])
                             | (lw | lwu) & (|mem_addr_i[1:0])
                             |  ld        & (|mem_addr_i[2:0]);
    assign mem_ld_bus_err_o = 0;

    assign mem_st_misalign_o = sh & ( mem_addr_i[0])
                             | sw & (|mem_addr_i[1:0])
                             | sd & (|mem_addr_i[2:0]);
    assign mem_st_bus_err_o = 0;

    wire mem_excp = MEM_pc_misalign_i | MEM_if_bus_err_i | MEM_ecall_i       | MEM_ebreak_i     | MEM_mret_i
                  | mem_ld_misalign_o | mem_ld_bus_err_o | mem_st_misalign_o | mem_st_bus_err_o;
```

如果访存级指令发生了异常/写回级发生了异常，都不能对存储器进行访问，不能修改计算机的状态！

```verilog
    // 读使能
    assign ram_ren_o   = !mem_flush_i && !mem_excp && (lb || lh || lw || ld || lbu || lhu || lwu);
    // 写使能
    assign ram_wen_o   = !mem_flush_i && !mem_excp && (sb || sh || sw || sd);
```

### 2.LOAD指令

- 根据load类型以及地址低三位选择`ram_rdata_i`的内容

  例如`lb`指令的数据可能是`ram_rdata_i`中的任意一个字节

  ```verilog
      reg [7:0] lb_rdata;
      always @(*) begin
          case(mem_addr_i[2:0])
              3'b000: lb_rdata = ram_rdata_i[7 :0 ];
              3'b001: lb_rdata = ram_rdata_i[15:8 ];
              3'b010: lb_rdata = ram_rdata_i[23:16];
              3'b011: lb_rdata = ram_rdata_i[31:24];
              3'b100: lb_rdata = ram_rdata_i[39:32];
              3'b101: lb_rdata = ram_rdata_i[47:40];
              3'b110: lb_rdata = ram_rdata_i[55:48];
              3'b111: lb_rdata = ram_rdata_i[63:56];
              default: lb_rdata = 8'b0;
          endcase
      end
      // lh
      reg [15:0] lh_rdata;
      always @(*) begin
          case(mem_addr_i[2:1])
              2'b00: lh_rdata = ram_rdata_i[15:0];
              2'b01: lh_rdata = ram_rdata_i[31:16];
              2'b10: lh_rdata = ram_rdata_i[47:32];
              2'b11: lh_rdata = ram_rdata_i[63:48];
              default lh_rdata = 16'b0;
          endcase
      end
      // lw
      reg [31:0] lw_rdata;
      always @(*) begin
          if(mem_addr_i[2] == 1'b0)
              lw_rdata = ram_rdata_i[31:0];
          else
              lw_rdata = ram_rdata_i[63:32];
      end
  ```

- 扩展成64位数据

  ```verilog
      // 符号扩展
      wire [`XLEN-1:0] mem_rdata_lb  = {{56{lb_rdata[7 ]}}, lb_rdata};
      wire [`XLEN-1:0] mem_rdata_lh  = {{48{lh_rdata[15]}}, lh_rdata};
      wire [`XLEN-1:0] mem_rdata_lw  = {{32{lw_rdata[31]}}, lw_rdata};
      wire [`XLEN-1:0] mem_rdata_ld  = ram_rdata_i;
      // 无符号扩展
      wire [`XLEN-1:0] mem_rdata_lbu = {{56'b0}, lb_rdata};
      wire [`XLEN-1:0] mem_rdata_lhu = {{48'b0}, lh_rdata};
      wire [`XLEN-1:0] mem_rdata_lwu = {{32'b0}, lw_rdata};
  ```

- 结果选择

  ```verilog
      // 结果选择
      assign mem_rdata_o = {{`XLEN{lb}}  & mem_rdata_lb}
                         | {{`XLEN{lh}}  & mem_rdata_lh}
                         | {{`XLEN{lw}}  & mem_rdata_lw}
                         | {{`XLEN{ld}}  & mem_rdata_ld}
                         | {{`XLEN{lbu}} & mem_rdata_lbu}
                         | {{`XLEN{lhu}} & mem_rdata_lhu}
                         | {{`XLEN{lwu}} & mem_rdata_lwu};
  ```

### 3.STORE指令

写入内存的数据位宽为8字节，但是有些指令只需要其中部分字节，这时候就需要字节使能，控制写入哪些部分

- 字解使能

  ```verilog
     reg [7:0] sb_byte_en;
      always @(*) begin
          case(mem_addr_i[2:0])
              3'b000: sb_byte_en = 8'b0000_0001;
              3'b001: sb_byte_en = 8'b0000_0010;
              3'b010: sb_byte_en = 8'b0000_0100;
              3'b011: sb_byte_en = 8'b0000_1000;
              3'b100: sb_byte_en = 8'b0001_0000;
              3'b101: sb_byte_en = 8'b0010_0000;
              3'b110: sb_byte_en = 8'b0100_0000;
              3'b111: sb_byte_en = 8'b1000_0000;
              default: sb_byte_en = 8'b0000_0000;
          endcase
      end
      // sh
      reg [7:0] sh_byte_en;
      always @(*) begin
          case(mem_addr_i[2:1])
              2'b00: sh_byte_en = 8'b0000_0011;
              2'b01: sh_byte_en = 8'b0000_1100;
              2'b10: sh_byte_en = 8'b0011_0000;
              2'b11: sh_byte_en = 8'b1100_0000;
              default: sh_byte_en = 8'b0000_0000;
          endcase
      end
      // sw
      reg [7:0] sw_byte_en;
      always @(*) begin
          case(mem_addr_i[2])
              1'b0: sw_byte_en = 8'b0000_1111;
              1'b1: sw_byte_en = 8'b1111_0000;
              default: sw_byte_en = 8'b0000_0000;
          endcase
      end
  
      // 字节使能
      assign ram_byte_en_o = ({8{sb}} & sb_byte_en)
                           | ({8{sh}} & sh_byte_en)
                           | ({8{sw}} & sw_byte_en)
                           | ({8{sd}} & 8'b1111_1111);
  ```

- 写入数据

  ```verilog
    	// 简单写法，配合字节使能就可以写入正确的位置
  	assign ram_wdata_o = ({64{sb}} & {8{mem_wdata_i[7:0]}})
                         | ({64{sh}} & {4{mem_wdata_i[15:0]}})
                         | ({64{sw}} & {2{mem_wdata_i[31:0]}})
                         | ({64{sd}} & mem_wdata_i);
  ```

## 八.写回

```verilog
module wb(
    input [`PC_WIDTH-1:0]      WB_pc_i,
    input [`INSTR_WIDTH-1:0]   WB_instr_i,
    input [`OP_INFO_WIDTH-1:0] WB_optype_info_i,
    input                      WB_csr_wen_i,
    input [11:0]               WB_csr_idx_i,
    input [`XLEN-1:0]          WB_csr_wdata_i,
    input                      WB_rd_wen_i,
    input [4:0]                WB_rd_idx_i,
    input [`XLEN-1:0]          WB_alu_res_i,
    input [`XLEN-1:0]          WB_csr_rdata_i,
    input [`XLEN-1:0]          WB_mem_rdata_i,
    // write back to rd
    output                     wb_rd_wen_o,
    output [4:0]               wb_rd_idx_o,
    output [`XLEN-1:0]         wb_rd_wdata_o,
    // write back to csr
    output                     wb_csr_wen_o,
    output [11:0]              wb_csr_idx_o,
    output [`XLEN-1:0]         wb_csr_wdata_o,
    // excp
    input                      WB_pc_misalign_i,
    input                      WB_if_bus_err_i,
    input                      WB_ilegl_instr_i,
    input                      WB_ecall_i,
    input                      WB_ebreak_i,
    input                      WB_mret_i,
    input                      WB_ld_misalign_i,
    input                      WB_ld_bus_err_i,
    input                      WB_st_misalign_i,
    input                      WB_st_bus_err_i,
    // from csr
    input                      mstatus_mie_rdata_i,
    input                      mie_meie_rdata_i,
    input                      mie_mtie_rdata_i,
    input                      mie_msie_rdata_i,
    input                      mip_meip_rdata_i,
    input                      mip_mtip_rdata_i,
    input                      mip_msip_rdata_i,
    input [`XLEN-1:0]          mtvec_rdata_i,  
    input [`XLEN-1:0]          mepc_rdata_i,  
    // to csr
    output                     mcause_wen_o,
    output [`XLEN-1:0]         mcause_wdata_o,
    output                     mtval_wen_o,
    output [`XLEN-1:0]         mtval_wdata_o,
    output                     mepc_wen_o,
    output [`XLEN-1:0]         mepc_wdata_o,
    output                     mstatus_mie_set_o,
    output                     mstatus_mie_clear_o,
    // to controller
    output                     wb_trap_o,
    output [`XLEN-1:0]         wb_trap_handle_pc_o
);
```

### 1.写回通用寄存器

```verilog
    wire op_load   = WB_optype_info_i[`OP_LOAD];
    wire op_system = WB_optype_info_i[`OP_SYSTEM];    
    assign wb_rd_wdata_o = op_load   ? WB_mem_rdata_i
                         : op_system ? WB_csr_rdata_i
                         : WB_alu_res_i;
	// 有异常就不能写回
    assign wb_rd_wen_o   = WB_rd_wen_i && !wb_excp;
    assign wb_rd_idx_o   = WB_rd_idx_i;
```

### 2.写回CSR寄存器

```verilog
    assign wb_csr_wen_o   = WB_csr_wen_i && !wb_excp;
    assign wb_csr_idx_o   = WB_csr_idx_i;
    assign wb_csr_wdata_o = WB_csr_wdata_i;
```

## 九.异常处理

​		异常就是CPU执行过程中出现了异常情况，比如说在译码阶段发现了`非法指令`或者是访存阶段`load地址不对齐`，这个时候我们需要处理这种情况。

下面我将介绍我这个CPU是如何设计异常处理的。

​		我是在写回阶段统一处理异常和中断的，这样处理异常可以做到精准异常，异常之前的指令都执行完成，异常之后的指令都没执行。

为了做到异常之后的指令都没执行，就是不能让异常之后的指令修改计算机状态。这边我只需要注意当写回级有异常时，访存级不能`load`或者`store`。

如果一条指令发生了异常需要把异常类型和PC一直携带到写回阶段，同时在访存阶段也不可以`load`或者`store`，在写回阶段也不能写回。

​		异常处理就是跳转到异常处理程序，执行完异常处理程序之后还需要跳转回发生异常的指令，重新执行。所以就需要异常处理程序的入口地址，就是`mtvec`寄存器，还需要保存发生异常指令的PC就是保存到`mepc`寄存器。同时我们还需要保存发生异常的类型和发生异常的额外信息，这边就需要`mcause`保存发生异常的原因，`mtval`发生异常的额外信息。

- `mtvec`: 异常处理程序的入口地址
- `mepc`: 异常处理程序的返回地址
- `mcause`: 发生异常的原因
- `mtval`: 发生异常的额外信息

下面是我实现的代码:

```verilog
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 异常处理
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // 1. 发生异常的指令的PC -> mepc
    // 2. 发生异常的原因     -> mcause
    // 3. 冲刷流水线        pc <- mtvec

    wire wb_excp;
    wire wb_int;

    wire int_exter;
    wire int_time;
    wire int_soft;

    assign int_exter = mstatus_mie_rdata_i && mie_meie_rdata_i && mip_meip_rdata_i;
    assign int_time  = mstatus_mie_rdata_i && mie_mtie_rdata_i && mip_mtip_rdata_i;
    assign int_soft  = mstatus_mie_rdata_i && mie_msie_rdata_i && mip_msip_rdata_i;

    assign wb_excp = WB_pc_misalign_i | WB_if_bus_err_i 
                   | WB_ilegl_instr_i | WB_ecall_i      | WB_ebreak_i      | WB_mret_i
                   | WB_ld_misalign_i | WB_ld_bus_err_i | WB_st_misalign_i | WB_st_bus_err_i;
    
    assign wb_int = int_exter | int_time | int_soft;

    assign wb_trap_o = wb_excp | wb_int;
    assign wb_trap_handle_pc_o = WB_mret_i ? mepc_rdata_i : mtvec_rdata_i;
    // update csr
    // 1.mcause: 发生异常的原因
    assign mcause_wen_o   = wb_trap_o && !WB_mret_i;
    
    wire [3:0] excp_code;
    assign excp_code = WB_pc_misalign_i ? 4'd0   // 指令地址不对齐
                    : WB_if_bus_err_i   ? 4'd1   // 指令访存错误
                    : WB_ilegl_instr_i  ? 4'd2   // 非法指令
                    : WB_ebreak_i       ? 4'd3   // 断点
                    : WB_ld_misalign_i  ? 4'd4   // 读存储器地址不对齐
                    : WB_ld_bus_err_i   ? 4'd5   // 读存储器访存错误
                    : WB_st_misalign_i  ? 4'd6   // 写存储器地址不对齐
                    : WB_st_bus_err_i   ? 4'd7   // 写存储器访存错误
                    : WB_ecall_i        ? 4'd11  // 机器模式环境调用  
                    : 4'd0;
    
    wire [3:0] int_code;
    assign int_code = int_soft  ? 4'd3
                    : int_time  ? 4'd7
                    : int_exter ? 4'd11
                    : 4'd0;
    
    assign mcause_wdata_o = wb_int ? {1'b1, 59'b0, int_code} : {60'b0, excp_code};
    
    // 2.mtval: 异常的详细信息
    assign mtval_wen_o = wb_trap_o && !WB_mret_i;
    // 非法指令: 指令 
    // 访问存储器错误: 访问存储器地址
    assign mtval_wdata_o = (WB_pc_misalign_i | WB_if_bus_err_i) ? WB_pc_i
                         : WB_ilegl_instr_i ? {32'b0, WB_instr_i} 
                         : WB_alu_res_i;
    

    // 3.mepc: trap处理程序返回地址
    // 1. excp: 发生异常指令的地址
    // 2. int:  发生中断下一条指令的地址
    assign mepc_wen_o  =  wb_trap_o && !WB_mret_i;
    assign mepc_wdata_o = wb_excp ? WB_pc_i : WB_pc_i + 4;

    // excp
    // mstatus_mie  = 0
    // mstatus_mpie = mie
    // mret
    // mstatus_mie  = mpie
    // mstatus_mpie = 1
    assign mstatus_mie_set_o   = wb_trap_o && !WB_mret_i;
    assign mstatus_mie_clear_o = WB_mret_i;
```

