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
    
    output reg [`PC_WIDTH-1:0]         WB_pc_o,
    output reg [`OP_INFO_WIDTH-1:0]    WB_optype_info_o,
    output reg                         WB_csr_wen_o,
    output reg  [11:0]                 WB_csr_idx_o,
    output reg                         WB_rd_wen_o,
    output reg  [4:0]                  WB_rd_idx_o,
    output reg  [`XLEN-1:0]            WB_alu_res_o,
    output reg  [`XLEN-1:0]            WB_csr_rdata_o,
    output reg  [`XLEN-1:0]            WB_csr_wdata_o,
    output reg  [`XLEN-1:0]            WB_mem_rdata_o,
    // excp
    output reg                         WB_pc_misalign_o,
    output reg                         WB_if_bus_err_o,
    output reg                         WB_ilegl_instr_o,
    output reg                         WB_ecall_o,
    output reg                         WB_ebreak_o,
    output reg                         WB_mret_o,
    output reg                         WB_ld_misalign_o,
    output reg                         WB_ld_bus_err_o,
    output reg                         WB_st_misalign_o,
    output reg                         WB_st_bus_err_o,
    // handshack
    input                              MEM_valid_i,
    output                             WB_ready_o
);

    reg WB_data_valid;
    wire run;
    
    assign run = 1;
    assign WB_ready_o = run;
    
    always @(posedge clk) begin
        if(rst) begin
            WB_data_valid <= 1'b0;
        end else begin
            WB_data_valid <= MEM_valid_i;
        end
    end
    
    always @(posedge clk) begin
        if(WB_ready_o && MEM_valid_i) begin
            WB_pc_o          <= MEM_pc_i;
            WB_optype_info_o <= MEM_optype_info_i;
            WB_csr_wen_o     <= MEM_csr_wen_i;
            WB_csr_idx_o     <= MEM_csr_idx_i;
            WB_rd_wen_o      <= MEM_rd_wen_i;
            WB_rd_idx_o      <= MEM_rd_idx_i;
            WB_alu_res_o     <= MEM_alu_res_i;
            WB_csr_rdata_o   <= MEM_csr_rdata_i;
            WB_csr_wdata_o   <= MEM_csr_wdata_i;
            WB_mem_rdata_o   <= mem_rdata_i;
            WB_pc_misalign_o <= MEM_pc_misalign_i;
            WB_if_bus_err_o  <= MEM_if_bus_err_i;
            WB_ilegl_instr_o <= MEM_ilegl_instr_i;
            WB_ecall_o       <= MEM_ecall_i;
            WB_ebreak_o      <= MEM_ebreak_i;
            WB_mret_o        <= MEM_mret_i;
            WB_ld_misalign_o <= mem_ld_misalign_i;
            WB_ld_bus_err_o  <= mem_ld_bus_err_i;
            WB_st_misalign_o <= mem_st_misalign_i;
            WB_st_bus_err_o  <= mem_st_bus_err_i;
        end
    end

endmodule