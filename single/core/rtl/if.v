`include "defines.v"

module if(

    input  [`PC_WIDTH-1:0]    pc_i,
    output [`INSTR_WIDTH-1:0] instr_o,
    output [`PC_WIDTH-1:0]    pc_next_o,
    
    // 取指异常
    output if_pc_misalign_o, // 取指地址不对齐
    output if_bus_err_o
);

    // 根据PC取指

    // 生成下一周期的pc
    
    // 普通指令
    
    wire jal;
    wire jalr;
    wire bxx;
    
    wire bjp = jal | jalr | bxx;

    wire prdt_taken;

    wire [`PC_WIDTH-1:0] bjp_pc_op1;
    wire [`PC_WIDTH-1:0] bjp_pc_op2;

    


    wire [`PC_WIDTH-1:0] pc_next_op1 = (bjp & prdt_taken);
    wire [`PC_WIDTH-1:0] pc_next_op2;

    assign pc_next_o = pc_next_op1 + pc_next_op2;


endmodule