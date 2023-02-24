

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

### 1月15日

1. HDLBITS刷题状态：

![image-20230115113310939](/home/xia/.config/Typora/typora-user-images/image-20230115113310939.png)

2. INSTR DECODE测试

   有问题的指令:

   - jal的立即数
   - branch

3. TRAP处理

   mepc:发生trap的PC

   - 异常的话就是异常的PC
   - 中断是发生中断那一个时钟周期的处于取指阶段的PC吗?

4. 单周期CPU数据流图

### 1月29日

1. 分享数据冒险

2. 完成单周期CPU设计

   - 访存单元
   - 写回单元

3. 测试

   - 函数调用/返回
   - 循环/条件转移
   - 计算

   ```assembly
   .text
   .global _start
   _start:
   addi sp, x0, 256
   addi x4, x0, 5
   jal x0, test 
   loop:
   add x5, x0, x4
   jal x1, foo
   addi x4, x4, -1
   test:
   bne x4, x0, loop
   foo:
   sb x5, 0(sp)
   addi sp, sp, -1
   ret
   ```

   结果:

   ```assembly
   pc = 28
   instr = sb x5, 0(sp)
   regfile status:
   x1	 = 20	[x2	 = 252]	x3	 = 0	x4	 = 1	[x5	 = 1]	
   x6	 = 0	x7	 = 0	x8	 = 0	x9	 = 0	x10	 = 0	
   
   memory status:
   
   
   id_rs1_idx = 2 id_rs1_rdata = 252
   id_rs2_idx = 5 id_rs2_rdata = 1
   id_imm = 0
   id_rd_wen = 0 id_rd_idx = 0
   ex_alu_res = 0
   ex_mem_addr = 252
   ex_branch_jump = 0
   mem_rdata = 0
   
   After:
   regfile status:
   x1	 = 20	[x2	 = 252]	x3	 = 0	x4	 = 1	x5	 = 1	
   x6	 = 0	x7	 = 0	x8	 = 0	x9	 = 0	x10	 = 0	
   
   memory status:
   ram[252]	: 0	 -> 1	| 
   ```

4. 多周期CPU设计

## 2023年2月

### 2月5日

```assembly
.text
.global _start
_start:
addi x10, x0, 10       # 0
addi x10, x0, 100      # 4
addi x11, x0, -1       # 8
add  x12, x10, x11     # 12
bne x10, x11, foo      # 16
addi x0, x0, 0         # 20
addi x0, x0, 0         # 24
addi x0, x0, 0         # 28
addi x0, x0, 0         # 32
foo:
sd x10, 16(x0)         # 36
ld x20, 16(x0)         # 40
addi x20, x20, 19      # 44
addi x21, x0, 64       # 48 
csrrw x0, mtvec, x21   # 52
ecall                  # 56
jal _start             # 60
excp_handle:            
csrrw x30, mepc, x0    # 64
addi x30, x30, 4       # 68
csrrw x0, mepc, x30    # 72
mret                   # 76
```

#### 前递

