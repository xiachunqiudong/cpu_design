`include "defines.v"

module id_reg(
    input clk,
    input rst,
    input  [`INSTR_WIDTH-1:0] instr_i,
    output [`INSTR_WIDTH-1:0] ID_instr_o
);

    wire ena = 1'b1;

    dff #(.DATA_WIDTH(`INSTR_WIDTH)) instr_dff(.clk(clk), .rst(rst), .ena(ena), .d(instr_i), .q(ID_instr_o));


endmodule