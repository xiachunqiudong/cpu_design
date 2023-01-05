`include "defines.v"

module cpu(
    input clk,
    input reset
);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// PC_REG WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // if x pc_reg
    // to if
    wire [`PC_WIDTH-1:0] IF_pc;
    // form if
    wire [`PC_WIDTH-1:0] if_pc_next;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// IF WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // if x regfile
    wire             if_jalr_rs1_en;
    wire [4:0]       if_jalr_rs1_idx;
    wire [`XLEN-1:0] rf_jalr_rs1_rdata;

    // to id
    wire [`INSTR_WIDTH-1:0] if_instr;
    wire                    if_pc_misalign;
    wire                    if_bus_err;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ID WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // id x regfile
    // to regfile
    wire             id_rs1_en;
    wire [4:0]       id_rs1_idx;
    wire             id_rs2_en;
    wire [4:0]       id_rs2_idx;
    // from regfile
    wire [`XLEN-1:0] rf_rs1_rdata;
    wire [`XLEN-1:0] rf_rs2_rdata;
    
    // to wb
    wire       id_rd_en;
    wire [4:0] id_rd_idx;
    
    // to ex
    // op infomation
    wire [`OP_INFO_WIDTH-1:0]     id_opcode_info;
    wire [`ALU_INFO_WIDTH-1:0]    id_alu_info;
    wire [`BRANCH_INFO_WIDTH-1:0] id_branch_info;
    wire [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info;
    wire [`CSR_INFO_WIDTH-1:0]    id_csr_info;
    // op number
    wire [`XLEN-1:0]              id_rs1_rdata;
    wire [`XLEN-1:0]              id_rs2_rdata;
    wire [`XLEN-1:0]              id_imm;
   
    // excp
    wire id_ilegl_inst;
    wire id_ecall;
    wire id_ebreak;
    wire id_mret;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// EX WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [`XLEN-1:0] ex_alu_rd_wdata;
    wire [`XLEN-1:0] ex_agu_mem_addr;
    wire             ex_branch_jump;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// WB WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire             wb_rd_en;
    wire [4:0]       wb_rd_idx;
    wire [`XLEN-1:0] wb_rd_wdata;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// PC REG
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    pc_reg pc_reg_u(
        .clk       ( clk        ),
        .rst       ( reset      ),
        .pc_next_i ( if_pc_next ),
        .IF_pc_o   ( IF_pc      )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTR FETCH
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    instr_fetch instr_fetch_u(
        .pc_i              ( IF_pc          ),
        .if_pc_next_o      ( if_pc_next     ),
        // to id
        .if_instr_o        ( if_instr       ),

        // to regfile
        .if_jalr_rs1_en_o  (if_jalr_rs1_en),
        .if_jalr_rs1_idx_o (if_jalr_rs1_idx),
        // from regfile
        .jalr_rs1_rdata_i  (rf_jalr_rs1_rdata),

        // excp
        .if_pc_misalign_o  ( if_pc_misalign ),
        .if_bus_err_o      ( if_bus_err     )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTR DECODE
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    id id_u(
        // from if
        .instr_i          ( if_instr       ),
        
        // to regfile
        .id_rs1_en_o      ( id_rs1_en      ),
        .id_rs1_idx_o     ( id_rs1_idx     ),
        .id_rs2_en_o      ( id_rs2_en      ),
        .id_rs2_idx_o     ( id_rs2_idx     ),
        // from regfile
        .rf_rs1_rdata_i   ( rf_rs1_rdata   ),
        .rf_rs2_rdata_i   ( rf_rs2_rdata   ),
        
        // to wb
        .id_rd_en_o       ( id_rd_en       ),
        .id_rd_idx_o      ( id_rd_idx      ),
        
        // to ex
        // op information
        .id_opcode_info_o ( id_opcode_info ),
        .id_alu_info_o    ( id_alu_info    ),
        .id_branch_info_o ( id_branch_info ),
        .id_ld_st_info_o  ( id_ld_st_info  ),
        .id_csr_info_o    ( id_csr_info    ),
        // op number
        .id_rs1_rdata_o   ( id_rs1_rdata   ),
        .id_rs2_rdata_o   ( id_rs2_rdata   ),
        .id_imm_o         ( id_imm         ),
        
        // exception
        .id_ilegl_instr_o ( id_ilegl_inst  ),
        .id_ecall_o       ( id_ecall       ),
        .id_ebreak_o      ( id_ebreak      ),
        .id_mret_o        ( id_mret        )
    );


    // REGFILE
    regfile regfile_u(
        .clk                    ( clk                    ),
        .reset                  ( reset                  ),
        
        // wb x regfile
        // from wb
        .rd_en_i                ( wb_rd_en               ),
        .rd_idx_i               ( wb_rd_idx              ),
        .rd_wdata_i             ( wb_rd_wdata            ),
        
        // id x regfile
        // from id
        .rs1_en_i               ( id_rs1_en              ),
        .rs1_idx_i              ( id_rs1_idx             ),
        .rs2_en_i               ( id_rs2_en              ),
        .rs2_idx_i              ( id_rs2_idx             ),
        // to id
        .rf_rs1_rdata_o         ( rf_rs1_rdata           ),
        .rf_rs2_rdata_o         ( rf_rs2_rdata           ),
        
        // if x regfile
        // form if
        .jalr_rs1_en_i          ( if_jalr_rs1_en         ),
        .jalr_rs1_idx_i         ( if_jalr_rs1_idx        ),
        // to if
        .rf_jalr_rs1_rdata_o    ( rf_jalr_rs1_rdata      )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// EXECUTION
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    ex ex_u(
        .opcode_info_i     ( id_opcode_info  ),
        .alu_info_i        ( id_alu_info     ),
        .branch_info_i     ( id_branch_info  ),
        .ld_st_info_i      ( id_ld_st_info   ),
        .csr_info_i        ( id_csr_info     ),
        
        .pc_i              ( IF_pc           ),
        .rs1_rdata_i       ( id_rs1_rdata    ),
        .rs2_rdata_i       ( id_rs2_rdata    ),
        .imm_i             ( id_imm          ),
        
        .ex_alu_rd_wdata_o ( ex_alu_rd_wdata ),
        .ex_agu_mem_addr_o ( ex_agu_mem_addr ),
        .ex_branch_jump_o  ( ex_branch_jump  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// MEMORY
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// WRITE BACK
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//


    wb u_wb(
        .rd_en_i        ( id_rd_en        ),
        .rd_idx_i       ( id_rd_idx       ),
        
        .alu_rd_wdata_i ( ex_alu_rd_wdata ),
        .mem_rd_wdata_i (                 ),
        .csr_rd_wdata_i (                 ),
        
        .wb_rd_en_o     ( wb_rd_en        ),
        .wb_rd_idx_o    ( wb_rd_idx       ),
        .wb_rd_wdata_o  ( wb_rd_wdata     )
    );

endmodule