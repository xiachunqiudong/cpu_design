module ex(
    // from id
    // OP INFO
    input [`OP_INFO_WIDTH-1:0]     opcode_info_i,
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    input [`LD_ST_INFO_WIDTH-1:0]  ld_st_info_i,
    input [`CSR_INFO_WIDTH-1:0]    csr_info_i,
    // OP NUMBER
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,

    // to mem/wb
    // ALU 写回数据
    output [`XLEN-1:0] ex_alu_rd_wdata_o,
    // MEM 读写地址
    output [`XLEN-1:0] ex_agu_mem_addr_o,
    // 写回CSR寄存器
    output [`XLEN-1:0] ex_cgu_csr_wdata_o,
    // BRANCH JUMP
    output             ex_branch_jump_o
);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    alu alu_u(
        .opcode_info_i      ( opcode_info_i     ),
        .alu_info_i         ( alu_info_i        ),
        .branch_info_i      ( branch_info_i     ),
        
        .pc_i               ( pc_i              ),
        .rs1_rdata_i        ( rs1_rdata_i       ),
        .rs2_rdata_i        ( rs2_rdata_i       ),
        .imm_i              ( imm_i             ),

        .alu_res_o          ( ex_alu_rd_wdata_o ),
        .alu_branch_jump_o  ( ex_branch_jump_o  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// AGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    agu agu_u(
        .rs1_rdata_i     ( rs1_rdata_i        ),
        .imm_i           ( imm_i              ),
        .agu_mem_addr_o  ( ex_agu_mem_addr_o  )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    cgu u_cgu(
        .csr_info_i       ( csr_info_i          ),
        .rs1_rdata_i      ( rs1_rdata_i         ),
        .imm_i            ( imm_i               ),
        .cgu_csr_wdata_o  ( ex_cgu_csr_wdata_o  )
    );

endmodule