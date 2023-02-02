`include "defines.v"

module ifu(
    input  [`PC_WIDTH-1:0]    IF_pc_i,
    input                     if_flush_i,
    input  [`PC_WIDTH-1:0]    flush_pc_i,
    output [`PC_WIDTH-1:0]    ifu_pc_next_o,
    // to ID
    output [`INSTR_WIDTH-1:0] ifu_instr_o,
    output                    ifu_prdt_taken_o,
    // excp
    output                    ifu_pc_misalign_o, // 取指地址不对齐
    output                    ifu_bus_err_o      // 取指访存错误
);
    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 指令获取
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_bus u_if_bus(
        .pc_i                 ( IF_pc_i           ),
        .if_bus_instr_o       ( ifu_instr_o       ),
        // excp
        .if_bus_pc_misalign_o ( ifu_pc_misalign_o ),
        .if_bus_bus_err_o     ( ifu_bus_err_o     )
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 预译码
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    wire             jal;
    wire             jalr;
    wire             branch;
    wire [`XLEN-1:0] imm;

    if_mini_dec u_if_mini_dec_u(
        .instr_i                 ( ifu_instr_o  ),
        .mini_dec_jal_o          ( jal          ),
        .mini_dec_jalr_o         ( jalr         ),
        .mini_dec_branch_o       ( branch       ),
        .mini_dec_rs1_idx_o      (              ),
        .mini_dec_imm_o          ( imm          )   
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// pc_next生成
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // 1. 普通指令
    // pc_next = pc + 4
    // 2. jal
    // pc_next = pc + imm
    // 3. jalr
    // pc_next = rs1 + imm
    // 4. bxx
    // pc_next = cnd ? pc + imm : pc + 4

    // 静态分支预测, 向前跳预测为跳, 向后跳预测不跳
    assign ifu_prdt_taken_o = (branch & imm[63]);
    // 是否跳转
    wire jump;
    assign jump = ifu_prdt_taken_o | jal | jalr;
    
    // jal & branch pc_next = pc + imm   -> PC相对跳转
    // jalr         pc_next = rs1 + imm  -> 绝对跳转
    wire [`PC_WIDTH-1:0] jump_pc_op1;
    wire [`PC_WIDTH-1:0] jump_pc_op2;
    assign jump_pc_op1 = jalr ? 0 : IF_pc_i;
    assign jump_pc_op2 = imm;

    // 跳转:   pc_next = bj_pc_op1 + bj_pc_op2
    // 不跳转: pc_next = pc + 4
    wire [`PC_WIDTH-1:0] pc_add_op1 = jump ? jump_pc_op1 : IF_pc_i;
    wire [`PC_WIDTH-1:0] pc_add_op2 = jump ? jump_pc_op2 : 4;

    assign ifu_pc_next_o = pc_add_op1 + pc_add_op2;

endmodule