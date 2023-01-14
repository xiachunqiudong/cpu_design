module cgu(
    input  [`CSR_INFO_WIDTH-1:0] csr_info_i,
    input  [`XLEN-1:0]           rs1_rdata_i,
    input  [`XLEN-1:0]           imm_i,
    output [`XLEN-1:0]           cgu_csr_wdata_o     
);
    
    // csr info
    wire csrrw  = csr_info_i[`CSR_CSRRW];
    wire csrrs  = csr_info_i[`CSR_CSRRS];
    wire csrrc  = csr_info_i[`CSR_CSRRC];
    wire csrrwi = csr_info_i[`CSR_CSRRWI];
    wire csrrsi = csr_info_i[`CSR_CSRRSI];
    wire csrrci = csr_info_i[`CSR_CSRRCI];

endmodule