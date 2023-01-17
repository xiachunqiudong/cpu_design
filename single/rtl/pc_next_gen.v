module pc_next_gen(
    input [`PC_WIDTH-1:0] pc_i,
    // 分支跳转
    input jal_i,
    input jalr_i,
    input branch_i,
    input branch_jump_i,
    input [`PC_WIDTH-1:0] imm_i,
    input [`PC_WIDTH-1:0] jalr_rs1_rdata_i,
    output [`PC_WIDTH-1:0] pc_next_o
);



    // 分支跳转指令?
    wire bj = jal_i | jalr_i | branch_i;
    // 跳转?
    wire jump = bj & (jal_i | jalr_i | branch_jump_i);
    
    // jal & branch pc_next = pc + imm   -> PC相对跳转
    // jalr         pc_next = rs1 + imm  -> 绝对跳转
    wire [`PC_WIDTH-1:0] jump_pc_op1 = (jal_i | branch_i) ? pc_i :
                                        jalr_i            ? jalr_rs1_rdata_i
                                                          : 0;

    wire [`PC_WIDTH-1:0] jump_pc_op2 = imm_i;


    // 跳转:   pc_next = bj_pc_op1 + bj_pc_op2
    // 不跳转: pc_next = pc + 4
    wire [`PC_WIDTH-1:0] pc_add_op1 = jump ? jump_pc_op1 : pc_i;
    wire [`PC_WIDTH-1:0] pc_add_op2 = jump ? jump_pc_op2 : 4;

    assign pc_next_o = pc_add_op1 + pc_add_op2;

endmodule