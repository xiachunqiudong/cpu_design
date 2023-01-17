`include "defines.v"

module ram(
    input              clk,
    input  [`XLEN-1:0] addr_i,
    input              wen_i,
    input  [`XLEN-1:0] wdata_i,
    input  [1:0]       wmask_i,
    output [`XLEN-1:0] rdata_o,
    
    output [7:0] ram_data_o [0:1023]
);


    reg [7:0] ram_data [0:1023];

    // read
    assign rdata_o = {ram_data[addr_i+7], ram_data[addr_i+6], ram_data[addr_i+5], ram_data[addr_i+4],
                      ram_data[addr_i+3], ram_data[addr_i+2], ram_data[addr_i+1], ram_data[addr_i+0]};

    // write
    always @(posedge clk) begin
        if(wen_i) begin
            case(wmask_i)
                `MASK_BYTE: begin
                    ram_data[addr_i] <= wdata_i[7:0];
                end
                `MASK_HALF: begin
                    {ram_data[addr_i+1], ram_data[addr_i]} <= wdata_i[15:0];
                end
                `MASK_WORD: begin
                    {ram_data[addr_i+3], ram_data[addr_i+2], ram_data[addr_i+1], ram_data[addr_i]} <= wdata_i[31:0];
                end 
                `MASK_DOUBLE: begin
                    {ram_data[addr_i+7], ram_data[addr_i+6], ram_data[addr_i+5], ram_data[addr_i+4],
                    cram_data[addr_i+3], ram_data[addr_i+2], ram_data[addr_i+1], ram_data[addr_i+0]} <= wdata_i;
                end  
            endcase
        end
    end


endmodule