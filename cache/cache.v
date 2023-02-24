module cache(
    input clk,
    input rst,
    // cache x cpu
    input          valid_i,
    input          op_i,
    input [7:0]    index_i,
    input [19:0]   tag_i,
    input [3:0]    offset_i,
    input [3:0]    wstrb_i,
    input [31:0]   wdata_i,
    output         addr_ok_o,
    output         data_ok_o,
    output [31:0]  rdata_o,
    // cache x axi
    // read req
    output         rd_req_o,
    output [2:0]   rd_type_o,
    output [31:0]  rd_addr,
    input          rd_rdy_i,
    // write req
    output         wr_req_o,
    output [2:0]   wr_type_o,
    output [31:0]  wr_addr_o,
    output [3:0]   wr_wstrb_o,
    output [127:0] wr_wdata_o,
    input          wr_rdy_i,
    // response
    input          ret_valid_i,
    input [1:0]    ret_last_i,
    input [31:0]   ret_data_i

);

    // Request Buffer
    reg        op_r;
    reg [7:0]  index_r;
    reg [19:0] tag_r;
    reg [3:0]  offset_r;
    reg [3:0]  wstrb_r;
    reg [31:0] wdata_r;

    always @(posedge clk) begin
        op_r     <= op_i;
        index_r  <= index_i;
        tag_r    <= tag_i;
        offset_r <= offset_r;
        wstrb_r  <= wstrb_i;
        wdata_r  <= wdata_i;
    end

    // Tag Compare

    // Data Select

    // Miss Buffer

    // LFSR

    // Write Buffer

    // 主状态机
    parameter IDEL = 0, LOOKUP = 1, MISS = 2, REPLACE = 3, REFILE = 4;
    
    reg [2:0] state;
    reg [2:0] nstate;

    always @(*) begin
        case(state)
            IDEL: begin
                nstate = valid_i ? LOOKUP : IDEL;
            end
            LOOKUP: begin
                
            end
            MISS: begin
            
            end
            REPLACE: begin
            end
            REFILE: begin
            
            end
        endcase
    end


    // Write Buffer 状态机
    parameter WB_IDEL = 0, WB_WRITE = 1;
    reg wb_state;
    reg wb_nstate;

endmodule