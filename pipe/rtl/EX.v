module EX(
    input  clk,
    input  rst,
    input  [63:0] ID_pc_i,
    output [63:0] EX_pc_o,

    // handshack
    input  ID_valid_i,
    input  WB_ready_i,
    output EX_valid_o,
    output EX_ready_o
);

    assign EX_pc_o = pc_r;

    reg [63:0] pc_r;
    reg data_valid;

    wire run;
    assign run = 1;
    
    assign EX_valid_o = data_valid && run;
    // assign EX_ready_o = (!data_valid) || (run && WB_ready_i);
    assign EX_ready_o = (run && WB_ready_i);

    // data_valid
    always @(posedge clk) begin
        if(rst) begin
            data_valid <= 1'b0;
        end else if(EX_ready_o) begin
            data_valid <= ID_valid_i;
        end 
    end
    // pc_r
    always @(posedge clk) begin
        if(EX_ready_o && ID_valid_i) begin
            pc_r <= ID_pc_i;
        end
    end


endmodule