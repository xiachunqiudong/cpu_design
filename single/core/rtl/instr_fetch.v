`include "defines.v"

module instr_fetch(
    input  [`PC_WIDTH-1:0]    pc_i,
    output [`PC_WIDTH-1:0]    if_pc_next_o,
    
    output [`INSTR_WIDTH-1:0] if_instr_o,

    // 取指异常
    output if_pc_misalign_o, // 取指地址不对齐
    output if_bus_err_o
);
    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 从指令内存中取指令
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_bus if_bus_u(
        .pc_i                 ( pc_i             ),
        .if_bus_instr_o       ( if_instr_o       ),
        .if_bus_pc_misalign_o ( if_pc_misalign_o ),
        .if_bus_bus_err_o     ( if_bus_err_o     )
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

    // jalr rs1如何处理?

    wire jal;
    wire jalr;
    wire bxx;
    
    wire bj = jal | jalr | bxx;

    wire prdt_taken;

    wire [`PC_WIDTH-1:0] bj_pc_op1;
    wire [`PC_WIDTH-1:0] bj_pc_op2;


    //assign if_pc_next_o = pc_next_op1 + pc_next_op2;


endmodule