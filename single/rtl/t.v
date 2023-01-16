module t(
    input clk
);

    reg [1:0] a = 0;
    reg [1:0] b = 1;

    reg [1:0] c = 2;
    reg [1:0] d = 3;

    // 顺序发生 交换失败
    always @(posedge clk) begin
        a = b; // a = 1
        b = a; // b = a = 1
    end

    // 同时发生 交换成功
    always @(posedge clk) begin
        c <= d; // c = 3
        d <= c; // d = 2
    end


endmodule