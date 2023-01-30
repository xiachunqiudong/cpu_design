`include "defines.v"

module top_sim(
    input clk,
    input rst
);

    // wires for IF
    wire [`PC_WIDTH-1:0]    IF_pc;
    wire                    IF_valid;
    // to IF
    wire [`PC_WIDTH-1:0]    ifu_pc_next;
    // to ID
    wire [`INSTR_WIDTH-1:0] ifu_instr;
    wire                    ifu_prdt_taken;
    wire                    ifu_pc_misalign;
    wire                    ifu_bus_err;

    // wires for ID
    wire [`PC_WIDTH-1:0]    ID_pc;
    wire [`INSTR_WIDTH-1:0] ID_instr;
    wire                    ID_prdt_taken;
    wire                    ID_pc_misalign;
    wire                    ID_if_bus_err;
    wire                    ID_ready;
    wire                    ID_valid;

    // read regfile
    wire [4:0]       id_rs1_idx;
    wire [4:0]       id_rs2_idx;
    wire [`XLEN-1:0] rf_rs1_rdata;
    wire [`XLEN-1:0] rf_rs2_rdata;
    // csr
    wire [11:0]      id_csr_idx;
    wire             id_csr_wen;
    // to EX
    // op infomation
    wire [`OP_INFO_WIDTH-1:0]     id_optype_info;
    wire [`ALU_INFO_WIDTH-1:0]    id_alu_info;
    wire [`BRANCH_INFO_WIDTH-1:0] id_branch_info;
    wire [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info;
    wire [`CSR_INFO_WIDTH-1:0]    id_csr_info;
    // op number
    wire [`XLEN-1:0]              id_rs1_rdata;
    wire [`XLEN-1:0]              id_rs2_rdata;
    wire [`XLEN-1:0]              id_imm;
    // rd
    wire             id_rd_wen;
    wire [4:0]       id_rd_idx;
    // excp
    wire id_ilegl_instr;
    wire id_ecall;
    wire id_ebreak;
    wire id_mret;

// wires fro EX
    wire [`PC_WIDTH-1:0]          EX_pc;
    wire [`OP_INFO_WIDTH-1:0]     EX_optype_info;
    wire [`ALU_INFO_WIDTH-1:0]    EX_alu_info;
    wire [`BRANCH_INFO_WIDTH-1:0] EX_branch_info;
    wire [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info;
    wire [`CSR_INFO_WIDTH-1:0]    EX_csr_info;
    wire [`XLEN-1:0]              EX_rs1_rdata;
    wire [`XLEN-1:0]              EX_rs2_rdata;
    wire [`XLEN-1:0]              EX_imm;
    wire                          EX_csr_wen;
    wire [11:0]                   EX_csr_idx;
    wire                          EX_rd_wen;
    wire [4:0]                    EX_rd_idx;
    wire                          EX_pc_misalign;
    wire                          EX_if_bus_err;
    wire                          EX_ilegl_instr;
    wire                          EX_ecall;
    wire                          EX_ebreak;
    wire                          EX_mret;
    wire                          EX_valid;
    wire                          EX_ready;

    wire [`XLEN-1:0]              ex_alu_res;
    wire [`XLEN-1:0]              ex_csr_rdata;
    wire [`XLEN-1:0]              ex_cgu_csr_wdata;
    wire                          ex_branch_jump;

// wire for MEM
    wire MEM_ready = 1;

// IF stage
    IF u_IF(
        .clk           ( clk         ),
        .rst           ( rst         ),
        .ifu_pc_next_i ( ifu_pc_next ),
        .IF_pc_o       ( IF_pc       ),
        .ID_ready_i    ( ID_ready    ),
        .IF_valid_o    ( IF_valid    )
    );

    ifu u_ifu(
        .IF_pc_i           ( IF_pc           ),
        .ifu_pc_next_o     ( ifu_pc_next     ),
        .ifu_instr_o       ( ifu_instr       ),
        .ifu_prdt_taken_o  ( ifu_prdt_taken  ),
        .ifu_pc_misalign_o ( ifu_pc_misalign ),
        .ifu_bus_err_o     ( ifu_bus_err     )
    );

