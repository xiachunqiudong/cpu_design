`include "defines.v"

module IF(
    input                  clk,
    input                  rst,
    input                  if_flush_i,
    output [`PC_WIDTH-1:0] ifu_pc_next_i,
    output [`PC_WIDTH-1:0] IF_pc_o,
    // handshack
    input                  ID_ready_i,
    output                 IF_valid_o
);

    wire IF_data_valid;
    wire run;
    assign IF_data_valid = !if_flush_i;
    assign run = 1;
    assign IF_valid_o = IF_data_valid && run;

    // data
    reg [`PC_WIDTH-1:0] pc_r;
    
    assign IF_pc_o = pc_r;
    

    always @(posedge clk) begin
        if(rst) begin
            pc_r <= 64'b0;
        end else if(ID_ready_i) begin
            pc_r <= ifu_pc_next_i;
        end
    end
    
endmodule