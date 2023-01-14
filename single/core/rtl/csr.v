`include "define.v"

module csr(
    // id x csr
    input              csr_ren_i,
    input [11:0]       csr_ridx,
    output [`XLEN-1:0] csr_rdata_o,
    // wb x csr
    input              csr_wen_i,
    input [11:0]       csr_widx_i,
    input [`XLEN-1:0]  csr_wdata_i,

    // 中断信号
    input              int_soft_i,
    input              int_time_i,
    input              int_exte_i,           
    
    // from ctrl
    // mcause 发生trap的原因
    input              cause_int_i, // 是否为中断导致的trap
    input              cause_en_i,
    input [3:0]        cause_code_i,
    // mepc trap处理程序的返回地址
    input              epc_en_i,
    input [`XLEN-1:0]  epc_val_i,
    // mval trap的额外信息
    input              mtval_en_i,
    input [`XLEN-1:0]  mtval_val_i,
    // mstatus

    // to ctrl
    // 中断使能
    output             csr_mstatus_MIE_o,
    output             csr_mie_msie_o,
    output             csr_mie_mtie_o,
    output             csr_mie_meie_o,
    // 中断标志位


    // trap处理程序的入口地址
    output [`XLEN-1:0] csr_mtvec_o,
    // trap处理程序的返回地址
    output [`XLEN-1:0] csr_mepc_o
);


    // mstatus
    // XIE   U/S/M 模式下全局中断使能
    // XPIE  U/S/M 模式下发生trap之前的全局中断使能
    // | MPIE | MIE |  
    // |   7  |  3  |
    reg [`XLEN-1:0] mstatus_r;

    // mcause 导致trap的原因 只读
    // mcause[`XLEN-1]
    // 最高位位1为中断，否则为异常
    // mcause[`XLEN-2:0] excp cause
    reg [`XLEN-1:0] mcause_r;
    


endmodule