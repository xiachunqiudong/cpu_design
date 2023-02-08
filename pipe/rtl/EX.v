`include "defines.v"

module EX(
    input                           clk,
    input                           rst,
    input                           ex_flush_i,
    input  [`XLEN-1:0]              ID_pc_i,
    input                           ID_prdt_taken_i,
    // op info
    input  [`OP_INFO_WIDTH-1:0]     id_optype_info_i,
    input  [`ALU_INFO_WIDTH-1:0]    id_alu_info_i,
    input  [`BRANCH_INFO_WIDTH-1:0] id_branch_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info_i,
    input  [`CSR_INFO_WIDTH-1:0]    id_csr_info_i,
    input  [4:0]                    id_rs1_idx_i,
    input  [4:0]                    id_rs2_idx_i,
    // op number
    input  [`XLEN-1:0]              id_rs1_rdata_i,
    input  [`XLEN-1:0]              id_rs2_rdata_i,
    input  [`XLEN-1:0]              id_imm_i,
    // forward
    // from MEM
    input                           MEM_rd_wen_i,
    input  [4:0]                    MEM_rd_idx_i,
    input  [`XLEN-1:0]              MEM_fwd_data_i,
    // from WB
    input                           WB_rd_wen_i,
    input  [4:0]                    WB_rd_idx_i,
    input  [`XLEN-1:0]              wb_rd_wdata_i,
    // CSR DATA HAZARD DETECT
    // from MEM
    input                           MEM_csr_wen_i,
    input [11:0]                    MEM_csr_idx_i,
    // from WB
    input                           WB_csr_wen_i,
    input [11:0]                    WB_csr_idx_i,
    // csr
    input                           id_csr_ren_i,
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
    
    output [`XLEN-1:0]              EX_pc_o,
    output                          EX_prdt_taken_o,
    // op info
    output [`OP_INFO_WIDTH-1:0]     EX_optype_info_o,
    output [`ALU_INFO_WIDTH-1:0]    EX_alu_info_o,
    output [`BRANCH_INFO_WIDTH-1:0] EX_branch_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info_o,
    output [`CSR_INFO_WIDTH-1:0]    EX_csr_info_o,
    output                          EX_op_load_o,
    output [4:0]                    EX_rs1_idx_o,
    output [4:0]                    EX_rs2_idx_o,
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
    assign run = (!csr_hazard);
    assign EX_valid_o = EX_data_valid && run && !ex_flush_i;
    assign EX_ready_o = MEM_ready_i && run;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 前递
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire rs1_MEM_fwd = MEM_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == MEM_rd_idx_i);
    wire rs2_MEM_fwd = MEM_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == MEM_rd_idx_i);

    wire rs1_WB_fwd = WB_rd_wen_i && (EX_rs1_idx_o != `REG_X0) && (EX_rs1_idx_o == WB_rd_idx_i);
    wire rs2_WB_fwd = WB_rd_wen_i && (EX_rs2_idx_o != `REG_X0) && (EX_rs2_idx_o == WB_rd_idx_i);

    assign EX_rs1_rdata_o = rs1_MEM_fwd ? MEM_fwd_data_i
                          : rs1_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs1_rdata_r & {`XLEN{EX_data_valid}};
    assign EX_rs2_rdata_o = rs2_MEM_fwd ? MEM_fwd_data_i
                          : rs2_WB_fwd  ? wb_rd_wdata_i
                          : EX_rs2_rdata_r & {`XLEN{EX_data_valid}};


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CSR 数据冒险检测
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire EX_csr_ren;
    wire csr_hazard = EX_csr_ren && !ex_flush_i
                    && ((MEM_csr_wen_i && MEM_csr_idx_i == EX_csr_idx_o) || (WB_csr_wen_i  && WB_csr_idx_i  == EX_csr_idx_o));


    reg [`XLEN-1:0]              EX_pc_r;
    reg                          EX_prdt_taken_r;
    reg [`OP_INFO_WIDTH-1:0]     EX_optype_info_r;
    reg [`ALU_INFO_WIDTH-1:0]    EX_alu_info_r;
    reg [`BRANCH_INFO_WIDTH-1:0] EX_branch_info_r;
    reg [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info_r;
    reg [`CSR_INFO_WIDTH-1:0]    EX_csr_info_r;
    reg [4:0]                    EX_rs1_idx_r;
    reg [4:0]                    EX_rs2_idx_r;
    reg [`XLEN-1:0]              EX_rs1_rdata_r;
    reg [`XLEN-1:0]              EX_rs2_rdata_r;
    reg [`XLEN-1:0]              EX_imm_r;
    reg                          EX_csr_ren_r;
    reg                          EX_csr_wen_r;
    reg [11:0]                   EX_csr_idx_r;
    reg                          EX_rd_wen_r;
    reg [4:0]                    EX_rd_idx_r;
    reg                          EX_pc_misalign_r;
    reg                          EX_if_bus_err_r;
    reg                          EX_ilegl_instr_r;
    reg                          EX_ecall_r;
    reg                          EX_ebreak_r;
    reg                          EX_mret_r;

    assign EX_pc_o          = EX_pc_r                    & {`PC_WIDTH{EX_data_valid}};
    assign EX_prdt_taken_o  = EX_prdt_taken_r            & EX_data_valid;
    assign EX_optype_info_o = EX_optype_info_r           & {`OP_INFO_WIDTH{EX_data_valid}};
    assign EX_alu_info_o    = EX_alu_info_r              & {`ALU_INFO_WIDTH{EX_data_valid}};
    assign EX_branch_info_o = EX_branch_info_r           & {`BRANCH_INFO_WIDTH{EX_data_valid}};
    assign EX_ld_st_info_o  = EX_ld_st_info_r            & {`LD_ST_INFO_WIDTH{EX_data_valid}};
    assign EX_csr_info_o    = EX_csr_info_r              & {`CSR_INFO_WIDTH{EX_data_valid}};
    assign EX_op_load_o     = EX_optype_info_o[`OP_LOAD] & EX_data_valid;
    assign EX_rs1_idx_o     = EX_rs1_idx_r               & {5{EX_data_valid}};
    assign EX_rs2_idx_o     = EX_rs2_idx_r               & {5{EX_data_valid}};
    assign EX_imm_o         = EX_imm_r                   & {`XLEN{EX_data_valid}};
    assign EX_csr_ren       = EX_csr_ren_r               & EX_data_valid;
    assign EX_csr_wen_o     = EX_csr_wen_r               & EX_data_valid;
    assign EX_csr_idx_o     = EX_csr_idx_r               & {12{EX_data_valid}};
    assign EX_rd_wen_o      = EX_rd_wen_r                & EX_data_valid;
    assign EX_rd_idx_o      = EX_rd_idx_r                & {5{EX_data_valid}};
    assign EX_pc_misalign_o = EX_pc_misalign_r           & EX_data_valid;
    assign EX_if_bus_err_o  = EX_if_bus_err_r            & EX_data_valid;
    assign EX_ilegl_instr_o = EX_ilegl_instr_r           & EX_data_valid;
    assign EX_ecall_o       = EX_ecall_r                 & EX_data_valid;
    assign EX_ebreak_o      = EX_ebreak_r                & EX_data_valid;
    assign EX_mret_o        = EX_mret_r                  & EX_data_valid;


    // data_valid
    always @(posedge clk) begin
        if(rst) begin
            EX_data_valid <= 1'b0;
        end else if(EX_ready_o) begin
            EX_data_valid <= ID_valid_i;
        end 
    end
    // data
    always @(posedge clk) begin
        if(EX_ready_o && ID_valid_i) begin
            EX_pc_r          <= ID_pc_i;
            EX_optype_info_r <= id_optype_info_i;
            EX_alu_info_r    <= id_alu_info_i;
            EX_branch_info_r <= id_branch_info_i;
            EX_ld_st_info_r  <= id_ld_st_info_i;
            EX_csr_info_r    <= id_csr_info_i;
            EX_rs1_idx_r     <= id_rs1_idx_i;
            EX_rs2_idx_r     <= id_rs2_idx_i;
            EX_rs1_rdata_r   <= id_rs1_rdata_i;
            EX_rs2_rdata_r   <= id_rs2_rdata_i;
            EX_imm_r         <= id_imm_i;
            EX_csr_ren_r     <= id_csr_ren_i;
            EX_csr_wen_r     <= id_csr_wen_i;
            EX_csr_idx_r     <= id_csr_idx_i;
            EX_rd_wen_r      <= id_rd_wen_i;
            EX_rd_idx_r      <= id_rd_idx_i;
            EX_pc_misalign_r <= ID_pc_misalign_i;
            EX_if_bus_err_r  <= ID_if_bus_err_i;
            EX_ilegl_instr_r <= id_ilegl_instr_i;
            EX_ecall_r       <= id_ecall_i;
            EX_ebreak_r      <= id_ebreak_i;
            EX_mret_r        <= id_mret_i;
        end
    end


endmodule