
module sram
#(
    parameter addr_width = 32,
    parameter data_width = 64
)
(
    input clk,
    input rst_n,

    // Write address channel
    input                    awvalid,
    output                   awready,
    input [addr_width-1:0]   awaddr,

    // Write data channel
    input                    wvalid,
    output                   wready,
    input [data_width-1:0]   wdata,
    input [data_width/8-1:0] wmask,

    // Write response channel
    output                   bvalid,
    input                    bready,
    output [1:0]             bresp,

    // Read address channel
    input [addr_width-1:0]   araddr_i,
    input                    arvalid_i,
    output                   arready_o,

    // Read data channel
    output                   rvalid,
    input                    rready,
    output [data_width-1:0]  rdata,
    output [1:0]             rresp
);


    // Read state machine
    reg [1:0] r_state;
    reg [1:0] r_nstate;

    parameter r_idel = 2'b00, r_s1 = 2'b01, r_s2 = 2'b10;
    reg [addr_width-1:0] r_addr_buf;

    // 状态转移
    always@(posedge clk or negedge rst_n) begin
        if(~rst_n) begin
            r_state <= r_idel;
        end else begin
            r_state <= r_nstate;
        end   
    end

    always @(*) begin
        case(r_state)
            r_idel: begin
                // 读地址握手
                if(arvalid & arready) begin
                    r_nstate = r_s1;
                end else begin
                    r_nstate = r_idel;
                end
            end
            r_s1: begin
                // 读数据握手
                if(rvalid & rready) begin
                    r_nstate = r_s2;
                end else begin
                    r_nstate = r_s1;
                end
            end
            r_s2: begin
                if(arvalid & arready) begin
                    r_nstate = r_s1;
                end else begin
                    r_nstate = r_idel;
                end
            end
            default: begin
                r_nstate = r_idel;
            end
        endcase
    end

endmodule