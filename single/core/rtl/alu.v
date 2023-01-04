`include "defines.v"

// ALU的结果直接写回到RD中[除了BRANCH]
// 使用ALU单元的指令有
// 1. ALU
// alu_res = rs1 op rs2 
// 2. ALU_IMM
// alu_res = rs1 op imm
// 3. BRANCH
// alu_res = rs1 - rs2
// 4. JAL JALR
// alu_res = pc + 4
// 5. LUI
// alu_res = imm 
// 6.AUIPC
// alu_res = pc + imm

module alu(
    // opcode info
    input op_alu_imm_i,
    input op_alu_imm_w_i,
    input op_alu_i,
    input op_alu_w_i,
    input op_branch_i,
    input op_jal_i,
    input op_jalr_i,
    input op_lui_i,
    input op_auipc_i,
    // alu info
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    // branch info
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,

    // op number
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,
    // 计算结果
    output [`XLEN-1:0] alu_res_o
);

    // ALU INFO
    wire alu_add   = alu_info_i[`ALU_ADD];
    wire alu_sub   = alu_info_i[`ALU_SUB];
    wire alu_sll   = alu_info_i[`ALU_SLL];
    wire alu_slt   = alu_info_i[`ALU_SLT];
    wire alu_slt_u = alu_info_i[`ALU_SLT_U];
    wire alu_xor   = alu_info_i[`ALU_XOR];
    wire alu_srl   = alu_info_i[`ALU_SRL];
    wire alu_sra   = alu_info_i[`ALU_SRA];
    wire alu_or    = alu_info_i[`ALU_OR];
    wire alu_and   = alu_info_i[`ALU_AND];

    // BRANCH INFO
    wire branch_beq  = branch_info_i[`BRANCH_BEQ];
    wire branch_bne  = branch_info_i[`BRANCH_BNE];
    wire branch_blt  = branch_info_i[`BRANCH_BLT];
    wire branch_bge  = branch_info_i[`BRANCH_BGE];
    wire branch_bltu = branch_info_i[`BRANCH_BLTU];
    wire branch_bgeu = branch_info_i[`BRANCH_BGEU];

    wire res_sel_add  = alu_add | op_jal_i | op_jalr_i | op_lui_i | op_auipc_i;
    wire res_sel_sub  = alu_sub;
    wire res_sel_sll  = alu_sll;
    wire res_sel_slt  = alu_slt;
    wire res_sel_sltu = alu_slt_u;
    wire res_sel_xor  = alu_xor;
    wire res_sel_srl  = alu_srl;
    wire res_sel_sra  = alu_sra;
    wire res_sel_or   = alu_or;
    wire res_sel_and  = alu_and;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 操作数选择
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire [`XLEN-1:0] alu_op1;
    wire [`XLEN-1:0] alu_op2;

    assign alu_op1 = (op_jal_i | op_jalr_i | op_auipc_i) ? pc_i
                   :  op_lui_i ? 0
                   :  rs1_rdata_i;

    assign alu_op2 = (op_lui_i | op_auipc_i | op_alu_imm_i | op_alu_imm_w_i) ? imm_i
                   : (op_jal_i | op_jalr_i) ? 4
                   : rs2_rdata_i;
    



endmodule