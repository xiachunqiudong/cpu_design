module agu(
    input  [`XLEN-1:0] rs1_rdata_i,
    input  [`XLEN-1:0] imm_i,
    output [`XLEN-1:0] agu_mem_addr_o
);

    assign agu_mem_addr_o = rs1_rdata_i + imm_i;

endmodule