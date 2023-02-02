module top(
    input  [3:0] a,
    input  [3:0] b,
    output [3:0] c,
    output cout,
    output lt,
    output ge,
    output ltu,
    output geu
);

    wire cin = 1;
    wire [3:0] op1 = a;
    wire [3:0] op2 = ~b;
    assign {cout, c} = op1 + op2 + {3'b0, cin};

    assign lt = (a[3] & ~b[3]) | (~(a[3] ^ b[3]) & c[3]);
    assign ltu = ~cout;
    assign ge = ~lt;
    assign geu = ~ltu;

endmodule