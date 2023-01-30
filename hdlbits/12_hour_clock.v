module clock(
    input clk,
    input reset,
    input ena,
    output pm,
    output [7:0] hh,
    output [7:0] mm,
    output [7:0] ss
);


    reg pm_r;
    assign pm = pm_r;
    
    always @(posedge clk) begin
        if(reset) begin
            pm_r <= 1'b0;
        end else if(ena & hh == 8'h11 & mm == 8'h59 & ss == 8'h59) begin
            pm_r <= ~pm_r;
        end
    end

    assign pm = pm_r;

    wire s_ena, m_ena, h_ena;
    wire s_rst, m_rst, h_rst;

    assign s_ena = ena;
    assign m_ena = ena & (ss == 8'h59);
    assign h_ena = ena & (ss == 8'h59) & (mm == 8'h59);
    
    assign s_rst = reset | (s_ena & ss == 8'h59);
    assign m_rst = reset | (m_ena & mm == 8'h59);
    assign h_rst = reset | (h_ena & hh == 8'h12);

    wire [7:0] h_rst_val;
    assign h_rst_val = reset ? 8'h12 : 8'h01;

    bcd bcd_s(clk, s_ena, s_rst, 8'h0,      ss);
    bcd bcd_m(clk, m_ena, m_rst, 8'h0,      mm);
    bcd bcd_h(clk, h_ena, h_rst, h_rst_val, hh);

endmodule


// 0 ~ 99
module bcd(
    input clk,
    input ena,
    input rst,
    input [7:0] rst_val,
    output reg [7:0] count
);

    always @(posedge clk) begin
        if(rst) begin
            count[3:0] <= rst_val[3:0];
        end else begin
            if(ena) begin
                if(count[3:0] == 4'd9) begin
                    count[3:0] <= 4'd0;
                end else begin
                    count[3:0] <= count[3:0] + 1;
                end
            end
        end
    end

    // 十位使能
    wire h_ena = ena & (count[3:0] == 4'd9);

    always @(posedge clk) begin
        if(rst) begin
            count[7:4] <= rst_val[7:4];
        end else begin
            if(h_ena) begin
                if(count[7:4] == 4'd9) begin
                    count[7:4] <= 4'd0;
                end else begin
                    count[7:4] <= count[7:4] + 1;
                end
            end
        end
    end

endmodule