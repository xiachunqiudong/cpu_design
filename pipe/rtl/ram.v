`include "defines.v"

module ram
#(parameter SIZE = 8192) 
(
    input              clk,
    input  [`XLEN-1:0] addr_i,
    input              wen_i,
    input  [7:0]       byte_en_i,
    input  [`XLEN-1:0] wdata_i,
    input              ren_i,
    output [`XLEN-1:0] rdata_o,
    
    output [7:0] ram_data_o [0:SIZE-1]
);

    assign ram_data_o = ram_data;

    reg [7:0] ram_data [0:SIZE-1];

    wire [12:0] addr = addr_i[12:0];

    // read
    wire [`XLEN-1:0] rdata = {ram_data[addr+7], ram_data[addr+6], ram_data[addr+5], ram_data[addr+4],
                              ram_data[addr+3], ram_data[addr+2], ram_data[addr+1], ram_data[addr+0]};
    assign rdata_o = ren_i ? rdata : 0;

    wire [`XLEN-1:0] mask = {{8{byte_en_i[7]}}, {8{byte_en_i[6]}}, {8{byte_en_i[5]}}, {8{byte_en_i[4]}}, 
                             {8{byte_en_i[3]}}, {8{byte_en_i[2]}}, {8{byte_en_i[1]}}, {8{byte_en_i[0]}}};   

    wire [`XLEN-1:0] wdata;

    assign wdata = ((wdata_i & mask) | (rdata & (~mask)));

    always @(posedge clk) begin
        if(wen_i) begin
            {ram_data[addr+7], ram_data[addr+6], ram_data[addr+5], ram_data[addr+4],
             ram_data[addr+3], ram_data[addr+2], ram_data[addr+1], ram_data[addr+0]} <= wdata;
        end    
    end

    initial begin
        $readmemh("./code.txt", ram_data);
    end
    
endmodule