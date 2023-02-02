module wb(
    input [`OP_INFO_WIDTH-1:0] WB_optype_info_i,
    input                      WB_csr_wen_i,
    input [11:0]               WB_csr_idx_i,
    input [`XLEN-1:0]          WB_csr_wdata_i,
    input                      WB_rd_wen_i,
    input [4:0]                WB_rd_idx_i,
    input [`XLEN-1:0]          WB_alu_res_i,
    input [`XLEN-1:0]          WB_csr_rdata_i,
    input [`XLEN-1:0]          WB_mem_rdata_i,

    output                     wb_rd_wen_o,
    output [4:0]               wb_rd_idx_o,
    output [`XLEN-1:0]         wb_rd_wdata_o
);

    wire op_load   = WB_optype_info_i[`OP_LOAD];
    wire op_system = WB_optype_info_i[`OP_SYSTEM];    
    assign wb_rd_wdata_o = op_load   ? WB_mem_rdata_i
                         : op_system ? WB_csr_rdata_i
                         : WB_alu_res_i;
    assign wb_rd_wen_o   = WB_rd_wen_i;
    assign wb_rd_idx_o   = WB_rd_idx_i;

endmodule