//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器模块
// author: xia dong
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

`include "defines.v"

module regfile(
    input                      clk,
    // 写端口
    input                      rd_wen_i,
    input [4:0]                rd_idx_i,
    input [`XLEN-1:0]          rd_wdata_i,
    // 读端口
    input [4:0]                rs1_idx_i,
    input [4:0]                rs2_idx_i,
    output reg [`XLEN-1:0]     rf_rs1_rdata_o,
    output reg [`XLEN-1:0]     rf_rs2_rdata_o,
    // for moniter regfile status 
    output [`XLEN-1:0] reg_data_o [1:31]
);

    reg [`XLEN-1:0] reg_data [1:31];
    assign reg_data_o = reg_data;

    // WRITE
    always @(posedge clk) begin
        if(rd_wen_i && (rd_idx_i != `REG_X0)) begin
            reg_data[rd_idx_i] <= rd_wdata_i;
        end
    end

    // READ
    assign rf_rs1_rdata_o = (rs1_idx_i == `REG_X0) ? 64'b0 
                          : (rd_wen_i && (rs1_idx_i == rd_idx_i)) ? rd_wdata_i
                          : reg_data[rs1_idx_i];
    assign rf_rs2_rdata_o = (rs2_idx_i == `REG_X0) ? 64'b0 
                          : (rd_wen_i && (rs2_idx_i == rd_idx_i)) ? rd_wdata_i
                          : reg_data[rs2_idx_i];

endmodule