## 总体介绍

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

## 流水线的握手信号

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

## 取指

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

我们可以猜测向前跳转为跳，反之为不跳，可以规定编译器，循环向前跳转，这样预测的正确率可以进一步提高。

这里我们就采用这种方式预测，注意为了在执行阶段知道预测的结果是否正确，需要把预测结果带到执行阶段。

```verilog
// 静态分支预测, 向前跳预测为跳, 向后跳预测不跳
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

## 译码

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

## 执行

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

## 访存

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

## 写回

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

