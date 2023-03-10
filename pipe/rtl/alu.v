`include "defines.v"

// ALU的结果直接写回到RD中[除了BRANCH]
// 使用ALU单元的指令有
// 1. ALU
// 2. ALU_IMM
// 3. BRANCH
// 4. LD_ST
// 5. JAL JALR
// 6. LUI
// 7. AUIPC

module alu(
    input [`OP_INFO_WIDTH-1:0]     optype_info_i,
    input [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    // op number
    input [`PC_WIDTH-1:0] pc_i,
    input [`XLEN-1:0]     rs1_rdata_i,
    input [`XLEN-1:0]     rs2_rdata_i,
    input [`XLEN-1:0]     imm_i,
    output [`XLEN-1:0]    alu_res_o,
    output                alu_branch_jump_o
);

    wire op_alu_imm   = optype_info_i[`OP_ALU_IMM];
    wire op_alu_imm_w = optype_info_i[`OP_ALU_IMM_W];
    wire op_alu       = optype_info_i[`OP_ALU];
    wire op_alu_w     = optype_info_i[`OP_ALU_W];
    wire op_branch    = optype_info_i[`OP_BRANCH];
    wire op_jal       = optype_info_i[`OP_JAL];
    wire op_jalr      = optype_info_i[`OP_JALR];
    wire op_load      = optype_info_i[`OP_LOAD];
    wire op_store     = optype_info_i[`OP_STORE];
    wire op_lui       = optype_info_i[`OP_LUI];
    wire op_auipc     = optype_info_i[`OP_AUIPC];

    wire alu_add   = alu_info_i[`ALU_ADD];
    wire alu_sub   = alu_info_i[`ALU_SUB];
    wire alu_sll   = alu_info_i[`ALU_SLL];
    wire alu_slt   = alu_info_i[`ALU_SLT];
    wire alu_sltu  = alu_info_i[`ALU_SLTU];
    wire alu_xor   = alu_info_i[`ALU_XOR];
    wire alu_srl   = alu_info_i[`ALU_SRL];
    wire alu_sra   = alu_info_i[`ALU_SRA];
    wire alu_or    = alu_info_i[`ALU_OR];
    wire alu_and   = alu_info_i[`ALU_AND];

    wire branch_beq  = branch_info_i[`BRANCH_BEQ];
    wire branch_bne  = branch_info_i[`BRANCH_BNE];
    wire branch_blt  = branch_info_i[`BRANCH_BLT];
    wire branch_bge  = branch_info_i[`BRANCH_BGE];
    wire branch_bltu = branch_info_i[`BRANCH_BLTU];
    wire branch_bgeu = branch_info_i[`BRANCH_BGEU];

    // ALU 结果选择
    wire res_sel_add     = alu_add | op_load | op_store | op_jal | op_jalr | op_lui | op_auipc;
    wire res_sel_sub     = alu_sub | op_branch;
    wire res_sel_add_sub = res_sel_add | res_sel_sub;
    wire res_sel_sll     = alu_sll;
    wire res_sel_slt     = alu_slt;
    wire res_sel_sltu    = alu_sltu;
    wire res_sel_xor     = alu_xor;
    wire res_sel_srl     = alu_srl;
    wire res_sel_sra     = alu_sra;
    wire res_sel_or      = alu_or;
    wire res_sel_and     = alu_and;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 操作数选择
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // 1. ALU
    // alu_res = rs1 op rs2 
    // 2. ALU_IMM
    // alu_res = rs1 op imm
    // 3. BRANCH
    // alu_res = rs1 - rs2
    // 4. JAL JALR
    // alu_res = pc + 4
    // 5. LUI
    // alu_res = 0 + imm 
    // 6. AUIPC
    // alu_res = pc + imm

    wire [`XLEN-1:0] alu_op1;
    wire [`XLEN-1:0] alu_op2;

    assign alu_op1 = (op_jal | op_jalr | op_auipc) ? pc_i
                   :  op_lui ? 0
                   :  rs1_rdata_i;

    assign alu_op2 = (op_lui | op_auipc | op_alu_imm | op_alu_imm_w | op_load | op_store) ? imm_i
                   : (op_jal | op_jalr) ? 4
                   : rs2_rdata_i;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [`XLEN-1:0] alu_add_sub_res;
    wire [`XLEN-1:0] alu_sll_res;
    wire [`XLEN-1:0] alu_slt_res;
    wire [`XLEN-1:0] alu_sltu_res;
    wire [`XLEN-1:0] alu_xor_res;
    wire [`XLEN-1:0] alu_srl_res;
    wire [`XLEN-1:0] alu_sra_res;
    wire [`XLEN-1:0] alu_or_res;
    wire [`XLEN-1:0] alu_and_res;

    // 加减
    wire [`XLEN-1:0] adder_op1 = alu_op1;
    wire [`XLEN-1:0] adder_op2 = {`XLEN{res_sel_sub}} ^ alu_op2;
    wire adder_cin = res_sel_sub;
    wire adder_cout;
    assign {adder_cout, alu_add_sub_res} = adder_op1 + adder_op2 + {63'b0, adder_cin};

    // slt
    assign alu_slt_res  = {63'b0, lt};
    // sltu
    assign alu_sltu_res = {63'b0, ltu};

    // 移位操作
    wire [5:0] shift_op2 = (op_alu_imm_w | op_alu_w) ? {1'b0, alu_op2[4:0]} : alu_op2[5:0];
    // sll
    assign alu_sll_res   = alu_op1 << shift_op2;
    // srl
    assign alu_srl_res   = alu_op1 >> shift_op2;
    // sra
    assign alu_sra_res   = $signed(alu_op1) >>> shift_op2;
    
    // 逻辑操作
    // and
    assign alu_and_res   = alu_op1 & alu_op2;
    // or
    assign alu_or_res    = alu_op1 | alu_op2;
    // xor
    assign alu_xor_res   = alu_op1 ^ alu_op2;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU结果选择
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire [`XLEN-1:0] alu_res = ({`XLEN{res_sel_add_sub}} & alu_add_sub_res) 
                             | ({`XLEN{res_sel_sll}}     & alu_sll_res)
                             | ({`XLEN{res_sel_slt}}     & alu_slt_res)
                             | ({`XLEN{res_sel_sltu}}    & alu_sltu_res)
                             | ({`XLEN{res_sel_xor}}     & alu_xor_res)
                             | ({`XLEN{res_sel_srl}}     & alu_srl_res)
                             | ({`XLEN{res_sel_sra}}     & alu_sra_res)
                             | ({`XLEN{res_sel_or}}      & alu_or_res)
                             | ({`XLEN{res_sel_and}}     & alu_and_res);

    // 对于ALU_W ALU_IMM_W
    // 1. 将结果截断至32位 
    // 2. 将截断结果符号扩展后放入rd
    wire [`XLEN-1:0] alu_res_w = { {32{alu_res[31]}}, alu_res[31:0] };
    assign alu_res_o = (op_alu_w | op_alu_imm_w) ? alu_res_w : alu_res;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 分支结果计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire ne  = (|alu_xor_res);
    wire eq  = ~ne;
    // 有符号比较
    // 1. 符号不同 
    // op1为负数 op2为正数 lt = 1
    // 2. 符号相同
    // res为负数 lt = 1
    wire lt  = ((alu_op1[63] & ~alu_op2[63]) | (~(alu_op1[63] ^ alu_op2[63]) & alu_add_sub_res[63]));
    wire ltu = ~adder_cout;
    
    wire ge  = ~lt;
    wire geu = ~ltu;

    assign alu_branch_jump_o = (branch_beq  & eq)
                             | (branch_bne  & ne)
                             | (branch_blt  & lt)
                             | (branch_bge  & ge)
                             | (branch_bltu & ltu)
                             | (branch_bgeu & geu);
    

endmodule