module csr(
    input              clk,
    // EX阶段读CSR
    input  [11:0]      EX_csr_idx_i,
    output [`XLEN-1:0] csr_rdata_o,
    // WB阶段写CSR
    input              wb_csr_wen_i,
    input  [11:0]      wb_csr_idx_i,
    input  [`XLEN-1:0] wb_csr_wdata_i,
    // EXCP
    input              mcause_wen_i,
    input  [`XLEN-1:0] mcause_wdata_i,
    input              mtval_wen_i,
    input  [`XLEN-1:0] mtval_wdata_i,
    input              mepc_wen_i,
    input  [`XLEN-1:0] mepc_wdata_i,
    output [`XLEN-1:0] mtvec_rdata_o,
    output [`XLEN-1:0] mepc_rdata_o
);

    assign mtvec_rdata_o = 40;

    // 只读
    reg [`XLEN-1:0] mcause;
    always @(posedge clk) begin
        if(mcause_wen_i) begin
            mcause <= mcause_wdata_i;
        end
    end

    // 只读
    reg [`XLEN-1:0] mtval;
    always @(posedge clk) begin
        if(mtval_wen_i) begin
            mtval <= mtval_wdata_i;
        end
    end

    // 可读可写
    reg [`XLEN-1:0] mepc;
    assign mepc_rdata_o = mepc;
    
    always @(posedge clk) begin
        if(mepc_wen_i) begin
            mepc <= mepc_wdata_i;
        end
    end
    
    

endmodule