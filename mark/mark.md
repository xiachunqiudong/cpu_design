

# 一.组会记录

## 2023年1月

### 1月1日

1. 项目不知道怎么展示
   - 支持指令条数 种类 RV64IM
   - 冒险
   - 验证测试
2. 不是科班
3. 没有实习经历
4. 本科学校不行

### 1月8日

HDLBITS刷题状态：

![image-20230107191955945](/home/xia/.config/Typora/typora-user-images/image-20230107191955945.png)

1. 实现单周期`RISCV`cpu 

2. CSR指令实现

   `CSRRW rd, csr, rs1`

   rd <= csr

   csr <= rs1 

   - 在译码阶段读取CSR寄存器的内容
   - 在写回阶段写CSR寄存器以及rd

3. 中断/异常指令实现

   将异常/中断信息带着带到写回阶段处理

   如果是异常就不可以修改处理器状态，中断应该可以？

   - 不能写寄存器
   - 不能写内存

# 二.CPU模块设计

## 1. INSTR FETCH

```verilog
module instr_fetch(
    input  [`PC_WIDTH-1:0]    pc_i,
    output [`PC_WIDTH-1:0]    if_pc_next_o,
    
    output [`INSTR_WIDTH-1:0] if_instr_o,

    // to reffile
    output                    if_jalr_rs1_en_o,
    output [4:0]              if_jalr_rs1_idx_o,
    // from regfile
    input  [`XLEN-1:0]        jalr_rs1_rdata_i,

    // 取指异常
    output                    if_pc_misalign_o, // 取指地址不对齐
    output                    if_bus_err_o      
);
```

### 目的:

- 取指 

   instr = mem[pc]

- 更新PC

  pc_next = pc + 4

### 1.1从内存中取出指令

根据PC取出INSTR

例化了一个取指单元

```verilog
    // if x bus
    if_bus if_bus_u(
        .pc_i                 ( pc_i             ),
        .if_bus_instr_o       ( if_instr_o       ),
        .if_bus_pc_misalign_o ( if_pc_misalign_o ),
        .if_bus_bus_err_o     ( if_bus_err_o     )
    );
```

实际是一个假的和内存交互的模块

```verilog
// 取指模块
module if_bus(
    // if
    input  [`PC_WIDTH-1:0]    pc_i,

    output [`INSTR_WIDTH-1:0] if_bus_instr_o,
    output                    if_bus_pc_misalign_o,
    output                    if_bus_bus_err_o
);

    assign if_bus_pc_misalign_o = 0;
    assign if_bus_bus_err_o = 0;

    reg [7:0] instr_mem[0:1023];

    // 小端法 低位在低地址
    wire [9:0] pc = pc_i[9:0];
    assign if_bus_instr_o = {instr_mem[pc+3], instr_mem[pc+2], instr_mem[pc+1], instr_mem[pc]};

    // 从code.txt中读入指令
    initial begin
        $readmemh("./code.txt", instr_mem);
    end
    
endmodule
```

### 1.2计算下一条PC

如果是单周期的CPU实现起来很简单，但是如果流水化就需要在取指阶段计算出下一条指令的PC

首先需要知道当前指令的类型，才可以确地下条指令的PC，这边例化了一个`mini_decode`, 实际上里面套娃了一个`id`模块

```verilog
    // 简单译码
    if_mini_dec if_mini_dec_u(
        .instr_i                 ( if_instr_o        ),
        .mini_dec_jal_o          ( mini_dec_jal      ),
        .mini_dec_jalr_o         ( mini_dec_jalr     ),
        .mini_dec_branch_o       ( mini_dec_branch   ),
        .mini_dec_jalr_rs1_idx_o ( if_jalr_rs1_idx_o ),
        .mini_dec_imm_o          ( mini_dec_imm      )
    );
```

对于`RISCV`来说有2个问题

- `branch`指令: 需要到执行阶段才可以知道是否需要跳转

  分支预测?

- `jalr`指令: 需要读取`rs1`中的内容，如果存在RAW数据相关性怎么办

  不知道

PC计算

```verilog
    wire bj = mini_dec_branch | mini_dec_jal | mini_dec_jalr;    
    // jal & branch pc_next = pc + imm   -> PC相对跳转
    // jalr         pc_next = rs1 + imm  -> 绝对跳转 可以配合auipc实现大范围间接跳转，虚拟机？
    wire [`PC_WIDTH-1:0] bj_pc_op1 = (mini_dec_jal | mini_dec_branch) ? pc_i :
                                      mini_dec_jalr                   ? jalr_rs1_rdata_i
                                                                      : 0;

    wire [`PC_WIDTH-1:0] bj_pc_op2 = mini_dec_imm;

    // 跳转:   pc_next = bj_pc_op1 + bj_pc_op2
    // 不跳转: pc_next = pc + 4
    wire [`PC_WIDTH-1:0] pc_add_op1 = bj ? bj_pc_op1 : pc_i;
    wire [`PC_WIDTH-1:0] pc_add_op2 = bj ? bj_pc_op2 : 4;

    assign if_pc_next_o = pc_add_op1 + pc_add_op2;
```

### 1.3取值阶段产生的异常

- 取指地址不对齐

  RV64I指令都是四字节，所以最后两位为0

- 取值访存错误

  访问不该访问的区域

## 2. INSTR DECODE

```verilog
module id(
    input [`INSTR_WIDTH-1:0] instr_i,
        
    // id x regfile
    output             id_rs1_en_o,
    output [4:0]       id_rs1_idx_o,
    output             id_rs2_en_o,
    output [4:0]       id_rs2_idx_o,
    // form regfile
    input  [`XLEN-1:0] rf_rs1_rdata_i,
    input  [`XLEN-1:0] rf_rs2_rdata_i,
    
    // id x csr
    // to csr
    output                          id_csr_en_o,// csr指令既要读也要写,x0在csr内部处理
    output [11:0]                   id_csr_idx_o,
    // from csr
    input  [`XLEN-1:0]              csr_rdata_i,
    
    // to ex
    // op info
    output [`OP_INFO_WIDTH-1:0]     id_opcode_info_o,
    output [`ALU_INFO_WIDTH-1:0]    id_alu_info_o,
    output [`BRANCH_INFO_WIDTH-1:0] id_branch_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info_o,
    output [`CSR_INFO_WIDTH-1:0]    id_csr_info_o,
    // op number
    output [`XLEN-1:0]              id_rs1_rdata_o,
    output [`XLEN-1:0]              id_rs2_rdata_o,
    output [`XLEN-1:0]              id_imm_o,


    // to write back
    output                          id_rd_en_o,
    output [4:0]                    id_rd_idx_o,
    output [`XLEN-1:0]              id_csr_rdata_o,
    // excp
    output id_ilegl_instr_o,
    output id_ecall_o,
    output id_ebreak_o,
    output id_mret_o
);
```

### 目的:

- 指令译码

  希望在译码阶段就完成指令的译码工作，产生的控制信号控制后面几个阶段

- 读取操作数
  - 寄存器文件
  - 立即数

- 读取CSR寄存器

### 1.指令分解

得益于RISCV规整的设计，这个部分很好实现

```verilog
    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];
```

### 2.RV64I译码

根据`opcode`, ` fun3`, ` fun7`确定指令需要做什么

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
    wire rv64_andi  = rv64_alu_imm   & (fun3 == 3'b111);

	//...
```

产生的信号有

- opcode_info

  |     SIGNAL     | POSITION |
  | :------------: | :------: |
  |  `OP_ALU_IMM`  |    11    |
  | `OP_ALU_IMM_W` |    10    |
  |    `OP_ALU`    |    9     |
  |   `OP_ALU_W`   |    8     |
  |  `OP_BRANCH`   |    7     |
  |    `OP_JAL`    |    6     |
  |   `OP_JALR`    |    5     |
  |   `OP_LOAD`    |    4     |
  |   `OP_STORE`   |    3     |
  |    `OP_LUI`    |    2     |
  |   `OP_AUIPC`   |    1     |
  |  `OP_SYSTEM`   |    0     |

  ```verilog
      // OP INFO
      assign id_opcode_info_o = {
                                rv64_alu_imm,
                                rv64_alu_imm_w,
                                rv64_alu,
                                rv64_alu_w,
                                rv64_branch,
                                rv64_jal,
                                rv64_jalr,
                                rv64_load,
                                rv64_store,
                                rv64_lui,
                                rv64_auipc,
                                rv64_system
                                };
  ```

- alu_info

  |   SIGNAL   | POSITION |
  | :--------: | :------: |
  | `ALU_ADD`  |    9     |
  | `ALU_SUB`  |    8     |
  | `ALU_SLL`  |    7     |
  | `ALU_SLT`  |    6     |
  | `ALU_SLTU` |    5     |
  | `ALU_XOR`  |    4     |
  | `ALU_SRL`  |    3     |
  | `ALU_SRA`  |    2     |
  |  `ALU_OR`  |    1     |
  | `ALU_AND`  |    0     |
  
- branch_info

  |    SIGNAL     | POSITION |
  | :-----------: | :------: |
  | `BRANCH_BEQ`  |    5     |
  | `BRANCH_BNE`  |    4     |
  | `BRANCH_BLT`  |    3     |
  | `BRANCH_BGE`  |    2     |
  | `BRANCH_BLTU` |    1     |
  | `BRANCH_BGEU` |    0     |

- ld_st_info

  |  SIGNAL  | POSITION |
  | :------: | :------: |
  | `LD_LB`  |    10    |
  | `LD_LH`  |    9     |
  | `LD_LW`  |    8     |
  | `LD_LD`  |    7     |
  | `LD_LBU` |    6     |
  | `LD_LHU` |    5     |
  | `LD_LWU` |    4     |
  | `ST_SB`  |    3     |
  | `LD_LH`  |    2     |
  | `LD_LW`  |    1     |
  | `LD_LD`  |    0     |

- csr_info

  |  SIGNAL  | POSITION |
  | :------: | :------: |
  | `CSRRW`  |    5     |
  | `CSRRS`  |    4     |
  | `CSRRC`  |    3     |
  | `CSRRWI` |    2     |
  | `CSRRSI` |    1     |
  | `CSRRCI` |    0     |

### 3.操作数解析

#### 3.1寄存器

操作数在寄存器文件中

根据`rs1_idx`, `rs2_idx`从寄存器文件中读取对应的操作数

`rs1_en`, ` rs2_en`, `rd_en`信号

- 是否读取rs1
- 是否读取rs2
- 是否写回rd

```verilog
    // RV64I不需要rs1的有:
    // 1. lui/auipc
    // 2. jal
    // 3. csrrwi/csrrsi/csrrci
    // 4. ecall/ebreak/mret
    wire rv64_need_rs1 = (~rv64_lui)    & (~rv64_auipc)  & (~rv64_jal)
                       & (~rv64_csrrwi) & (~rv64_csrrsi) & (~rv64_csrrci)
                       & (~rv64_ecall)  & (~rv64_ebreak) & (~rv64_mret);

    // RV64I需要rs2的有
    // 1. rv64_alu
    // 2. branch
    // 3. store
    wire rv64_need_rs2 = (rv64_alu | rv64_alu_w | rv64_branch | rv64_store);

    // RV64I不需要rd的有
    // 1. ecall/ebreak
    // 2. fence/fence_i
    // 3. branch
    // 4. store
	wire rv64_need_rd = (~rv64_ecall)  & (~rv64_ebreak) & (~rv64_mret)
                      & (~rv64_branch) & (~rv64_store);

    // id_rs1_en id_rs2_en id_rd_en
    assign id_rs1_en_o = rv64_need_rs1;
    assign id_rs2_en_o = rv64_need_rs2;
    assign id_rd_en_o  = rv64_need_rd;
```

#### 3.2立即数

操作数在指令中

```verilog
    // 所有立即数都是有符号数 需要进行符号扩展至64位
    wire [`XLEN-1:0] rv64_i_imm = { {52{instr_i[31]}}, instr_i[31:20] };
    wire [`XLEN-1:0] rv64_s_imm = { {52{instr_i[31]}}, instr_i[31:25], instr_i[11:7 ]}; 
    wire [`XLEN-1:0] rv64_b_imm = { {51{instr_i[31]}}, instr_i[31],    instr_i[7],     instr_i[30:25], instr_i[11:8 ], 1'b0};
    wire [`XLEN-1:0] rv64_j_imm = { {43{instr_i[31]}}, instr_i[31],    instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
    wire [`XLEN-1:0] rv64_u_imm = { {32{instr_i[31]}}, instr_i[31:12], 12'b0 };

    // imm选择
    wire rv64_imm_sel_i = rv64_alu_imm | rv64_alu_imm_w | rv64_load | rv64_jalr;
    wire rv64_imm_sel_s = rv64_store;
    wire rv64_imm_sel_b = rv64_branch;
    wire rv64_imm_sel_j = rv64_jal;
    wire rv64_imm_sel_u = rv64_lui & rv64_auipc;

    wire [`XLEN-1:0] rv64_imm = ({`XLEN{rv64_imm_sel_i}} & rv64_i_imm)
                              | ({`XLEN{rv64_imm_sel_s}} & rv64_s_imm)
                              | ({`XLEN{rv64_imm_sel_b}} & rv64_b_imm)
                              | ({`XLEN{rv64_imm_sel_j}} & rv64_j_imm)
                              | ({`XLEN{rv64_imm_sel_u}} & rv64_u_imm);

    assign id_imm_o = rv64_imm;
```

### 4.读取CSR寄存器

根据`id_csr_idx`从csr寄存器中读取内容

```verilog
    // RV64I需要读写csr的有
    // csrrw  csrrs  csrrc
    // csrrwi csrrsi csrrci
    assign id_csr_idx_o = instr_i[31:20];
    wire rv64_need_csr = rv64_csrrw  | rv64_csrrs  | rv64_csrrc
                       | rv64_csrrwi | rv64_csrrsi | rv64_csrrci;
	
	assign id_csr_en_o = rv64_need_csr;
```

## 3. EXECUTION

```verilog
module ex(
    // from id
    // OP INFO
    input [`OP_INFO_WIDTH-1:0]     opcode_info_i,
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    input [`LD_ST_INFO_WIDTH-1:0]  ld_st_info_i,
    input [`CSR_INFO_WIDTH-1:0]    csr_info_i,
    // OP NUMBER
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,

    // to mem/wb
    // ALU 写回数据
    output [`XLEN-1:0] ex_alu_rd_wdata_o,
    // MEM 读写地址
    output [`XLEN-1:0] ex_agu_mem_addr_o,
    // 写回CSR寄存器
    output [`XLEN-1:0] ex_cgu_csr_wdata_o,
    // BRANCH JUMP
    output             ex_branch_jump_o
);
```

### 目的:

- ALU: 
  1. 计算，计算结果写回`rd`
  2. 计算是否需要跳转
- AGU: 地址计算, 用于访存
- CGU: csr_wdata生成，用于写回csr

```verilog
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    alu alu_u(
        .opcode_info_i      ( opcode_info_i     ),
        .alu_info_i         ( alu_info_i        ),
        .branch_info_i      ( branch_info_i     ),
        
        .pc_i               ( pc_i              ),
        .rs1_rdata_i        ( rs1_rdata_i       ),
        .rs2_rdata_i        ( rs2_rdata_i       ),
        .imm_i              ( imm_i             ),

        .alu_res_o          ( ex_alu_rd_wdata_o ),
        .alu_branch_jump_o  ( ex_branch_jump_o  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// AGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    agu agu_u(
        .rs1_rdata_i     ( rs1_rdata_i        ),
        .imm_i           ( imm_i              ),
        .agu_mem_addr_o  ( ex_agu_mem_addr_o  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    cgu u_cgu(
        .csr_info_i       ( csr_info_i          ),
        .rs1_rdata_i      ( rs1_rdata_i         ),
        .imm_i            ( imm_i               ),
        .cgu_csr_wdata_o  ( ex_cgu_csr_wdata_o  )
    );
```

### 1.ALU

```verilog
// ALU的结果直接写回到RD中[除了BRANCH]
// 使用ALU单元的指令有
// 1. ALU
// 2. ALU_IMM
// 3. BRANCH
// 4. JAL JALR
// 5. LUI
// 6. AUIPC

module alu(
    // opcode info
    input [`OP_INFO_WIDTH-1:0]     opcode_info_i,
    // alu info
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    // branch info
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,

    // op number
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,
    // ALU计算结果
    output [`XLEN-1:0]    alu_res_o,
    // 分支跳转结果
    output                alu_branch_jump_o
);
```

#### 1.1操作数选择

```verilog
    // 1. ALU
    // alu_res = rs1 op rs2 
    // 2. ALU_IMM
    // alu_res = rs1 op imm
    // 3. BRANCH
    // alu_res = rs1 - rs2
    // 4. JAL JALR
    // alu_res = pc + 4
    // 5. LUI
    // alu_res = 0 + imm 
    // 6. AUIPC
    // alu_res = pc + imm

    wire [`XLEN-1:0] alu_op1;
    wire [`XLEN-1:0] alu_op2;

    assign alu_op1 = (op_jal | op_jalr | op_auipc) ? pc_i
                   :  op_lui ? 0
                   :  rs1_rdata_i;

    assign alu_op2 = (op_lui | op_auipc | op_alu_imm | op_alu_imm_w) ? imm_i
                   : (op_jal | op_jalr) ? 4
                   : rs2_rdata_i;
```

#### 1.2计算

移位指令实现的有问题

```verilog
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [`XLEN-1:0] alu_add_sub_res;
    wire [`XLEN-1:0] alu_sll_res;
    wire [`XLEN-1:0] alu_slt_res;
    wire [`XLEN-1:0] alu_sltu_res;
    wire [`XLEN-1:0] alu_xor_res;
    wire [`XLEN-1:0] alu_srl_res;
    wire [`XLEN-1:0] alu_sra_res;
    wire [`XLEN-1:0] alu_or_res;
    wire [`XLEN-1:0] alu_and_res;

    // 加减
    assign alu_add_sub_res = alu_op1 + ({`XLEN{res_sel_sub}} ^ alu_op2) + (res_sel_sub ? 1 : 0);
    // sll
    assign alu_sll_res     = alu_op1 << alu_op2[5:0];
    // slt
    assign alu_slt_res     = lt ? 1  : 0;
    // sltu
    assign alu_sltu_res    = ltu ? 1 : 0;
    // xor
    assign alu_xor_res     = alu_op1 ^ alu_op2;
    // srl
    assign alu_srl_res     = alu_op1 >> alu_op2[5:0];
    // sra
    assign alu_sra_res     = $signed(alu_op1) >>> alu_op2[5:0];
    // or
    assign alu_or_res      = alu_op1 | alu_op2;
    // and
    assign alu_and_res     = alu_op1 & alu_op2;
```

#### 1.3计算结果选择

```verilog
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
    wire sel_w_res = op_alu_w | op_alu_imm_w;
    // 截断
    wire [31:0] alu_res_truncat = alu_res[31:0];
    // 符号扩展
    wire [`XLEN-1:0] alu_res_w = { {32{alu_res_truncat[31]}}, alu_res_truncat };

    assign alu_res_o = sel_w_res ? alu_res_w : alu_res;
```

#### 1.4分支计算

```verilog
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 分支计算计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire ne = (|alu_xor_res);
    wire eq = ~ne;
	// offset
    wire lt =  alu_add_sub_res[`XLEN-1];
    wire ge = ~alu_add_sub_res[`XLEN-1] | eq;
    wire ltu ; // 
    wire geu ; 
```



### 2.AGU

```verilog
module agu(
    input  [`XLEN-1:0] rs1_rdata_i,
    input  [`XLEN-1:0] imm_i,
    output [`XLEN-1:0] agu_mem_addr_o
);

    assign agu_mem_addr_o = rs1_rdata_i + imm_i;

endmodule
```

### 3.CGU

## 4. MEMORY

## 5. WRITE BACK

## 6.CSR

### 目的:

- 提供读端口给ID单元
- 提供写端口给WB单元
- 从clint接受中断信息
- 提供读写端口给ctrl模块，用于中断/异常的处理

### 异常处理的CSR

- `mtvec`（Machine Trap Vector）它保存发生异常时处理器需要跳转到的地址。

- `mepc`（Machine Exception PC）它指向发生异常的指令。

- `mcause`（Machine Exception Cause）它指示发生异常的种类。

- `mie`（Machine Interrupt Enable）它指出处理器目前能处理和必须忽略的中断。

- `mip`（Machine Interrupt Pending）它列出目前正准备处理的中断。

- `mtval`（Machine Trap Value）它保存了trap的附加信息：地址异常中出错
  的地址、发生非法指令例外的指令本身，对于其他异常，它的值为 0。

- `mstatus`（Machine Status）它保存全局中断使能，以及许多其他的状态。

  ![image-20230108114729444](/home/xia/.config/Typora/typora-user-images/image-20230108114729444.png)

### 异常处理流程

1. 异常指令的PC保存在mepc, 将PC设置为mtvec
2. 根据异常原因设置mcause, 设置mtval为地址异常的地址或者是异常指令的指令内容
3. 将mstatus.MIE置为0用于屏蔽中断，将mstatus.MPIE = MIE
4. 将异常发生之前权限模式保存在MPP中，再把权限模式改为M
