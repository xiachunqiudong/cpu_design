`include "defines.v"

module EX(
    input                           clk,
    input                           rst,
    // pc
    input  [`XLEN-1:0]              ID_pc_i,
    // op info
    input  [`OP_INFO_WIDTH-1:0]     id_optype_info_i,
    input  [`ALU_INFO_WIDTH-1:0]    id_alu_info_i,
    input  [`BRANCH_INFO_WIDTH-1:0] id_branch_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info_i,
    input  [`CSR_INFO_WIDTH-1:0]    id_csr_info_i,
    // op number
    input  [`XLEN-1:0]              id_rs1_rdata_i,
    input  [`XLEN-1:0]              id_rs2_rdata_i,
    input  [`XLEN-1:0]              id_imm_i,
    // csr
    input                           id_csr_wen_i,
    input  [11:0]                   id_csr_idx_i,
    // rd
    input                           id_rd_wen_i,
    input  [4:0]                    id_rd_idx_i,
    // excp
    input                           ID_pc_misalign_i,
    input                           ID_if_bus_err_i,
    input                           id_ilegl_instr_i,
    input                           id_ecall_i,
    input                           id_ebreak_i,
    input                           id_mret_i,
    
    // pc
    output [`XLEN-1:0]              EX_pc_o,
    // op info
    output [`OP_INFO_WIDTH-1:0]     EX_optype_info_o,
    output [`ALU_INFO_WIDTH-1:0]    EX_alu_info_o,
    output [`BRANCH_INFO_WIDTH-1:0] EX_branch_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info_o,
    output [`CSR_INFO_WIDTH-1:0]    EX_csr_info_o,
    // op number
    output [`XLEN-1:0]              EX_rs1_rdata_o,
    output [`XLEN-1:0]              EX_rs2_rdata_o,
    output [`XLEN-1:0]              EX_imm_o,
    // csr
    output                          EX_csr_wen_o,
    output [11:0]                   EX_csr_idx_o,
    // rd
    output                          EX_rd_wen_o,
    output [4:0]                    EX_rd_idx_o,
    // excp
    output                          EX_pc_misalign_o,
    output                          EX_if_bus_err_o,
    output                          EX_ilegl_instr_o,
    output                          EX_ecall_o,
    output                          EX_ebreak_o,
    output                          EX_mret_o,
    
    // handshack
    input                           ID_valid_i,
    input                           MEM_ready_i,
    output                          EX_valid_o,
    output                          EX_ready_o
);

  
    reg EX_data_valid;
    wire run;
    assign run = 1;
    assign EX_valid_o = EX_data_valid && run;
    assign EX_ready_o = MEM_ready_i && run;

    reg [`XLEN-1:0]              EX_pc_r;
    reg [`OP_INFO_WIDTH-1:0]     EX_optype_info_r;
    reg [`ALU_INFO_WIDTH-1:0]    EX_alu_info_r;
    reg [`BRANCH_INFO_WIDTH-1:0] EX_branch_info_r;
    reg [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info_r;
    reg [`CSR_INFO_WIDTH-1:0]    EX_csr_info_r;
    reg [`XLEN-1:0]              EX_rs1_rdata_r;
    reg [`XLEN-1:0]              EX_rs2_rdata_r;
    reg [`XLEN-1:0]              EX_imm_r;
    reg                          EX_csr_wen_r;
    reg   [11:0]                 EX_csr_idx_r;
    reg                          EX_pc_misalign_r;
    reg                          EX_if_bus_err_r;
    reg                          EX_ilegl_instr_r;
    reg                          EX_ecall_r;
    reg                          EX_ebreak_r;
    reg                          EX_mret_r;

    assign EX_pc_o          = EX_pc_r;
    assign EX_optype_info_o = EX_optype_info_r;
    assign EX_alu_info_o    = EX_alu_info_r;
    assign EX_branch_info_o = EX_branch_info_r;
    assign EX_ld_st_info_o  = EX_ld_st_info_r;
    assign EX_csr_info_o    = EX_csr_info_r;
    assign EX_rs1_rdata_o   = EX_rs1_rdata_r;
    assign EX_rs2_rdata_o   = EX_rs2_rdata_r;
    assign EX_imm_o         = EX_imm_r;
    assign EX_csr_wen_o     = EX_csr_wen_r;
    assign EX_csr_idx_o     = EX_csr_idx_r;
    assign EX_pc_misalign_o = EX_pc_misalign_r;
    assign EX_if_bus_err_o  = EX_if_bus_err_r;
    assign EX_ilegl_instr_o = EX_ilegl_instr_r;
    assign EX_ecall_o       = EX_ecall_r;
    assign EX_ebreak_o      = EX_ebreak_r;
    assign EX_mret_o        = EX_mret_r;


    // data_valid
    always @(posedge clk) begin
        if(rst) begin
            EX_data_valid <= 1'b0;
        end else if(EX_ready_o) begin
            EX_data_valid <= ID_valid_i;
        end 
    end
    // pc_r
    always @(posedge clk) begin
        if(EX_ready_o && ID_valid_i) begin
            EX_pc_r          <= ID_pc_i;
            EX_optype_info_r <= id_optype_info_i;
            EX_alu_info_r    <= id_alu_info_i;
            EX_branch_info_r <= id_branch_info_i;
            EX_ld_st_info_r  <= id_ld_st_info_i;
            EX_csr_info_r    <= id_csr_info_i;
            EX_rs1_rdata_r   <= id_rs1_rdata_i;
            EX_rs2_rdata_r   <= id_rs2_rdata_i;
            EX_imm_r         <= id_imm_i;
            EX_csr_wen_r     <= id_csr_wen_i;
            EX_csr_idx_r     <= id_csr_idx_i;
            EX_pc_misalign_r <= ID_pc_misalign_i;
            EX_if_bus_err_r  <= ID_if_bus_err_i;
            EX_ilegl_instr_r <= id_ilegl_instr_i;
            EX_ecall_r       <= id_ecall_i;
            EX_ebreak_r      <= id_ebreak_i;
            EX_mret_r        <= id_mret_i;
        end
    end


endmodule