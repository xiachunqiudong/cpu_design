`include "defines.v"

module controller(
    input                  ex_jump_i,
    input [`PC_WIDTH-1:0]  ex_jump_pc_i,
    output                 if_flush_o,
    output                 id_flush_o,
    output                 ex_flush_o,
    output                 mem_flush_o,
    output [`PC_WIDTH-1:0] flush_pc_o
);


    assign if_flush_o = ex_jump_i;
    assign id_flush_o = ex_jump_i;

    assign flush_pc_o = ex_jump_pc_i;

endmodule