module wb(
    input       rd_en_i,
    input [4:0] rd_idx_i,


    input [`XLEN-1:0] alu_rd_wdata_i,
    input [`XLEN-1:0] mem_rd_wdata_i,
    input [`XLEN-1:0] csr_rd_wdata_i,

    // 写回寄存器文件
    output              wb_rd_en_o,
    output [4:0]        wb_rd_idx_o,
    output [`XLEN-1:0]  wb_rd_wdata_o
);

    assign wb_rd_en_o    = rd_en_i;
    assign wb_rd_idx_o   = rd_idx_i;
    assign wb_rd_wdata_o = alu_rd_wdata_i;

endmodule