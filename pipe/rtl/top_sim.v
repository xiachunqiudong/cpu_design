`include "defines.v"

module top_sim(
    input clk,
    input rst,
    input int_exter,
    output [`XLEN-1:0] reg_data_o [1:31],
    output [7:0] ram_data_o [0:`RAM_SIZE-1]
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
    wire             id_csr_ren;
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
    wire             id_load_use;
    // excp
    wire id_ilegl_instr;
    wire id_ecall;
    wire id_ebreak;
    wire id_mret;

// wires fro EX
    wire [`PC_WIDTH-1:0]          EX_pc;
    wire                          EX_prdt_taken;
    wire [`OP_INFO_WIDTH-1:0]     EX_optype_info;
    wire [`ALU_INFO_WIDTH-1:0]    EX_alu_info;
    wire [`BRANCH_INFO_WIDTH-1:0] EX_branch_info;
    wire [`LD_ST_INFO_WIDTH-1:0]  EX_ld_st_info;
    wire [`CSR_INFO_WIDTH-1:0]    EX_csr_info;
    wire                          EX_op_load;
    wire [4:0]                    EX_rs1_idx;
    wire [4:0]                    EX_rs2_idx;
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
    
    wire [`XLEN-1:0]              csr_rdata;
    wire [`XLEN-1:0]              ex_csr_rdata;
    wire [`XLEN-1:0]              ex_alu_res;
    wire [`XLEN-1:0]              ex_csr_rdata;
    wire [`XLEN-1:0]              ex_csr_wdata;
    wire                          ex_jump;
    wire [`PC_WIDTH-1:0]          ex_jump_pc;  

// wire for MEM
    wire [`XLEN-1:0]             MEM_pc;
    wire [`OP_INFO_WIDTH-1:0]    MEM_optype_info;
    wire [`LD_ST_INFO_WIDTH-1:0] MEM_ld_st_info;
    wire                         MEM_csr_wen;
    wire [11:0]                  MEM_csr_idx;
    wire                         MEM_rd_wen;
    wire [4:0]                   MEM_rd_idx;
    wire [`XLEN-1:0]             MEM_fwd_data;
    wire [`XLEN-1:0]             MEM_rs2_rdata;
    wire [`XLEN-1:0]             MEM_alu_res;
    wire [`XLEN-1:0]             MEM_csr_rdata;
    wire [`XLEN-1:0]             MEM_csr_wdata;
    wire                         MEM_pc_misalign;
    wire                         MEM_if_bus_err;
    wire                         MEM_ilegl_instr;
    wire                         MEM_ecall;
    wire                         MEM_ebreak;
    wire                         MEM_mret;
    wire                         MEM_ready;
    wire                         MEM_valid;

    wire [`XLEN-1:0] mem_rdata;
    wire mem_ld_misalign;
    wire mem_ld_bus_err;
    wire mem_st_misalign;
    wire mem_st_bus_err;

// wire for WB
    wire                      WB_ready;
    wire [`PC_WIDTH-1:0]      WB_pc;
    wire [`OP_INFO_WIDTH-1:0] WB_optype_info;
    wire                      WB_csr_wen;
    wire [11:0]               WB_csr_idx;
    wire [`XLEN-1:0]          WB_csr_wdata;
    wire                      WB_rd_wen;
    wire [4:0]                WB_rd_idx;
    wire [`XLEN-1:0]          WB_alu_res;
    wire [`XLEN-1:0]          WB_csr_rdata;
    wire [`XLEN-1:0]          WB_mem_rdata;
    // excp
    wire                      WB_pc_misalign;
    wire                      WB_if_bus_err;
    wire                      WB_ilegl_instr;
    wire                      WB_ecall;
    wire                      WB_ebreak;
    wire                      WB_mret;
    wire                      WB_ld_misalign;
    wire                      WB_ld_bus_err;
    wire                      WB_st_misalign;
    wire                      WB_st_bus_err;

    wire                      wb_rd_wen;
    wire [4:0]                wb_rd_idx;
    wire [`XLEN-1:0]          wb_rd_wdata;

    wire                      wb_trap;
    wire [`PC_WIDTH-1:0]      wb_trap_handle_pc;
