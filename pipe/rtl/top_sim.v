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
// read or write csr
    wire [11:0]      id_csr_idx;
    wire [`XLEN-1:0] csr_rdata;
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
    wire [`XLEN-1:0] id_csr_rdata;
// excp
    wire id_ilegl_inst;
    wire id_ecall;
    wire id_ebreak;
    wire id_mret;

// wires fro EX
    wire EX_ready = 1;

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
        .ID_ready_o        ( ID_ready        ),
        .ID_valid_o        ( ID_valid        )
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
        
        // id x csr
        .id_csr_wen_o     ( id_csr_wen      ),
        .id_csr_idx_o     ( id_csr_idx     ),
        .csr_rdata_i      ( csr_rdata      ),

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

        // to wb
        .id_rd_wen_o      ( id_rd_wen      ),
        .id_rd_idx_o      ( id_rd_idx      ),
        .id_csr_rdata_o   ( id_csr_rdata   ),
        // exception
        .id_ilegl_instr_o ( id_ilegl_inst  ),
        .id_ecall_o       ( id_ecall       ),
        .id_ebreak_o      ( id_ebreak      ),
        .id_mret_o        ( id_mret        )
    );


endmodule