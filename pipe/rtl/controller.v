`include "defines.v"

module controller(
    // flush by ex
    input                  ex_jump_i,
    input [`PC_WIDTH-1:0]  ex_jump_pc_i,
    // flush by trap
    input                  wb_trap_i,
    input [`PC_WIDTH-1:0]  wb_trap_handle_pc_i,
    output                 if_flush_o,
    output                 id_flush_o,
    output                 ex_flush_o,
    output                 mem_flush_o,
    output [`PC_WIDTH-1:0] flush_pc_o
);


    assign if_flush_o  = ex_jump_i | wb_trap_i;
    assign id_flush_o  = ex_jump_i | wb_trap_i;
    assign ex_flush_o  = wb_trap_i;
    assign mem_flush_o = wb_trap_i;

    assign flush_pc_o = wb_trap_i ? wb_trap_handle_pc_i : ex_jump_pc_i;

endmodule