```verilog
    wire rs1_MEM_fwd = MEM_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == MEM_rd_idx_i);
    wire rs2_MEM_fwd = MEM_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == MEM_rd_idx_i);

    wire rs1_WB_fwd = WB_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == WB_rd_idx_i);
    wire rs2_WB_fwd = WB_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == WB_rd_idx_i);

    assign EX_rs1_rdata_o = rs1_MEM_fwd ? MEM_fwd_data_i
                          : rs1_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs1_rdata_r & {`XLEN{EX_data_valid}};
    assign EX_rs2_rdata_o = rs2_MEM_fwd ? MEM_fwd_data_i
                          : rs2_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs2_rdata_r & {`XLEN{EX_data_valid}};
```

![image-20230205141355223](/home/xia/.config/Typora/typora-user-images/image-20230205141355223.png)

#### load-use

```verilog
    assign id_load_use_o =  !id_flush_i && EX_op_load_i 
                         && ((need_rs1 && EX_rd_idx_i == id_rs1_idx_o) || (need_rs2 && EX_rd_idx_i == id_rs2_idx_o));

	wire run;
    assign run = (!id_load_use_i);
    assign ID_valid_o = (ID_data_valid && run && !id_flush_i);
    assign ID_ready_o = (EX_ready_i && run);
```

![image-20230205142113821](/home/xia/.config/Typora/typora-user-images/image-20230205142113821.png)

#### 分支

```verilog
`include "defines.v"

module controller(
    // flush by ex
    input                  ex_jump_i,
    input [`PC_WIDTH-1:0]  ex_jump_pc_i,
    // flush by trap
    input                  wb_trap_i,
    input [`PC_WIDTH-1:0]  wb_trap_handle_pc_i,
    output                 if_flush_o,
    output                 id_flush_o,
    output                 ex_flush_o,
    output                 mem_flush_o,
    output [`PC_WIDTH-1:0] flush_pc_o
);


    assign if_flush_o  = ex_jump_i | wb_trap_i;
    assign id_flush_o  = ex_jump_i | wb_trap_i;
    assign ex_flush_o  = wb_trap_i;
    assign mem_flush_o = wb_trap_i;

    assign flush_pc_o = wb_trap_i ? wb_trap_handle_pc_i : ex_jump_pc_i;

endmodule
```

```verilog
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// branch jal jalr 指令跳转地址计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire op_jal    = optype_info_i[`OP_JAL];
    wire op_jalr   = optype_info_i[`OP_JALR];
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = imm_i;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;

    assign ex_jump_o = branch_jump | op_jal | op_jalr;
```



![image-20230205142426759](/home/xia/.config/Typora/typora-user-images/image-20230205142426759.png)





#### 异常处理

```verilog
    wire wb_excp;
    wire wb_int;
    assign wb_excp = WB_pc_misalign_i | WB_if_bus_err_i 
                   | WB_ilegl_instr_i | WB_ecall_i      | WB_ebreak_i      | WB_mret_i
                   | WB_ld_misalign_i | WB_ld_bus_err_i | WB_st_misalign_i | WB_st_bus_err_i;

    assign wb_trap_o = wb_excp;
    assign wb_trap_handle_pc_o = WB_mret_i ? mepc_rdata_i : mtvec_rdata_i;
    // update csr
    // 1.mcause: 发生异常的原因
    assign mcause_wen_o   = wb_trap_o;
    wire [3:0] excp_code;
    assign excp_code = {4{WB_pc_misalign_i}} & 4'd0   // 指令地址不对齐
                     | {4{WB_if_bus_err_i}}  & 4'd1   // 指令访存错误
                     | {4{WB_ilegl_instr_i}} & 4'd2   // 非法指令
                     | {4{WB_ebreak_i}}      & 4'd3   // 断点
                     | {4{WB_ld_misalign_i}} & 4'd4   // 读存储器地址不对齐
                     | {4{WB_ld_bus_err_i}}  & 4'd5   // 读存储器访存错误
                     | {4{WB_st_misalign_i}} & 4'd6   // 写存储器地址不对齐
                     | {4{WB_st_bus_err_i}}  & 4'd7   // 写存储器访存错误
                     | {4{WB_ecall_i}}       & 4'd11; // 机器模式环境调用  
    wire [3:0] int_code;
    assign mcause_wdata_o = wb_int ? {1'b1, 59'b0, int_code} : {60'b0, excp_code};
    
    // 2.mtval: 异常的详细信息
    assign mtval_wen_o = wb_trap_o;
    // 非法指令: 指令 
    // 访问存储器错误: 访问存储器地址
    assign mtval_wdata_o = WB_ilegl_instr_i ? {32'b0, WB_instr_i} : WB_alu_res_i;

    // 3.mepc: trap处理程序返回地址
    // 1. excp: 发生异常指令的地址
    // 2. int:  发生中断下一条指令的地址
    assign mepc_wen_o  =  wb_trap_o;
    assign mepc_wdata_o = wb_excp ? WB_pc_i : WB_pc_i + 4;

    // excp
    // mstatus_mie  = 0
    // mstatus_mpie = mie
    // mret
    // mstatus_mie  = mpie
    // mstatus_mpie = 1
    assign mstatus_ie_set_o   = wb_trap_o && !WB_mret_i;
    assign mstatus_ie_clear_o = WB_mret_i;
```

发生异常不能修改CPU 内存的状态

```verilog
assign wb_rd_wen_o   = WB_rd_wen_i && !wb_excp;

assign ram_ren_o   = !mem_flush_i && !mem_excp && (lb || lh || lw || ld || lbu || lhu || lwu);
assign ram_wen_o   = !mem_flush_i && !mem_excp && (sb || sh || sw || sd);
```



![image-20230205143035280](/home/xia/.config/Typora/typora-user-images/image-20230205143035280.png)s

![image-20230205143143968](/home/xia/.config/Typora/typora-user-images/image-20230205143143968.png)



### 2月12日

#### 1.CSR写回结果生成

csr的读以及csr写会回数据生成都发生在执行阶段 

介绍下CSR指令

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

#### 2.读CSR数据冒险

由于CSR读发生在执行阶段，如果在访存和写回阶段有要写CSR的指令就会发生CSR数据冒险

考虑到CSR指令很少使用，根据体系结构设计的加速经常性事件，这边就不设计前递操作，直接阻塞执行阶段。

`rd = x0` 就不需要读CSR

`rs1/imm  = 0`就不需要写CSR

```verilog
assign id_csr_ren_o = rv64_need_csr && rd != `REG_X0;
assign id_csr_wen_o = rv64_need_csr && (rs1 != 5'b0);
```

```verilog
reg EX_data_valid;
wire run;
assign run = (!csr_hazard);
assign EX_valid_o = EX_data_valid && run && !ex_flush_i;
assign EX_ready_o = MEM_ready_i && run;

wire EX_csr_ren;
wire csr_hazard = EX_csr_ren && !ex_flush_i
                && ((MEM_csr_wen_i && MEM_csr_idx_i == EX_csr_idx_o) || (WB_csr_wen_i  && WB_csr_idx_i  == EX_csr_idx_o));

```

这边要注意`ex_flush_1 == 1`，代表需要冲刷执行阶段，如果这种情况就不需要考虑冒险

![image-20230208215719811](/home/xia/.config/Typora/typora-user-images/image-20230208215719811.png)

#### 3.添加静态分支预测

**取指阶段预测向前跳转为跳，向后跳转为不跳。**

```assembly
loop:
addi x10, x10, -1
bne x10, x0, loop
```

`jal`为直接跳转

`jalr`到执行阶段冲刷流水线

```verilog
    // 静态分支预测, 向前跳预测为跳, 向后跳预测不跳
    assign ifu_prdt_taken_o = (branch & imm[63]);
    // 是否跳转
    wire jump;
    assign jump = ifu_prdt_taken_o | jal;

    wire [`XLEN-1:0] pc_add_src2;
    assign pc_add_src2 = jump ? imm : `XLEN'd4;

    assign ifu_pc_next_o = if_flush_i ? flush_pc_i 
                         : (IF_pc_i + pc_add_src2);
```

**执行阶段冲刷流水线**

预测失败，或者`jalr`

```verilog
    wire op_jalr   = optype_info_i[`OP_JALR];

    wire mis_prdt = branch_jump ^ EX_prdt_taken_i;
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = (op_jalr || branch_jump) ? imm_i : 64'd4;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;

    assign ex_jump_o = mis_prdt || op_jalr;
```

**预测成功**

```assembly
addi x10, x10, 10     # 0
loop:
addi x9, x9, -1       # 4
addi x0, x0, 0        # 8
addi x0, x0, 0        # 12
blt x9, x10, loop     # 16
addi x8, x0, 8        # 20
addi x7, x0, 7        # 24
```

![image-20230209235320047](/home/xia/.config/Typora/typora-user-images/image-20230209235320047.png)

**预测失败/jalr**

```verilog
addi x10, x10, 10     # 0
loop:
addi x9, x9, -1       # 4
addi x0, x0, 0        # 8
addi x0, x0, 0        # 12
bltu x9, x10, loop    # 16
addi x8, x0, 8        # 20
addi x7, x0, 7        # 24
```

![image-20230209235506534](/home/xia/.config/Typora/typora-user-images/image-20230209235506534.png)

#### 4.异常处理的优先级

```verilog
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
```

#### 5.加入中断处理

- mstatus_mie

  全局中断使能

- mie

  不同类型的中断使能

- mip

  不同类型中断标志位

```verilog
    // csr
	always @(posedge clk) begin
        mip_meip <= int_exter_i;
        mip_mtip <= int_timer_i;
        mip_msip <= int_soft_i;
    end   
	
	// wb
	wire int_exter;
    wire int_time;
    wire int_soft;

    assign int_exter = mstatus_mie_rdata_i && mie_meie_rdata_i && mip_meip_rdata_i;
    assign int_time  = mstatus_mie_rdata_i && mie_mtie_rdata_i && mip_mtip_rdata_i;
    assign int_soft  = mstatus_mie_rdata_i && mie_msie_rdata_i && mip_msip_rdata_i;
```

- 中断可以被屏蔽，但是异常不可以

- 发生中断或者异常之后会将mstatus_mie = 0， 关闭全局中断使能，这样的话就不能中断嵌套，但是可以通过软件将mstatus_mie = 1，这样就支持中断嵌套，如果想屏蔽优先级比自己低的中断，这时候就可以设置mie。

#### 6.测试案例

程序的内存模型

<img src="/home/xia/.config/Typora/typora-user-images/image-20230211151156827.png" alt="image-20230211151156827" style="zoom: 50%;" />

```assembly
# 将栈指针设置为8192
.text
.global _start
_start:
addi sp, x0, 1024
slli sp, sp, 3
j my
```

```c
// 冒泡排序
int arr[] = {112, 20, 5, 7, 2, 11, 50, 38, 22, 79};

void sort(int arr[], int n) {
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void my() {
    sort(arr, 10);
}
```

结果:

```verilog
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 112 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 20 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 112 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 5 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 112 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 7 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 112 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 2 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 112 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 11 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 112 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 50 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 112 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 38 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 112 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 22 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 112 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 79 
ram[4096] = 20 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 5 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 20 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 7 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 20 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 2 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 20 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 11 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 50 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 38 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 50 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 22 ram[4124] = 22 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 7 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 22 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 2 ram[4104] = 2 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 22 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 2 ram[4104] = 7 ram[4108] = 11 ram[4112] = 20 ram[4116] = 38 ram[4120] = 22 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 2 ram[4104] = 7 ram[4108] = 11 ram[4112] = 20 ram[4116] = 22 ram[4120] = 22 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 5 ram[4100] = 2 ram[4104] = 7 ram[4108] = 11 ram[4112] = 20 ram[4116] = 22 ram[4120] = 38 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 2 ram[4100] = 2 ram[4104] = 7 ram[4108] = 11 ram[4112] = 20 ram[4116] = 22 ram[4120] = 38 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
ram[4096] = 2 ram[4100] = 5 ram[4104] = 7 ram[4108] = 11 ram[4112] = 20 ram[4116] = 22 ram[4120] = 38 ram[4124] = 50 ram[4128] = 79 ram[4132] = 112 
```

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
// ALU的结果直接写回到RD中[除了BRANCH, LD_ST]
// 使用ALU单元的指令有
// 1. ALU
// 2. ALU_IMM
// 3. BRANCH
// 4. LD_ST
// 5. JAL JALR
// 6. LUI
// 7. AUIPC

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
    // MEM 地址结果
    output [`XLEN-1:0]    mem_addr_o,
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

    assign alu_op2 = (op_lui | op_auipc | op_alu_imm | op_alu_imm_w | op_load | op_store) ? imm_i
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
    assign alu_sll_res     = alu_op1 << shift_op2;
    // srl
    assign alu_srl_res     = alu_op1 >> shift_op2;
    // sra
    assign alu_sra_res     = $signed(alu_op1) >>> shift_op2;
    
    // 逻辑操作
    // and
    assign alu_and_res     = alu_op1 & alu_op2;
    // or
    assign alu_or_res      = alu_op1 | alu_op2;
    // xor
    assign alu_xor_res     = alu_op1 ^ alu_op2;
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
    wire [`XLEN-1:0] alu_res_w = { {32{alu_res[31]}}, alu_res[31:0] };
    assign alu_res_o = (op_alu_w | op_alu_imm_w) ? alu_res_w : alu_res;
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

## 4. MEMORY

```verilog
module mem(
    // from id
    input  [`LD_ST_INFO_WIDTH-1:0] ld_st_info_i,
    // from ex
    input  [`XLEN-1:0] mem_addr_i,
    // rs2_rdata
    input  [`XLEN-1:0] mem_wdata_i,
    // to wb
    output [`XLEN-1:0] mem_rdata_o,

    // mem x ram
    output [`XLEN-1:0] ram_addr_o,
    // write
    output             ram_wen_o,
    output [7:0]       ram_byte_en_o,
    output [`XLEN-1:0] ram_wdata_o,
    // read
    output             ram_ren_o,
    input  [`XLEN-1:0] ram_rdata_i
);
```

- ram的读/写数据位宽为8字节，所以访问ram的地址的第三位为0，需要将访存地址的低三位置0作为ram的读写地址

  ```verilog
   assign ram_addr_o = {mem_addr_i[63:3], 3'b0};
  ```

### LOAD指令

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

### STORE指令

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

### RAM

字节使能

```verilog
wire [`XLEN-1:0] mask = {{8{byte_en_i[7]}}, {8{byte_en_i[6]}}, {8{byte_en_i[5]}}, {8{byte_en_i[4]}}, 
                         {8{byte_en_i[3]}}, {8{byte_en_i[2]}}, {8{byte_en_i[1]}}, {8{byte_en_i[0]}}};  
assign wdata = ((wdata_i & mask) | (rdata & (~mask)));
```

## 5. WRITE BACK

选择写回regfile的内容

- alu_res
- mem_rdata
- csr_rdata

```verilog
assign wb_rd_wdata_o = op_load   ? mem_rdata_i
                     : op_system ? csr_rdata_i
					 : alu_res_i;
```

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

## 7.异常处理

将异常看做是一种特殊的函数跳转那么就需要知道往哪里跳`mtvec`, 返回地址`mepc`, 异常的信息`mcause`和`mtval`

1. 异常指令的PC保存在mepc, 将PC设置为mtvec
2. 根据异常原因设置mcause, 设置mtval为地址异常的地址或者是异常指令的指令内容
3. 将mstatus.MIE置为0用于屏蔽中断，将mstatus.MPIE = MIE
4. 将异常发生之前权限模式保存在MPP中，再把权限模式改为M



中断屏蔽

异常不可以屏蔽，而中断可以屏蔽。

中断优先级

1. 外部中断
2. 软件中断
3. 时钟中断

中断嵌套

发生异常之后 mstatus.mie <= 0, 中断被全局关闭，无法响应新的中断，因此默认不支持中断嵌套。

可以使用软件解决

- 进入异常处理程序之后，将mstatus.mie = 1
- 如果想屏蔽优先级比其优先级低的中断，可以使用mie

## 三.测试代码

- 测试代码1

  ```assembly
  .text
  .global _start
  _start:
  addi sp, x0, 256  # 0
  addi x4, x0, 5    # 4
  jal x0, test      # 8
  loop:           
  add x5, x0, x4    # 12
  jal x1, foo       # 16
  addi x4, x4, -1   # 20
  test:
  bne x4, x0, loop  # 24
  foo:    
  sb x5, 0(sp)      # 28
  addi sp, sp, -1   # 32
  ret               # 36
  ```

- 测试代码2

  ```assembly
  .text
  .global _start
  _start:
  addi x10, x10, 10 #0
  addi x9, x9, 9    #4
  jal x1, foo       #8
  add x11, x9, x10  #12
  sltu x11, x9, x10 #16
  add x1, x2, x3    #20
  foo:
  addi x0, x0, 0    #24
  ret               #28
  ```
  
- 测试代码3

  ```assembly
  .text
  .global _start
  _start:
  addi x10, x0, 10       # 0
  addi x10, x0, 100      # 4
  addi x11, x0, -1       # 8
  add  x12, x10, x11     # 12
  bne x10, x11, foo      # 16
  addi x0, x0, 0         # 20
  addi x0, x0, 0         # 24
  addi x0, x0, 0         # 28
  addi x0, x0, 0         # 32
  foo:
  sd x10, 16(x0)         # 36
  ld x20, 16(x0)         # 40
  addi x20, x20, 19      # 44
  addi x21, x0, 64       # 48 
  csrrw x0, mtvec, x21   # 52
  ecall                  # 56
  jal _start             # 60
  excp_handle:            
  csrrw x30, mepc, x0    # 64
  addi x30, x30, 4       # 68
  csrrw x0, mepc, x30    # 72
  mret                   # 76
  ```
