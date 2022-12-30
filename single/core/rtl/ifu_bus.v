#include "defines.v"

// 取指模块
module ifu_bus(
    // if
    input  [] pc_i,
    output [] instr_o,
    output if_pc_misalign_o,
    output if_bus_err_o,
    // sram
    // addr
    output [] araddr_o,
    output arvalid_o,
    input  arready_i,
    // rdata
    input [] rdata_i,
    input [] rresp_i,
    input rvalid_i,
    output rready_o
);


endmodule