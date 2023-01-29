`include "defines.v"

module top_sim(
    // 监视cpu状态 
    output [`XLEN-1:0] reg_data_o [1:31], // reg
    output [7:0] ram_data_o [0:1023],
    output [`PC_WIDTH-1:0] IF_pc_o,
    
    input clk,
    input reset,

    // regfile
    output [4:0]       id_rs1_idx_o,
    output [`XLEN-1:0] id_rs1_rdata_o,
    output [4:0]       id_rs2_idx_o,
    output [`XLEN-1:0] id_rs2_rdata_o,
    output [`XLEN-1:0] id_imm_o,

    output             id_rd_wen_o,
    output [4:0]       id_rd_idx_o,

    output [`XLEN-1:0] ex_alu_res_o,
    output [`XLEN-1:0] ex_mem_addr_o,
    output             ex_branch_jump_o,

    // mem
    output [`XLEN-1:0] mem_rdata_o
);

assign IF_pc_o = IF_pc;

assign id_rs1_idx_o = id_rs1_idx;
assign id_rs1_rdata_o = id_rs1_rdata;
assign id_rs2_idx_o = id_rs2_idx;
assign id_rs2_rdata_o = id_rs2_rdata;
assign id_imm_o = id_imm;

assign id_rd_wen_o = id_rd_wen;
assign id_rd_idx_o = id_rd_idx;

// ex
assign ex_alu_res_o     = ex_alu_res;
assign ex_mem_addr_o    = ex_mem_addr;
assign ex_branch_jump_o = ex_branch_jump;

// mem 
assign mem_rdata_o = mem_rdata;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// PC_REG WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // if x pc_reg
    // to if
    wire [`PC_WIDTH-1:0] IF_pc;
    // form if
    wire [`PC_WIDTH-1:0] pc_next;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// IF WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // if x regfile
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
    wire [4:0]       id_rs1_idx;
    wire [4:0]       id_rs2_idx;
    // from regfile
    wire [`XLEN-1:0] rf_rs1_rdata;
    wire [`XLEN-1:0] rf_rs2_rdata;

    // id x csr
    wire             id_csr_wen;
    wire [11:0]      id_csr_idx;
    wire [`XLEN-1:0] csr_rdata;
    
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
    // csr index
    wire [11:0]                   id_csr_idx;
    // to wb
    wire             id_rd_wen;
    wire [4:0]       id_rd_idx;
    wire [`XLEN-1:0] id_csr_rdata;
    // excp
    wire id_ilegl_inst;
    wire id_ecall;
    wire id_ebreak;
    wire id_mret;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// EX WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [`XLEN-1:0] ex_alu_res;
    wire [`XLEN-1:0] ex_mem_addr;
    wire [`XLEN-1:0] ex_cgu_csr_wdata;
    wire             ex_branch_jump;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// MEM WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    wire [`XLEN-1:0] mem_rdata;
    // mem x ram
    wire [`XLEN-1:0] ram_addr;
    wire             ram_wen;
    wire [7:0]       ram_byte_en;
    wire [`XLEN-1:0] ram_wdata;
    wire             ram_ren;
    wire [`XLEN-1:0] ram_rdata;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// WB WIRES
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire             wb_rd_wen;
    wire [4:0]       wb_rd_idx;
    wire [`XLEN-1:0] wb_rd_wdata;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// PC REG
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    pc_reg pc_reg_u(
        .clk       ( clk        ),
        .rst       ( reset      ),
        .pc_next_i ( pc_next    ),
        .IF_pc_o   ( IF_pc      )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTR FETCH
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    instr_fetch instr_fetch_u(
        .pc_i              ( IF_pc          ),
        //.if_pc_next_o      ( if_pc_next     ),
        // to id
        .if_instr_o        ( if_instr       ),

        // to regfile
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
        .id_opcode_info_o ( id_opcode_info ),
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

    // REGFILE
    regfile regfile_u(
        .clk                    ( clk                    ),
        .reset                  ( reset                  ),
        
        // wb x regfile
        // from wb
        .rd_wen_i               ( wb_rd_wen              ),
        .rd_idx_i               ( wb_rd_idx              ),
        .rd_wdata_i             ( wb_rd_wdata            ),
        
        // id x regfile
        // from id
        .rs1_idx_i              ( id_rs1_idx             ),
        .rs2_idx_i              ( id_rs2_idx             ),
        // to id
        .rf_rs1_rdata_o         ( rf_rs1_rdata           ),
        .rf_rs2_rdata_o         ( rf_rs2_rdata           ),
        
        // if x regfile
        // form if
        .jalr_rs1_idx_i         ( if_jalr_rs1_idx        ),
        // to if
        .rf_jalr_rs1_rdata_o    ( rf_jalr_rs1_rdata      ),
        
        .reg_data_o             ( reg_data_o             )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// EXECUTION
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    ex ex_u(
        // OP INFO
        .opcode_info_i      ( id_opcode_info   ),
        .alu_info_i         ( id_alu_info      ),
        .branch_info_i      ( id_branch_info   ),
        .ld_st_info_i       ( id_ld_st_info    ),
        .csr_info_i         ( id_csr_info      ),
        // OP NUMBER
        .pc_i               ( IF_pc            ),
        .rs1_rdata_i        ( id_rs1_rdata     ),
        .rs2_rdata_i        ( id_rs2_rdata     ),
        .imm_i              ( id_imm           ),
        
        .ex_alu_res_o       ( ex_alu_res       ),
        .ex_mem_addr_o      ( ex_mem_addr      ),
        .ex_cgu_csr_wdata_o ( ex_cgu_csr_wdata ),
        .ex_branch_jump_o   ( ex_branch_jump   )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// MEMORY
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    mem mem_u(
        .ld_st_info_i  ( id_ld_st_info   ),
        .mem_addr_i    ( ex_mem_addr     ),
        .mem_wdata_i   ( id_rs2_rdata    ),
        .mem_rdata_o   ( mem_rdata       ),
        // mem x ram
        .ram_addr_o    ( ram_addr        ),
        .ram_wen_o     ( ram_wen         ),
        .ram_byte_en_o ( ram_byte_en     ),
        .ram_wdata_o   ( ram_wdata       ),
        .ram_ren_o     ( ram_ren         ),
        .ram_rdata_i   ( ram_rdata       )
    );

    ram ram_u(
        .clk        ( clk         ),
        .addr_i     ( ram_addr    ),
        .wen_i      ( ram_wen     ),
        .byte_en_i  ( ram_byte_en ),
        .wdata_i    ( ram_wdata   ),
        .ren_i      ( ram_ren     ),
        .rdata_o    ( ram_rdata   ),
        
        .ram_data_o ( ram_data_o  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// WRITE BACK
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wb wb_u(
        .rd_wen_i       ( id_rd_wen       ),
        .rd_idx_i       ( id_rd_idx       ),
        .opcode_info_i  ( id_opcode_info  ),

        .alu_res_i      ( ex_alu_res      ),
        .mem_rdata_i    ( mem_rdata       ),
        .csr_rdata_i    ( id_csr_rdata    ),
        
        .wb_rd_wen_o    ( wb_rd_wen       ),
        .wb_rd_idx_o    ( wb_rd_idx       ),
        .wb_rd_wdata_o  ( wb_rd_wdata     )
    );

    wire jal_i    = id_opcode_info[`OP_JAL];
    wire jalr_i   = id_opcode_info[`OP_JALR];
    wire branch_i = id_opcode_info[`OP_BRANCH];

    pc_next_gen pc_next_gen_u(
        .pc_i(IF_pc),
        .jal_i(jal_i),
        .jalr_i(jalr_i),
        .branch_i(branch_i),
        .branch_jump_i(ex_branch_jump),
        .imm_i(id_imm),
        .jalr_rs1_rdata_i(id_rs1_rdata),
        .pc_next_o(pc_next)
    );
    
endmodule