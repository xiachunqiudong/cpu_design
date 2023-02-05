module csr(
    input              clk,
    // EX阶段读CSR
    input  [11:0]      EX_csr_idx_i,
    output [`XLEN-1:0] csr_rdata_o,
    // WB阶段写CSR
    input              wb_csr_wen_i,
    input  [11:0]      wb_csr_idx_i,
    input  [`XLEN-1:0] wb_csr_wdata_i,
    // 中断信号
    input              int_soft_i,
    input              int_timer_i,
    input              int_exter_i,
    // excp handle 写端口
    input              mcause_wen_i,
    input  [`XLEN-1:0] mcause_wdata_i,
    input              mtval_wen_i,
    input  [`XLEN-1:0] mtval_wdata_i,
    input              mepc_wen_i,
    input  [`XLEN-1:0] mepc_wdata_i,
    input              mstatus_ie_set_i,
    input              mstatus_ie_clear_i,
    // excp handle 读端口
    output             mstatus_ie_o,
    output             mie_soft_o,
    output             mie_timer_o,
    output             mie_exter_o,
    
    output             mip_soft_o,
    output             mip_timer_o,
    output             mip_exter_o,

    output [`XLEN-1:0] mtvec_rdata_o,
    output [`XLEN-1:0] mepc_rdata_o
);

    // MSTATUS
    // 读/写
    // 系统状态
    wire [`XLEN-1:0] mstatus;
    assign mstatus = {56'b0, mstatus_mpie, 3'b0, mstatus_mie, 3'b0};
    reg mstatus_mie;
    reg mstatus_mpie;

    assign mstatus_ie_o = mstatus_mie;

    always @(posedge clk) begin
        if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MSTATUS) begin
            mstatus_mie  <= wb_csr_wdata_i[3];
            mstatus_mpie <= wb_csr_wdata_i[7];
        end else if(mstatus_ie_set_i) begin
            mstatus_mie  <= 1'b0;
            mstatus_mpie <= mstatus_mie;
        end else if(mstatus_ie_clear_i) begin
            mstatus_mie  <= mstatus_mie;
            mstatus_mpie <= 1'b1;
        end
    end

    // MTVEC
    // 读/写
    // 异常程序入口
    reg [`XLEN-1:0] mtvec;
    assign mtvec_rdata_o = mtvec;
    
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


    wire read_mstatus   = EX_csr_idx_i == `CSR_MSTATUS;
    wire read_mie       = EX_csr_idx_i == `CSR_MIE;
    wire read_mtvec     = EX_csr_idx_i == `CSR_MTVEC;
    wire read_mscratch  = EX_csr_idx_i == `CSR_MSCRATCH;
    wire read_mepc      = EX_csr_idx_i == `CSR_MEPC;
    wire read_mcause    = EX_csr_idx_i == `CSR_MCAUSE;
    wire read_mtval     = EX_csr_idx_i == `CSR_MTVAL;
    wire read_mip       = EX_csr_idx_i == `CSR_MIP;  

    assign csr_rdata_o = ({`XLEN{read_mstatus}}  & mstatus)
                       | ({`XLEN{read_mtvec}}    & mtvec)
                       | ({`XLEN{read_mepc}}     & mepc)
                       | ({`XLEN{read_mcause}}   & mcause)
                       | ({`XLEN{read_mtval}}    & mtval);

endmodule