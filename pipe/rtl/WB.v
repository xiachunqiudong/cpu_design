module WB(
    input                              clk,
    input                              rst,
    input  [`PC_WIDTH-1:0]             MEM_pc_i,
    input  [`OP_INFO_WIDTH-1:0]        MEM_optype_info_i,
    input                              MEM_csr_wen_i,
    input  [11:0]                      MEM_csr_idx_i,
    input                              MEM_rd_wen_i,
    input  [4:0]                       MEM_rd_idx_i,
    input  [`XLEN-1:0]                 MEM_alu_res_i,
    input  [`XLEN-1:0]                 MEM_csr_rdata_i,
    input  [`XLEN-1:0]                 MEM_csr_wdata_i,
    input  [`XLEN-1:0]                 mem_rdata_i,
    // excp
    input                              MEM_pc_misalign_i,
    input                              MEM_if_bus_err_i,
    input                              MEM_ilegl_instr_i,
    input                              MEM_ecall_i,
    input                              MEM_ebreak_i,
    input                              MEM_mret_i,
    input                              mem_ld_misalign_i,
    input                              mem_ld_bus_err_i,
    input                              mem_st_misalign_i,
    input                              mem_st_bus_err_i,
    
    output [`PC_WIDTH-1:0]             WB_pc_o,
    output [`OP_INFO_WIDTH-1:0]        WB_optype_info_o,
    output                             WB_csr_wen_o,
    output [11:0]                      WB_csr_idx_o,
    output                             WB_rd_wen_o,
    output [4:0]                       WB_rd_idx_o,
    output [`XLEN-1:0]                 WB_alu_res_o,
    output [`XLEN-1:0]                 WB_csr_rdata_o,
    output [`XLEN-1:0]                 WB_csr_wdata_o,
    output [`XLEN-1:0]                 WB_mem_rdata_o,
    // excp
    output                             WB_pc_misalign_o,
    output                             WB_if_bus_err_o,
    output                             WB_ilegl_instr_o,
    output                             WB_ecall_o,
    output                             WB_ebreak_o,
    output                             WB_mret_o,
    output                             WB_ld_misalign_o,
    output                             WB_ld_bus_err_o,
    output                             WB_st_misalign_o,
    output                             WB_st_bus_err_o,
    // handshack
    input                              MEM_valid_i,
    output                             WB_ready_o
);

    reg WB_data_valid;
    wire run;
    
    assign run = 1;
    assign WB_ready_o = run;


    reg [`PC_WIDTH-1:0]         WB_pc_r;
    reg [`OP_INFO_WIDTH-1:0]    WB_optype_info_r;
    reg                         WB_csr_wen_r;
    reg  [11:0]                 WB_csr_idx_r;
    reg                         WB_rd_wen_r;
    reg  [4:0]                  WB_rd_idx_r;
    reg  [`XLEN-1:0]            WB_alu_res_r;
    reg  [`XLEN-1:0]            WB_csr_rdata_r;
    reg  [`XLEN-1:0]            WB_csr_wdata_r;
    reg  [`XLEN-1:0]            WB_mem_rdata_r;
    // excp
    reg                         WB_pc_misalign_r;
    reg                         WB_if_bus_err_r;
    reg                         WB_ilegl_instr_r;
    reg                         WB_ecall_r;
    reg                         WB_ebreak_r;
    reg                         WB_mret_r;
    reg                         WB_ld_misalign_r;
    reg                         WB_ld_bus_err_r;
    reg                         WB_st_misalign_r;
    reg                         WB_st_bus_err_r;


    assign WB_pc_o           = WB_pc_r          & {`PC_WIDTH{WB_data_valid}};
    assign WB_optype_info_o  = WB_optype_info_r & {`OP_INFO_WIDTH{WB_data_valid}};
    assign WB_csr_wen_o      = WB_csr_wen_r     & WB_data_valid;
    assign WB_csr_idx_o      = WB_csr_idx_r     & {12{WB_data_valid}};
    assign WB_rd_wen_o       = WB_rd_wen_r      & WB_data_valid;
    assign WB_rd_idx_o       = WB_rd_idx_r      & {5{WB_data_valid}};
    assign WB_alu_res_o      = WB_alu_res_r     & {`XLEN{WB_data_valid}};
    assign WB_csr_rdata_o    = WB_csr_rdata_r   & {`XLEN{WB_data_valid}};
    assign WB_csr_wdata_o    = WB_csr_wdata_r   & {`XLEN{WB_data_valid}};
    assign WB_mem_rdata_o    = WB_mem_rdata_r   & {`XLEN{WB_data_valid}};
    assign WB_pc_misalign_o  = WB_pc_misalign_r & WB_data_valid;
    assign WB_if_bus_err_o   = WB_if_bus_err_r  & WB_data_valid; 
    assign WB_ilegl_instr_o  = WB_ilegl_instr_r & WB_data_valid;
    assign WB_ecall_o        = WB_ecall_r       & WB_data_valid;
    assign WB_ebreak_o       = WB_ebreak_r      & WB_data_valid;
    assign WB_mret_o         = WB_mret_r        & WB_data_valid;
    assign WB_ld_misalign_o  = WB_ld_misalign_r & WB_data_valid;
    assign WB_ld_bus_err_o   = WB_ld_bus_err_r  & WB_data_valid;
    assign WB_st_misalign_o  = WB_st_misalign_r & WB_data_valid;
    assign WB_st_bus_err_o   = WB_st_bus_err_r  & WB_data_valid;
    
    always @(posedge clk) begin
        if(rst) begin
            WB_data_valid <= 1'b0;
        end else begin
            WB_data_valid <= MEM_valid_i;
        end
    end
    
    always @(posedge clk) begin
        if(WB_ready_o && MEM_valid_i) begin
            WB_pc_r          <= MEM_pc_i;
            WB_optype_info_r <= MEM_optype_info_i;
            WB_csr_wen_r     <= MEM_csr_wen_i;
            WB_csr_idx_r     <= MEM_csr_idx_i;
            WB_rd_wen_r      <= MEM_rd_wen_i;
            WB_rd_idx_r      <= MEM_rd_idx_i;
            WB_alu_res_r     <= MEM_alu_res_i;
            WB_csr_rdata_r   <= MEM_csr_rdata_i;
            WB_csr_wdata_r   <= MEM_csr_wdata_i;
            WB_mem_rdata_r   <= mem_rdata_i;
            WB_pc_misalign_r <= MEM_pc_misalign_i;
            WB_if_bus_err_r  <= MEM_if_bus_err_i;
            WB_ilegl_instr_r <= MEM_ilegl_instr_i;
            WB_ecall_r       <= MEM_ecall_i;
            WB_ebreak_r      <= MEM_ebreak_i;
            WB_mret_r        <= MEM_mret_i;
            WB_ld_misalign_r <= mem_ld_misalign_i;
            WB_ld_bus_err_r  <= mem_ld_bus_err_i;
            WB_st_misalign_r <= mem_st_misalign_i;
            WB_st_bus_err_r  <= mem_st_bus_err_i;
        end
    end

endmodule