// controller
    wire                 if_flush;
    wire                 id_flush;
    wire                 ex_flush;
    wire                 mem_flush;
    wire [`PC_WIDTH-1:0] flush_pc;

    controller u_controller(
        .ex_jump_i           ( ex_jump           ),
        .ex_jump_pc_i        ( ex_jump_pc        ),
        .wb_trap_i           ( wb_trap           ),
        .wb_trap_handle_pc_i ( wb_trap_handle_pc ),
        .if_flush_o          ( if_flush          ),
        .id_flush_o          ( id_flush          ),
        .ex_flush_o          ( ex_flush          ),
        .mem_flush_o         ( mem_flush         ),
        .flush_pc_o          ( flush_pc          )
    );


// IF stage
    IF u_IF(
        .clk           ( clk         ),
        .rst           ( rst         ),
        .if_flush_i    ( if_flush    ),
        .ifu_pc_next_i ( ifu_pc_next ),
        .IF_pc_o       ( IF_pc       ),
        .ID_ready_i    ( ID_ready    ),
        .IF_valid_o    ( IF_valid    )
    );

    ifu u_ifu(
        .IF_pc_i           ( IF_pc           ),
        .if_flush_i        ( if_flush        ),
        .flush_pc_i        ( flush_pc        ),
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
        .id_flush_i        ( id_flush        ),
        .IF_pc_i           ( IF_pc           ),
        .ifu_instr_i       ( ifu_instr       ),
        .ifu_prdt_taken_i  ( ifu_prdt_taken  ),
        .ifu_pc_misalign_i ( ifu_pc_misalign ),
        .ifu_bus_err_i     ( ifu_bus_err     ),
        .id_load_use_i     ( id_load_use     ),
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
        .id_flush_i       ( id_flush       ),
        .instr_i          ( ID_instr       ),
        .id_rs1_idx_o     ( id_rs1_idx     ),
        .id_rs2_idx_o     ( id_rs2_idx     ),
        .rf_rs1_rdata_i   ( rf_rs1_rdata   ),
        .rf_rs2_rdata_i   ( rf_rs2_rdata   ),
        .EX_op_load_i     ( EX_op_load     ),
        .EX_rd_idx_i      ( EX_rd_idx      ),
        .id_optype_info_o ( id_optype_info ),
        .id_alu_info_o    ( id_alu_info    ),
        .id_branch_info_o ( id_branch_info ),
        .id_ld_st_info_o  ( id_ld_st_info  ),
        .id_csr_info_o    ( id_csr_info    ),
        .id_rs1_rdata_o   ( id_rs1_rdata   ),
        .id_rs2_rdata_o   ( id_rs2_rdata   ),
        .id_imm_o         ( id_imm         ),
        .id_csr_ren_o     ( id_csr_ren     ),
        .id_csr_wen_o     ( id_csr_wen     ),
        .id_csr_idx_o     ( id_csr_idx     ),
        .id_rd_wen_o      ( id_rd_wen      ),
        .id_rd_idx_o      ( id_rd_idx      ),
        .id_load_use_o    ( id_load_use    ),
        .id_ilegl_instr_o ( id_ilegl_instr ),
        .id_ecall_o       ( id_ecall       ),
        .id_ebreak_o      ( id_ebreak      ),
        .id_mret_o        ( id_mret        )
    );

    regfile u_regfile(
        .clk            ( clk          ),
        .rd_wen_i       ( wb_rd_wen    ),
        .rd_idx_i       ( wb_rd_idx    ),
        .rd_wdata_i     ( wb_rd_wdata  ),
        .rs1_idx_i      ( id_rs1_idx   ),
        .rs2_idx_i      ( id_rs2_idx   ),
        .rf_rs1_rdata_o ( rf_rs1_rdata ),
        .rf_rs2_rdata_o ( rf_rs2_rdata ),
        .reg_data_o     ( reg_data_o   )
    );

// EX stage
    EX u_EX(
        .clk              ( clk            ),
        .rst              ( rst            ),
        .ex_flush_i       ( ex_flush       ),
        .ID_pc_i          ( ID_pc          ),
        .ID_prdt_taken_i  ( ID_prdt_taken  ),
        .id_optype_info_i ( id_optype_info ),
        .id_alu_info_i    ( id_alu_info    ),
        .id_branch_info_i ( id_branch_info ),
        .id_ld_st_info_i  ( id_ld_st_info  ),
        .id_csr_info_i    ( id_csr_info    ),
        .id_rs1_idx_i     ( id_rs1_idx     ),
        .id_rs2_idx_i     ( id_rs2_idx     ),
        .id_rs1_rdata_i   ( id_rs1_rdata   ),
        .id_rs2_rdata_i   ( id_rs2_rdata   ),
        .id_imm_i         ( id_imm         ),
        .MEM_rd_wen_i     ( MEM_rd_wen     ),
        .MEM_rd_idx_i     ( MEM_rd_idx     ),
        .MEM_fwd_data_i   ( MEM_fwd_data   ),
        .WB_rd_wen_i      ( WB_rd_wen      ),
        .WB_rd_idx_i      ( WB_rd_idx      ),
        .wb_rd_wdata_i    ( wb_rd_wdata    ),
        .MEM_csr_wen_i    ( MEM_csr_wen    ),
        .MEM_csr_idx_i    ( MEM_csr_idx    ),
        .WB_csr_wen_i     ( WB_csr_wen     ),
        .WB_csr_idx_i     ( WB_csr_idx     ),
        .id_csr_ren_i     ( id_csr_ren     ),
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
        .EX_prdt_taken_o  ( EX_prdt_taken  ),
        .EX_optype_info_o ( EX_optype_info ),
        .EX_alu_info_o    ( EX_alu_info    ),
        .EX_branch_info_o ( EX_branch_info ),
        .EX_ld_st_info_o  ( EX_ld_st_info  ),
        .EX_csr_info_o    ( EX_csr_info    ),
        .EX_op_load_o     ( EX_op_load     ),
        .EX_rs1_idx_o     ( EX_rs1_idx     ),
        .EX_rs2_idx_o     ( EX_rs2_idx     ),
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
        .optype_info_i      ( EX_optype_info ),
        .alu_info_i         ( EX_alu_info    ),
        .branch_info_i      ( EX_branch_info ),
        .ld_st_info_i       ( EX_ld_st_info  ),
        .csr_info_i         ( EX_csr_info    ),
        .EX_rs1_idx_i       ( EX_rs1_idx     ),
        .EX_rs2_idx_i       ( EX_rs2_idx     ),
        .EX_prdt_taken_i    ( EX_prdt_taken  ),
        .pc_i               ( EX_pc          ),
        .rs1_rdata_i        ( EX_rs1_rdata   ),
        .rs2_rdata_i        ( EX_rs2_rdata   ),
        .imm_i              ( EX_imm         ),
        .csr_rdata_i        ( csr_rdata      ),
        .ex_alu_res_o       ( ex_alu_res     ),
        .ex_csr_rdata_o     ( ex_csr_rdata   ),
        .ex_csr_wdata_o     ( ex_csr_wdata   ),
        .ex_jump_o          ( ex_jump        ),
        .ex_jump_pc_o       ( ex_jump_pc     )
    );

// MEM stage
    MEM u_MEM(
        .clk               ( clk             ),
        .rst               ( rst             ),
        .mem_flush_i       ( mem_flush       ),
        .EX_pc_i           ( EX_pc           ),
        .EX_optype_info_i  ( EX_optype_info  ),
        .EX_ld_st_info_i   ( EX_ld_st_info   ),
        .EX_csr_wen_i      ( EX_csr_wen      ),
        .EX_csr_idx_i      ( EX_csr_idx      ),
        .EX_rd_wen_i       ( EX_rd_wen       ),
        .EX_rd_idx_i       ( EX_rd_idx       ),
        .EX_rs2_rdata_i    ( EX_rs2_rdata    ),
        .ex_alu_res_i      ( ex_alu_res      ),
        .ex_csr_rdata_i    ( ex_csr_rdata    ),
        .ex_csr_wdata_i    ( ex_csr_wdata    ),
        .EX_pc_misalign_i  ( EX_pc_misalign  ),
        .EX_if_bus_err_i   ( EX_if_bus_err   ),
        .EX_ilegl_instr_i  ( EX_ilegl_instr  ),
        .EX_ecall_i        ( EX_ecall        ),
        .EX_ebreak_i       ( EX_ebreak       ),
        .EX_mret_i         ( EX_mret         ),
        .MEM_pc_o          ( MEM_pc          ),
        .MEM_optype_info_o ( MEM_optype_info ),
        .MEM_ld_st_info_o  ( MEM_ld_st_info  ),
        .MEM_csr_wen_o     ( MEM_csr_wen     ),
        .MEM_csr_idx_o     ( MEM_csr_idx     ),
        .MEM_rd_wen_o      ( MEM_rd_wen      ),
        .MEM_rd_idx_o      ( MEM_rd_idx      ),
        .MEM_fwd_data_o    ( MEM_fwd_data    ),
        .MEM_rs2_rdata_o   ( MEM_rs2_rdata   ),
        .MEM_alu_res_o     ( MEM_alu_res     ),
        .MEM_csr_rdata_o   ( MEM_csr_rdata   ),
        .MEM_csr_wdata_o   ( MEM_csr_wdata   ),
        .MEM_pc_misalign_o ( MEM_pc_misalign ),
        .MEM_if_bus_err_o  ( MEM_if_bus_err  ),
        .MEM_ilegl_instr_o ( MEM_ilegl_instr ),
        .MEM_ecall_o       ( MEM_ecall       ),
        .MEM_ebreak_o      ( MEM_ebreak      ),
        .MEM_mret_o        ( MEM_mret        ),
        .EX_valid_i        ( EX_valid        ),
        .WB_ready_i        ( WB_ready        ),
        .MEM_valid_o       ( MEM_valid       ),
        .MEM_ready_o       ( MEM_ready       )
    );

    // mem x ram
    wire [`XLEN-1:0] ram_addr;
    wire             ram_wen;
    wire [7:0]       ram_byte_en;
    wire [`XLEN-1:0] ram_wdata;
    wire             ram_ren;
    wire [`XLEN-1:0] ram_rdata;

    mem u_mem(
        .mem_flush_i       ( mem_flush       ),
        .ld_st_info_i      ( MEM_ld_st_info  ),
        .mem_addr_i        ( MEM_alu_res     ),
        .mem_wdata_i       ( MEM_rs2_rdata   ),
        .mem_rdata_o       ( mem_rdata       ),
        .MEM_pc_misalign_i ( MEM_pc_misalign ),
        .MEM_if_bus_err_i  ( MEM_if_bus_err  ),
        .MEM_ilegl_instr_i ( MEM_ilegl_instr ),
        .MEM_ecall_i       ( MEM_ecall       ),
        .MEM_ebreak_i      ( MEM_ebreak      ),
        .MEM_mret_i        ( MEM_mret        ),
        .mem_ld_misalign_o ( mem_ld_misalign ),
        .mem_ld_bus_err_o  ( mem_ld_bus_err  ),
        .mem_st_misalign_o ( mem_st_misalign ),
        .mem_st_bus_err_o  ( mem_st_bus_err  ),
        .ram_addr_o        ( ram_addr        ),
        .ram_wen_o         ( ram_wen         ),
        .ram_byte_en_o     ( ram_byte_en     ),
        .ram_wdata_o       ( ram_wdata       ),
        .ram_ren_o         ( ram_ren         ),
        .ram_rdata_i       ( ram_rdata       )
    );

    ram u_ram(
        .clk        ( clk         ),
        .addr_i     ( ram_addr    ),
        .wen_i      ( ram_wen     ),
        .byte_en_i  ( ram_byte_en ),
        .wdata_i    ( ram_wdata   ),
        .ren_i      ( ram_ren     ),
        .rdata_o    ( ram_rdata   ),
        .ram_data_o ( ram_data_o  )
    );

    // WB stage
    WB u_WB(
        .clk               ( clk             ),
        .rst               ( rst             ),
        .MEM_pc_i          ( MEM_pc          ),
        .MEM_optype_info_i ( MEM_optype_info ),
        .MEM_csr_wen_i     ( MEM_csr_wen     ),
        .MEM_csr_idx_i     ( MEM_csr_idx     ),
        .MEM_rd_wen_i      ( MEM_rd_wen      ),
        .MEM_rd_idx_i      ( MEM_rd_idx      ),
        .MEM_alu_res_i     ( MEM_alu_res     ),
        .MEM_csr_rdata_i   ( MEM_csr_rdata   ),
        .MEM_csr_wdata_i   ( MEM_csr_wdata   ),
        .mem_rdata_i       ( mem_rdata       ),
        .MEM_pc_misalign_i ( MEM_pc_misalign ),
        .MEM_if_bus_err_i  ( MEM_if_bus_err  ),
        .MEM_ilegl_instr_i ( MEM_ilegl_instr ),
        .MEM_ecall_i       ( MEM_ecall       ),
        .MEM_ebreak_i      ( MEM_ebreak      ),
        .MEM_mret_i        ( MEM_mret        ),
        .mem_ld_misalign_i ( mem_ld_misalign ),
        .mem_ld_bus_err_i  ( mem_ld_bus_err  ),
        .mem_st_misalign_i ( mem_st_misalign ),
        .mem_st_bus_err_i  ( mem_st_bus_err  ),
        .WB_pc_o           ( WB_pc           ),
        .WB_optype_info_o  ( WB_optype_info  ),
        .WB_csr_wen_o      ( WB_csr_wen      ),
        .WB_csr_idx_o      ( WB_csr_idx      ),
        .WB_rd_wen_o       ( WB_rd_wen       ),
        .WB_rd_idx_o       ( WB_rd_idx       ),
        .WB_alu_res_o      ( WB_alu_res      ),
        .WB_csr_rdata_o    ( WB_csr_rdata    ),
        .WB_csr_wdata_o    ( WB_csr_wdata    ),
        .WB_mem_rdata_o    ( WB_mem_rdata    ),
        .WB_pc_misalign_o  ( WB_pc_misalign  ),
        .WB_if_bus_err_o   ( WB_if_bus_err   ),
        .WB_ilegl_instr_o  ( WB_ilegl_instr  ),
        .WB_ecall_o        ( WB_ecall        ),
        .WB_ebreak_o       ( WB_ebreak       ),
        .WB_mret_o         ( WB_mret         ),
        .WB_ld_misalign_o  ( WB_ld_misalign  ),
        .WB_ld_bus_err_o   ( WB_ld_bus_err   ),
        .WB_st_misalign_o  ( WB_st_misalign  ),
        .WB_st_bus_err_o   ( WB_st_bus_err   ),
        .MEM_valid_i       ( MEM_valid       ),
        .WB_ready_o        ( WB_ready        )
    );

    // wb x csr
    wire             wb_csr_wen;
    wire [11:0]      wb_csr_idx;
    wire [`XLEN-1:0] wb_csr_wdata;
    

    wire             mcause_wen;
    wire [`XLEN-1:0] mcause_wdata;
    wire             mtval_wen;
    wire [`XLEN-1:0] mtval_wdata;
    wire             mepc_wen;
    wire [`XLEN-1:0] mepc_wdata;
    wire             mstatus_mie_set;
    wire             mstatus_mie_clear;

    // read csr
    wire             mstatus_mie_rdata;
    wire             mie_meie_rdata;
    wire             mie_mtie_rdata;
    wire             mie_msie_rdata;
    wire             mip_meip_rdata;
    wire             mip_mtip_rdata;
    wire             mip_msip_rdata;
    wire [`XLEN-1:0] mtvec_rdata;
    wire [`XLEN-1:0] mepc_rdata;
    
    wb u_wb(
        .WB_pc_i             ( WB_pc             ),
        .WB_instr_i          (),
        .WB_optype_info_i    ( WB_optype_info    ),
        .WB_csr_wen_i        ( WB_csr_wen        ),
        .WB_csr_idx_i        ( WB_csr_idx        ),
        .WB_csr_wdata_i      ( WB_csr_wdata      ),
        .WB_rd_wen_i         ( WB_rd_wen         ),
        .WB_rd_idx_i         ( WB_rd_idx         ),
        .WB_alu_res_i        ( WB_alu_res        ),
        .WB_csr_rdata_i      ( WB_csr_rdata      ),
        .WB_mem_rdata_i      ( WB_mem_rdata      ),
        .wb_rd_wen_o         ( wb_rd_wen         ),
        .wb_rd_idx_o         ( wb_rd_idx         ),
        .wb_rd_wdata_o       ( wb_rd_wdata       ),
        .wb_csr_wen_o        ( wb_csr_wen        ),
        .wb_csr_idx_o        ( wb_csr_idx        ),
        .wb_csr_wdata_o      ( wb_csr_wdata      ),
        .WB_pc_misalign_i    ( WB_pc_misalign    ),
        .WB_if_bus_err_i     ( WB_if_bus_err     ),
        .WB_ilegl_instr_i    ( WB_ilegl_instr    ),
        .WB_ecall_i          ( WB_ecall          ),
        .WB_ebreak_i         ( WB_ebreak         ),
        .WB_mret_i           ( WB_mret           ),
        .WB_ld_misalign_i    ( WB_ld_misalign    ),
        .WB_ld_bus_err_i     ( WB_ld_bus_err     ),
        .WB_st_misalign_i    ( WB_st_misalign    ),
        .WB_st_bus_err_i     ( WB_st_bus_err     ),
        .mstatus_mie_rdata_i ( mstatus_mie_rdata ),
        .mie_meie_rdata_i    ( mie_meie_rdata    ),
        .mie_mtie_rdata_i    ( mie_mtie_rdata    ),
        .mie_msie_rdata_i    ( mie_msie_rdata    ),
        .mip_meip_rdata_i    ( mip_meip_rdata    ),
        .mip_mtip_rdata_i    ( mip_mtip_rdata    ),
        .mip_msip_rdata_i    ( mip_msip_rdata    ),
        .mtvec_rdata_i       ( mtvec_rdata       ),
        .mepc_rdata_i        ( mepc_rdata        ),
        .mcause_wen_o        ( mcause_wen        ),
        .mcause_wdata_o      ( mcause_wdata      ),
        .mtval_wen_o         ( mtval_wen         ),
        .mtval_wdata_o       ( mtval_wdata       ),
        .mepc_wen_o          ( mepc_wen          ),
        .mepc_wdata_o        ( mepc_wdata        ),
        .mstatus_mie_set_o   ( mstatus_mie_set   ),
        .mstatus_mie_clear_o ( mstatus_mie_clear ),
        .wb_trap_o           ( wb_trap           ),
        .wb_trap_handle_pc_o ( wb_trap_handle_pc )
    );


    csr u_csr(
        .clk                ( clk              ),
        .EX_csr_idx_i       ( EX_csr_idx       ),
        .csr_rdata_o        ( csr_rdata        ),
        .wb_csr_wen_i       ( wb_csr_wen       ),
        .wb_csr_idx_i       ( wb_csr_idx       ),
        .wb_csr_wdata_i     ( wb_csr_wdata     ),
        .int_soft_i         (),
        .int_timer_i        (),
        .int_exter_i        ( int_exter        ),
        .mcause_wen_i       ( mcause_wen       ),
        .mcause_wdata_i     ( mcause_wdata     ),
        .mtval_wen_i        ( mtval_wen        ),
        .mtval_wdata_i      ( mtval_wdata      ),
        .mepc_wen_i         ( mepc_wen         ),
        .mepc_wdata_i       ( mepc_wdata       ),
        .mstatus_mie_set_i  ( mstatus_mie_set  ),
        .mstatus_mie_clear_i( mstatus_mie_clear),
        .mstatus_mie_rdata_o( mstatus_mie_rdata),
        .mie_meie_rdata_o   ( mie_meie_rdata   ),
        .mie_mtie_rdata_o   ( mie_mtie_rdata   ),
        .mie_msie_rdata_o   ( mie_msie_rdata   ),
        .mip_meip_rdata_o   ( mip_meip_rdata   ),
        .mip_mtip_rdata_o   ( mip_mtip_rdata   ),
        .mip_msip_rdata_o   ( mip_msip_rdata   ),
        .mtvec_rdata_o      ( mtvec_rdata      ),
        .mepc_rdata_o       ( mepc_rdata       )
    );



endmodule