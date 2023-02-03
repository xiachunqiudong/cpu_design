`include "defines.v"

module MEM(
    input                              clk,
    input                              rst,
    input                              mem_flush_i,
    input  [`XLEN-1:0]                 EX_pc_i,
    input  [`OP_INFO_WIDTH-1:0]        EX_optype_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]     EX_ld_st_info_i,
    input                              EX_csr_wen_i,
    input  [11:0]                      EX_csr_idx_i,
    input                              EX_rd_wen_i,
    input  [4:0]                       EX_rd_idx_i,
    input  [`XLEN-1:0]                 EX_rs2_rdata_i,
    input  [`XLEN-1:0]                 ex_alu_res_i,
    input  [`XLEN-1:0]                 ex_csr_rdata_i,
    input  [`XLEN-1:0]                 ex_csr_wdata_i,
    // excp
    input                              EX_pc_misalign_i,
    input                              EX_if_bus_err_i,
    input                              EX_ilegl_instr_i,
    input                              EX_ecall_i,
    input                              EX_ebreak_i,
    input                              EX_mret_i,
    
    output [`XLEN-1:0]                 MEM_pc_o,
    output [`OP_INFO_WIDTH-1:0]        MEM_optype_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]     MEM_ld_st_info_o,
    output                             MEM_csr_wen_o,
    output [11:0]                      MEM_csr_idx_o,
    output                             MEM_rd_wen_o,
    output [4:0]                       MEM_rd_idx_o,
    output [`XLEN-1:0]                 MEM_rs2_rdata_o,
    output [`XLEN-1:0]                 MEM_alu_res_o,
    output [`XLEN-1:0]                 MEM_csr_rdata_o,
    output [`XLEN-1:0]                 MEM_csr_wdata_o,
    output                             MEM_pc_misalign_o,
    output                             MEM_if_bus_err_o,
    output                             MEM_ilegl_instr_o,
    output                             MEM_ecall_o,
    output                             MEM_ebreak_o,
    output                             MEM_mret_o,
    // hand shack
    input                              EX_valid_i,
    input                              WB_ready_i,
    output                             MEM_valid_o,
    output                             MEM_ready_o
);

    reg MEM_data_valid;
    wire run;
    assign run = 1;
    assign MEM_valid_o = MEM_data_valid && run && !mem_flush_i;
    assign MEM_ready_o = WB_ready_i && run;

    // data
    reg [`XLEN-1:0]             MEM_pc_r;
    reg [`OP_INFO_WIDTH-1:0]    MEM_optype_info_r;
    reg [`LD_ST_INFO_WIDTH-1:0] MEM_ld_st_info_r;
    reg                         MEM_csr_wen_r;
    reg [11:0]                  MEM_csr_idx_r;
    reg                         MEM_rd_wen_r;
    reg [4:0]                   MEM_rd_idx_r;
    reg [`XLEN-1:0]             MEM_rs2_rdata_r;
    reg [`XLEN-1:0]             MEM_alu_res_r;
    reg [`XLEN-1:0]             MEM_csr_rdata_r;
    reg [`XLEN-1:0]             MEM_csr_wdata_r;
    reg                         MEM_pc_misalign_r;
    reg                         MEM_if_bus_err_r;
    reg                         MEM_ilegl_instr_r;
    reg                         MEM_ecall_r;
    reg                         MEM_ebreak_r;
    reg                         MEM_mret_r;


    assign MEM_pc_o          = MEM_pc_r          & {`PC_WIDTH{MEM_data_valid}};
    assign MEM_optype_info_o = MEM_optype_info_r & {`OP_INFO_WIDTH{MEM_data_valid}};
    assign MEM_ld_st_info_o  = MEM_ld_st_info_r  & {`LD_ST_INFO_WIDTH{MEM_data_valid}};
    assign MEM_csr_wen_o     = MEM_csr_wen_r     & MEM_data_valid;
    assign MEM_csr_idx_o     = MEM_csr_idx_r     & {12{MEM_data_valid}};
    assign MEM_rd_wen_o      = MEM_rd_wen_r      & MEM_data_valid;
    assign MEM_rd_idx_o      = MEM_rd_idx_r      & {5{MEM_data_valid}};
    assign MEM_rs2_rdata_o   = MEM_rs2_rdata_r   & {`XLEN{MEM_data_valid}};
    assign MEM_alu_res_o     = MEM_alu_res_r     & {`XLEN{MEM_data_valid}};
    assign MEM_csr_rdata_o   = MEM_csr_rdata_r   & {`XLEN{MEM_data_valid}};
    assign MEM_csr_wdata_o   = MEM_csr_wdata_r   & {`XLEN{MEM_data_valid}};
    assign MEM_pc_misalign_o = MEM_pc_misalign_r & MEM_data_valid;
    assign MEM_if_bus_err_o  = MEM_if_bus_err_r  & MEM_data_valid;
    assign MEM_ilegl_instr_o = MEM_ilegl_instr_r & MEM_data_valid;
    assign MEM_ecall_o       = MEM_ecall_r       & MEM_data_valid;
    assign MEM_ebreak_o      = MEM_ebreak_r      & MEM_data_valid;
    assign MEM_mret_o        = MEM_mret_r        & MEM_data_valid;

    always @(posedge clk) begin
        if(rst) begin
            MEM_data_valid <= 1'b0;
        end else if(MEM_ready_o) begin
            MEM_data_valid <= EX_valid_i;
        end
    end

    always @(posedge clk) begin
        if(MEM_ready_o && EX_valid_i) begin
            MEM_pc_r          <= EX_pc_i;
            MEM_optype_info_r <= EX_optype_info_i;
            MEM_ld_st_info_r  <= EX_ld_st_info_i;
            MEM_csr_wen_r     <= EX_csr_wen_i;
            MEM_csr_idx_r     <= EX_csr_idx_i;
            MEM_rd_wen_r      <= EX_rd_wen_i;
            MEM_rd_idx_r      <= EX_rd_idx_i;
            MEM_rs2_rdata_r   <= EX_rs2_rdata_i;
            MEM_alu_res_r     <= ex_alu_res_i;
            MEM_csr_rdata_r   <= ex_csr_rdata_i;
            MEM_csr_wdata_r   <= ex_csr_wdata_i;
            MEM_pc_misalign_r <= EX_pc_misalign_i;
            MEM_if_bus_err_r  <= EX_if_bus_err_i;
            MEM_ilegl_instr_r <= EX_ilegl_instr_i;
            MEM_ecall_r       <= EX_ecall_i;
            MEM_ebreak_r      <= EX_ebreak_i;
            MEM_mret_r        <= EX_mret_i;
        end
    end

endmodule