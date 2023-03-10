`include "defines.v"

// 取指模块
module if_bus(
    // if
    input  [`PC_WIDTH-1:0]    pc_i,

    output [`INSTR_WIDTH-1:0] if_bus_instr_o,
    output                    if_bus_pc_misalign_o,
    output                    if_bus_bus_err_o
);

    assign if_bus_pc_misalign_o = 0;
    assign if_bus_bus_err_o = 0;

    reg [7:0] instr_mem[0:1023];

    // 小端法 低位在低地址
    wire [9:0] pc = pc_i[9:0];
    assign if_bus_instr_o = {instr_mem[pc+3], instr_mem[pc+2], instr_mem[pc+1], instr_mem[pc]};

    // 从code.txt中读入指令
    initial begin
        $readmemh("./code.txt", instr_mem);
    end
    

endmodule