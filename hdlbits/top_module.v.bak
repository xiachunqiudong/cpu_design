module top_module;

    wire [7:0] hh, mm, ss;
    wire pm;
    reg clk, reset, ena;

    clock ck(clk, reset, ena, pm, hh, mm, ss);

    always #5 clk = ~clk;

    initial begin
        clk = 1;
        reset = 1;
        ena = 1;
        #10
        reset = 0;
        #1000
        $stop;
    end

endmodule