## 取指

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