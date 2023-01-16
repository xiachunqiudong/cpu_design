`include "defines.v"

module pc_reg(
    input  clk,
    input  rst,
    input  [`PC_WIDTH-1:0] pc_next_i,
    output [`PC_WIDTH-1:0] IF_pc_o
);

    wire ena = 1'b1;
    
    dff #(.DATA_WIDTH(`PC_WIDTH), .RESET_VAL(0)) pc_dff (
        .clk(clk),
        .rst(rst),
        .ena(ena),
        .d(pc_next_i),
        .q(IF_pc_o)
    );

endmodule