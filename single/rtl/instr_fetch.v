`include "defines.v"

module instr_fetch(
    input  [`PC_WIDTH-1:0]    pc_i,
    //output [`PC_WIDTH-1:0]    if_pc_next_o,
    
    output [`INSTR_WIDTH-1:0] if_instr_o,

    // to reffile
    output [4:0]              if_jalr_rs1_idx_o,
    // from regfile
    input  [`XLEN-1:0]        jalr_rs1_rdata_i,

    // 取指异常
    output                    if_pc_misalign_o, // 取指地址不对齐
    output                    if_bus_err_o      
);
    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 从指令内存中取指令
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    // if x bus
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

    wire             mini_dec_jal;
    wire             mini_dec_jalr;
    wire             mini_dec_branch;
    wire [`XLEN-1:0] mini_dec_imm;

    // 简单译码
    if_mini_dec if_mini_dec_u(
        .instr_i                 ( if_instr_o        ),
        .mini_dec_jal_o          ( mini_dec_jal      ),
        .mini_dec_jalr_o         ( mini_dec_jalr     ),
        .mini_dec_branch_o       ( mini_dec_branch   ),
        .mini_dec_jalr_rs1_idx_o ( if_jalr_rs1_idx_o ),
        .mini_dec_imm_o          ( mini_dec_imm      )
    );



    
    // jal & branch pc_next = pc + imm   -> PC相对跳转
    // jalr         pc_next = rs1 + imm  -> 绝对跳转
    wire [`PC_WIDTH-1:0] bj_pc_op1 = (mini_dec_jal | mini_dec_branch) ? pc_i :
                                      mini_dec_jalr                   ? jalr_rs1_rdata_i
                                                                      : 0;

    wire [`PC_WIDTH-1:0] bj_pc_op2 = mini_dec_imm;


endmodule