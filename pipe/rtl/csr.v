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
    input              mstatus_mie_set_i,
    input              mstatus_mie_clear_i,
    // excp handle 读端口
    output             mstatus_mie_rdata_o,
    output             mie_meie_rdata_o,
    output             mie_mtie_rdata_o,
    output             mie_msie_rdata_o,
    output             mip_meip_rdata_o,
    output             mip_mtip_rdata_o,
    output             mip_msip_rdata_o,
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

    assign mstatus_mie_rdata_o = mstatus_mie;

    always @(posedge clk) begin
        if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MSTATUS) begin
            mstatus_mie  <= wb_csr_wdata_i[3];
            mstatus_mpie <= wb_csr_wdata_i[7];
        end else if(mstatus_mie_set_i) begin
            mstatus_mie  <= 1'b0;
            mstatus_mpie <= mstatus_mie;
        end else if(mstatus_mie_clear_i) begin
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

    // 可读可写
    // 外部中断使能
    reg mie_meie;
    // 时钟中断使能
    reg mie_mtie;
    // 软件中断使能
    reg mie_msie;
    wire [`XLEN-1:0] mie = {52'b0, mie_meie, 3'b0, mie_mtie, 3'b0, mie_msie, 3'b0};
    
    assign mie_meie_rdata_o = mie_meie;
    assign mie_mtie_rdata_o = mie_mtie;
    assign mie_msie_rdata_o = mie_msie;

    always @(posedge clk) begin
        if(wb_csr_wen_i && wb_csr_idx_i == `CSR_MIE) begin
            mie_meie <= wb_csr_wdata_i[11];
            mie_mtie <= wb_csr_wdata_i[7];
            mie_msie <= wb_csr_wdata_i[3];
        end
    end

    // 只读
    reg mip_meip;
    reg mip_mtip;
    reg mip_msip;

    wire [`XLEN-1:0] mip = {52'b0, mip_meip, 3'b0, mip_mtip, 3'b0, mip_msip, 3'b0};
    
    assign mip_meip_rdata_o = mip_meip;
    assign mip_mtip_rdata_o = mip_mtip;
    assign mip_msip_rdata_o = mip_msip;

    always @(posedge clk) begin
        mip_meip <= int_exter_i;
        mip_mtip <= int_timer_i;
        mip_msip <= int_soft_i;
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
                       | ({`XLEN{read_mtval}}    & mtval)
                       | ({`XLEN{read_mie}}      & mie)
                       | ({`XLEN{read_mip}}      & mip);

endmodule
