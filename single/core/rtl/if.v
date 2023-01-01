`include "defines.v"

module if(

    input  [`PC_WIDTH-1:0]    pc_i,
    output [`INSTR_WIDTH-1:0] instr_o,
    output [`PC_WIDTH-1:0]    pc_next_o,
    
    // 取指异常
    output if_pc_misalign_o, // 取指地址不对齐
    output if_bus_err_o
);
    
    // 1. 普通指令
    // pc_next = pc + 4
    // 2. jal
    // pc_next = pc + imm
    // 3. jalr
    // pc_next = rs1 + imm
    // 4. bxx
    // pc_next = cnd ? pc + imm : pc + 4

    // jalr rs1如何处理?

    wire jal;
    wire jalr;
    wire bxx;
    
    wire bj = jal | jalr | bxx;

    wire prdt_taken;

    wire [`PC_WIDTH-1:0] bjp_pc_op1;
    wire [`PC_WIDTH-1:0] bjp_pc_op2;

    
    assign pc_next_o = pc_next_op1 + pc_next_op2;


endmodule