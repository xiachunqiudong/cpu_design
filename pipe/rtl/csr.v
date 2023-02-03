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

    assign mtvec_rdata_o = mtvec;
    
    reg [`XLEN-1:0] mtvec;
    always @(posedge clk) begin
        if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MTVEC) begin
            mtvec <= wb_csr_wdata_i;
        end
    end

    // 只读
    reg [`XLEN-1:0] mcause;
    always @(posedge clk) begin
        if(mcause_wen_i) begin
            mcause <= mcause_wdata_i;
        end
    end

    // 可读可写
    reg [`XLEN-1:0] mtval;
    always @(posedge clk) begin
        if(mtval_wen_i) begin
            mtval <= mtval_wdata_i;
        end else if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MTVAL) begin
            mtval <= wb_csr_wdata_i;
        end
    end

    // 可读可写
    reg [`XLEN-1:0] mepc;
    assign mepc_rdata_o = mepc;
    
    always @(posedge clk) begin
        if(mepc_wen_i) begin
            mepc <= mepc_wdata_i;
        end else if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MEPC) begin
            mepc <= wb_csr_wdata_i;
        end
    end


    wire read_mtvec  = EX_csr_idx_i == `CSR_MTVEC;
    wire read_mcause = EX_csr_idx_i == `CSR_MCAUSE;
    wire read_mtval  = EX_csr_idx_i == `CSR_MTVAL;
    wire read_mepc   = EX_csr_idx_i  == `CSR_MEPC;
    
    
    assign csr_rdata_o = ({`XLEN{read_mtvec}}  & mtvec)
                       | ({`XLEN{read_mcause}} & mcause)
                       | ({`XLEN{read_mtval}}  & mtval)
                       | ({`XLEN{read_mepc}}   & mepc);

endmodule