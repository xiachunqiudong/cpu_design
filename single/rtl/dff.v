module dff
#(
    parameter DATA_WIDTH = 32,
    parameter RESET_VAL  = 0
)
(
    input                   clk,
    input                   rst,
    input                   ena,
    input  [DATA_WIDTH-1:0] d,
    output [DATA_WIDTH-1:0] q
);

    reg [DATA_WIDTH-1:0] q_r;

    assign q = q_r;

    always @(posedge clk) begin
        if(rst) begin
            q_r <= RESET_VAL;
        end else if(ena) begin
            q_r <= d;
        end
    end


endmodule