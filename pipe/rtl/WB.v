module WB(
    input  clk,
    input  rst,
    input  [63:0] EX_pc_i,
    output [63:0] WB_pc_o,
    // handshack
    input  EX_valid_i,
    output WB_ready_o
);

    reg WB_data_valid;
    
    reg [63:0] WB_pc_r;
    assign WB_pc_o = WB_pc_r;

    wire run;
    
    assign run = 1;
    assign WB_ready_o = run;
    
    always @(posedge clk) begin
        if(rst) begin
            WB_data_valid <= 1'b0;
        end else begin
            WB_data_valid <= EX_valid_i;
        end
    end
    
    always @(posedge clk) begin
        if(WB_ready_o && EX_valid_i) begin
            WB_pc_r <=  EX_pc_i;
        end
    end

endmodule