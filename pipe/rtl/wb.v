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

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器写回
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire op_load   = WB_optype_info_i[`OP_LOAD];
    wire op_system = WB_optype_info_i[`OP_SYSTEM];    
    assign wb_rd_wdata_o = op_load   ? WB_mem_rdata_i
                         : op_system ? WB_csr_rdata_i
                         : WB_alu_res_i;

    assign wb_rd_wen_o   = WB_rd_wen_i && !wb_excp;
    assign wb_rd_idx_o   = WB_rd_idx_i;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CSR写回
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    assign wb_csr_wen_o   = WB_csr_wen_i && !wb_excp;
    assign wb_csr_idx_o   = WB_csr_idx_i;
    assign wb_csr_wdata_o = WB_csr_wdata_i;

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

endmodule
