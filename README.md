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

这边是模拟了一个理想的指令RAM，可以在一个周期内读出指令送往译码阶段

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

由于我们是将指令的执行分成了五个阶段，所以在取指阶段是无法得知下个周期的PC的。

为了能在取指阶段得到下个周期的PC，我们必选知道指令的类型，所以就需要简单译码。

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

#### 条件分支指令:

对于条件分支指令我们在执行阶段才能知道它是否需要跳转。

一种方式是我们可以等到执行阶段冲刷流水线，从需要跳转的PC重新取指。

那有没有更好的办法？那我们可以猜测一下，是跳转还是不跳。至少有一半的几率是对的，如果猜测正确就不需要冲刷流水线了。我们可以猜测向前跳转为跳，反之为不跳，因为大多数循环都是往回跳的多，这样预测的正确率可以进一步提高。这里我们就采用这种方式预测。

```verilog
// 静态分支预测, 向前跳预测为跳, 向后跳预测不跳
assign ifu_prdt_taken_o = (branch & imm[63]);
```

随着流水线级数的加深，我们会越晚知道是否需要跳转，也就代表冲刷流水线的代价越大。所以越高级的CPU就要有更高预测准确率的分支预测器。

#### 跳转链接指令

- `jal`

  可以根据简单译码直接得出跳转地址(PC+ IMM)

  ```verilog
  	assign jump = ifu_prdt_taken_o | jal;
      wire [`XLEN-1:0] pc_add_src2;
      assign pc_add_src2 = jump ? imm : `XLEN'd4;
  
      assign ifu_pc_next_o = if_flush_i ? flush_pc_i 
                           : (IF_pc_i + pc_add_src2);
  ```

- `jalr`

  在译码阶段才可以得到寄存器中的值。

  这边我们的处理方式是在执行阶段处理，一方面是我们可以和分支预测错误公用一个冲刷流水线逻辑，另一方面我们是在执行阶段进行前递操作的。

  这边我们采用的方式相对简单，我们常用x1作为函数调用的返回地址寄存器，我们常使用`jal x1, tag`作为函数调用的指令，使用`jalr x0, x1, 0`作为函数返回指令。这样我们可以用硬件做一个栈，函数调用就把返回地址压栈，函数返回从栈中拿出返回地址。

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

对于取指阶段我们需要从冲刷流水给定的PC开始取指令

对需要冲刷的所有阶段，其实就是让这个阶段产生的数据无效就好了。可以理解成向下一阶段流水线寄存器中插入气泡。

比如说冲刷ID阶段，就是在下个时钟上升沿到来的时候，往EX阶段流水线寄存器中插入气泡。

由于我们采用了`valid` `ready`握手信号，我们可以让`valid` = 0，这样数据到达下个阶段就是个无效数据。说白了 就是我们要让这条指令不能影响处理器的状态。



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

riscv的译码还是比较简单的，这边可以自行阅读指令手册。比较烦人的就是立即数的选择，因为RISCV有五种类型的立即数。

### 读寄存器

根据上面译码出的寄存器号从寄存器文件中读出寄存器的值，也没什么好说的。

### load-use冒险

如果在译码阶段发现，要读的寄存器号等于在执行阶段且指令类型为`load`类型要写回的寄存器号，这个时候是无法通过前递解决数据冒险的，只能暂停一个周期。

```verilog
assign id_load_use_o =  !id_flush_i && EX_op_load_i 
                         && ((need_rs1 && EX_rd_idx_i == id_rs1_idx_o) || (need_rs2 && 
                         EX_rd_idx_i == id_rs2_idx_o));
```

这边有个坑就是，如果是需要冲刷译码阶段，是不需要阻塞的。因为冲刷了就代表这条指令不需要执行了，也不存在什么数据冒险了。

对于阻塞我们这边采用了`run`信号阶段，这边我会单独讲述。

```verilog
assign run = (!id_load_use_i);
assign ID_valid_o = (ID_data_valid && run && !id_flush_i);
assign ID_ready_o = (EX_ready_i && run);
```

## 流水线的握手信号

如果发生了特殊情况，例如`load-use`冒险，或者后续加入乘除法单元，在一个周期内得不到这个阶段需要得到的结果，这个时候我们需要阻塞这个阶段。

一种简单的方式是通过我们往所需阶段插入气泡，暂停某些阶段流水线寄存器。

例如CSAPP里为了解决`load-use`冒险

```verilog
```