// ID stage
    ID u_ID(
        .clk               ( clk             ),
        .rst               ( rst             ),
        .IF_pc_i           ( IF_pc           ),
        .ifu_instr_i       ( ifu_instr       ),
        .ifu_prdt_taken_i  ( ifu_prdt_taken  ),
        .ifu_pc_misalign_i ( ifu_pc_misalign ),
        .ifu_bus_err_i     ( ifu_bus_err     ),
        .ID_pc_o           ( ID_pc           ),
        .ID_instr_o        ( ID_instr        ),
        .ID_prdt_taken_o   ( ID_prdt_taken   ),
        .ID_pc_misalign_o  ( ID_pc_misalign  ),
        .ID_if_bus_err_o   ( ID_if_bus_err   ),
        .IF_valid_i        ( IF_valid        ),
        .EX_ready_i        ( EX_ready        ),
        .ID_valid_o        ( ID_valid        ),
        .ID_ready_o        ( ID_ready        )
    );

    id u_id(
        // from if
        .instr_i          ( ID_instr       ),
        // id x regfile
        // to regfile
        .id_rs1_idx_o     ( id_rs1_idx     ),
        .id_rs2_idx_o     ( id_rs2_idx     ),
        // from regfile
        .rf_rs1_rdata_i   ( rf_rs1_rdata   ),
        .rf_rs2_rdata_i   ( rf_rs2_rdata   ),
        // csr
        .id_csr_wen_o     ( id_csr_wen     ),
        .id_csr_idx_o     ( id_csr_idx     ),
        // to ex
        // op info
        .id_optype_info_o ( id_optype_info ),
        .id_alu_info_o    ( id_alu_info    ),
        .id_branch_info_o ( id_branch_info ),
        .id_ld_st_info_o  ( id_ld_st_info  ),
        .id_csr_info_o    ( id_csr_info    ),
        // op number
        .id_rs1_rdata_o   ( id_rs1_rdata   ),
        .id_rs2_rdata_o   ( id_rs2_rdata   ),
        .id_imm_o         ( id_imm         ),
        // rd
        .id_rd_wen_o      ( id_rd_wen      ),
        .id_rd_idx_o      ( id_rd_idx      ),
        // excp
        .id_ilegl_instr_o ( id_ilegl_instr ),
        .id_ecall_o       ( id_ecall       ),
        .id_ebreak_o      ( id_ebreak      ),
        .id_mret_o        ( id_mret        )
    );

    EX u_EX(
        .clk              ( clk            ),
        .rst              ( rst            ),
        .ID_pc_i          ( ID_pc          ),
        .id_optype_info_i ( id_optype_info ),
        .id_alu_info_i    ( id_alu_info    ),
        .id_branch_info_i ( id_branch_info ),
        .id_ld_st_info_i  ( id_ld_st_info  ),
        .id_csr_info_i    ( id_csr_info    ),
        .id_rs1_rdata_i   ( id_rs1_rdata   ),
        .id_rs2_rdata_i   ( id_rs2_rdata   ),
        .id_imm_i         ( id_imm         ),
        .id_csr_wen_i     ( id_csr_wen     ),
        .id_csr_idx_i     ( id_csr_idx     ),
        .id_rd_wen_i      ( id_rd_wen      ),
        .id_rd_idx_i      ( id_rd_idx      ),
        .ID_pc_misalign_i ( ID_pc_misalign ),
        .ID_if_bus_err_i  ( ID_if_bus_err  ),
        .id_ilegl_instr_i ( id_ilegl_instr ),
        .id_ecall_i       ( id_ecall       ),
        .id_ebreak_i      ( id_ebreak      ),
        .id_mret_i        ( id_mret        ),
        .EX_pc_o          ( EX_pc          ),
        .EX_optype_info_o ( EX_optype_info ),
        .EX_alu_info_o    ( EX_alu_info    ),
        .EX_branch_info_o ( EX_branch_info ),
        .EX_ld_st_info_o  ( EX_ld_st_info  ),
        .EX_csr_info_o    ( EX_csr_info    ),
        .EX_rs1_rdata_o   ( EX_rs1_rdata   ),
        .EX_rs2_rdata_o   ( EX_rs2_rdata   ),
        .EX_imm_o         ( EX_imm         ),
        .EX_csr_wen_o     ( EX_csr_wen     ),
        .EX_csr_idx_o     ( EX_csr_idx     ),
        .EX_rd_wen_o      ( EX_rd_wen      ),
        .EX_rd_idx_o      ( EX_rd_idx      ),
        .EX_pc_misalign_o ( EX_pc_misalign ),
        .EX_if_bus_err_o  ( EX_if_bus_err  ),
        .EX_ilegl_instr_o ( EX_ilegl_instr ),
        .EX_ecall_o       ( EX_ecall       ),
        .EX_ebreak_o      ( EX_ebreak      ),
        .EX_mret_o        ( EX_mret        ),
        .ID_valid_i       ( ID_valid       ),
        .MEM_ready_i      ( MEM_ready      ),
        .EX_valid_o       ( EX_valid       ),
        .EX_ready_o       ( EX_ready       )
    );

    ex u_ex(
        .optype_info_i      ( EX_optype_info     ),
        .alu_info_i         ( EX_alu_info        ),
        .branch_info_i      ( EX_branch_info     ),
        .ld_st_info_i       ( EX_ld_st_info      ),
        .csr_info_i         ( EX_csr_info        ),
        .pc_i               ( EX_pc              ),
        .rs1_rdata_i        ( EX_rs1_rdata       ),
        .rs2_rdata_i        ( EX_rs2_rdata       ),
        .imm_i              ( EX_imm             ),
        .csr_idx_i          ( EX_csr_idx         ),
        .ex_csr_idx_o       (),
        .csr_rdata_i        (),
        .ex_alu_res_o       ( ex_alu_res         ),
        .ex_csr_rdata_o     ( ex_csr_rdata       ),
        .ex_cgu_csr_wdata_o ( ex_cgu_csr_wdata   ),
        .ex_branch_jump_o   ( ex_branch_jump     )
    );



endmodule