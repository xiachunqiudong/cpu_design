`include "defines.v"

module ram
#(parameter SIZE = 1024) 
(
    input              clk,
    input  [`XLEN-1:0] addr_i,
    input              wen_i,
    input  [`XLEN-1:0] wdata_i,
    input  [1:0]       wmask_i,
    output [`XLEN-1:0] rdata_o,
    
    output [7:0] ram_data_o [0:SIZE-1]
);

    assign ram_data_o = ram_data;

    reg [7:0] ram_data [0:SIZE-1];

    wire [9:0] addr = addr_i[9:0];

    // read
    assign rdata_o = {ram_data[addr+7], ram_data[addr+6], ram_data[addr+5], ram_data[addr+4],
                      ram_data[addr+3], ram_data[addr+2], ram_data[addr+1], ram_data[addr+0]};

    // write
    always @(posedge clk) begin
        if(wen_i) begin
            case(wmask_i)
                `MASK_BYTE: begin
                    ram_data[addr] <= wdata_i[7:0];
                end
                `MASK_HALF: begin
                    {ram_data[addr+1], ram_data[addr]} <= wdata_i[15:0];
                end
                `MASK_WORD: begin
                    {ram_data[addr+3], ram_data[addr+2], ram_data[addr+1], ram_data[addr]} <= wdata_i[31:0];
                end 
                `MASK_DOUBLE: begin
                    {ram_data[addr+7], ram_data[addr+6], ram_data[addr+5], ram_data[addr+4],
                     ram_data[addr+3], ram_data[addr+2], ram_data[addr+1], ram_data[addr+0]} <= wdata_i;
                end  
            endcase
        end
    end


endmodule