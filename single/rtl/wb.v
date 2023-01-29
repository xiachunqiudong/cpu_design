module wb(
    input                      rd_wen_i,
    input                      [4:0] rd_idx_i,
    input [`OP_INFO_WIDTH-1:0] opcode_info_i,

    input [`XLEN-1:0]          alu_res_i,
    input [`XLEN-1:0]          mem_rdata_i,
    input [`XLEN-1:0]          csr_rdata_i,

    // 写回寄存器文件
    output              wb_rd_wen_o,
    output [4:0]        wb_rd_idx_o,
    output [`XLEN-1:0]  wb_rd_wdata_o
);

    wire op_load   = opcode_info_i[`OP_LOAD];
    wire op_system = opcode_info_i[`OP_SYSTEM];    

    assign wb_rd_wdata_o = op_load   ? mem_rdata_i
                         : op_system ? csr_rdata_i
                         : alu_res_i;

    assign wb_rd_wen_o   = rd_wen_i;
    assign wb_rd_idx_o   = rd_idx_i;

endmodule