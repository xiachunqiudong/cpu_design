module ex(
    // from id
    // OP INFO
    input  [`OP_INFO_WIDTH-1:0]     optype_info_i,
    input  [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input  [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]  ld_st_info_i,
    input  [`CSR_INFO_WIDTH-1:0]    csr_info_i,
    input  [4:0]                    EX_rs1_idx_i,
    input  [4:0]                    EX_rs2_idx_i,
    // OP NUMBER
    input  [`PC_WIDTH-1:0]          pc_i,
    input  [`XLEN-1:0]              rs1_rdata_i,
    input  [`XLEN-1:0]              rs2_rdata_i,
    input  [`XLEN-1:0]              imm_i,
    // to MEM
    output [`XLEN-1:0]              ex_alu_res_o,
    output [`XLEN-1:0]              ex_csr_wdata_o,
    // JUMP
    output                          ex_jump_o,
    output [`PC_WIDTH-1:0]          ex_jump_pc_o
);


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire branch_jump;

    alu alu_u(
        .optype_info_i      ( optype_info_i     ),
        .alu_info_i         ( alu_info_i        ),
        .branch_info_i      ( branch_info_i     ),
        
        .pc_i               ( pc_i              ),
        .rs1_rdata_i        ( rs1_rdata_i       ),
        .rs2_rdata_i        ( rs2_rdata_i       ),
        .imm_i              ( imm_i             ),

        .alu_res_o          ( ex_alu_res_o      ),      
        .alu_branch_jump_o  ( branch_jump       )
    );


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// branch jal jalr 指令跳转地址计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire op_jal    = optype_info_i[`OP_JAL];
    wire op_jalr   = optype_info_i[`OP_JALR];
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = imm_i;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;

    assign ex_jump_o = branch_jump | op_jal | op_jalr;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    assign ex_csr_wdata_o = rs1_rdata_i;

endmodule