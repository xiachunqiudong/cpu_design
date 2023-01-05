//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器模块
// author: xia dao liang
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

`include "defines.v"

module regfile(
    input                      clk,
    input                      reset,

    // from wb
    input                      rd_en_i,
    input [4:0]                rd_idx_i,
    input [`XLEN-1:0]          rd_wdata_i,
    
    // from id 
    input                      rs1_en_i,
    input [4:0]                rs1_idx_i,
    input                      rs2_en_i,
    input [4:0]                rs2_idx_i,
    // to id
    output reg [`XLEN-1:0]     rf_rs1_rdata_o,
    output reg [`XLEN-1:0]     rf_rs2_rdata_o,

    // from if
    input [4:0]                jalr_rs1_idx_i,
    input                      jalr_rs1_en_i,
    // to if
    output reg [`XLEN-1:0]     rf_jalr_rs1_rdata_o
);

    // REG FILE
    reg [`XLEN-1:0] reg_data [1:31];

    // WRITE
    integer i;
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 32; i++) begin
                reg_data[rd_idx_i] <= `XLEN'b0;
            end
            // 写使能有效并且写入index != x0
        end else if(rd_en_i & (rd_idx_i != `REG_X0)) begin
            reg_data[rd_idx_i] <= rd_wdata_i;
        end
    end

    // READ RS1
    always @(*) begin: rs1_read
        // 如果读X0寄存器或者读使能无效直接返回0
        if(~rs1_en_i | (rs1_idx_i == `REG_X0)) begin
            rf_rs1_rdata_o = `XLEN'b0;
        // 寄存器内部前递
        //end else if(rs1_idx_i == rd_idx_i) begin
        //    rf_rs1_rdata_o = rd_wdata_i;
        end else begin
            rf_rs1_rdata_o = reg_data[rs1_idx_i];
        end
    end

    // READ RS2
    always @(*) begin: rs2_read
        // 如果读X0寄存器或者读使能无效直接返回0
        if(~rs2_en_i | (rs2_idx_i == `REG_X0)) begin
            rf_rs2_rdata_o = `XLEN'b0;
        // 寄存器内部前递
        //end else if(rs2_idx_i == rd_idx_i) begin
        //    rf_rs2_rdata_o = rd_wdata_i;
        end else begin
            rf_rs2_rdata_o = reg_data[rs2_idx_i];
        end
    end

    // READ JALR_RS1
    // READ RS1
    always @(*) begin: jalr_rs1_read
        if(~jalr_rs1_en_i | (jalr_rs1_idx_i == `REG_X0)) begin
            rf_jalr_rs1_rdata_o = `XLEN'b0;
        // 寄存器内部前递
        //end else if(jalr_rs1_idx_i == rd_idx_i) begin
          //  rf_jalr_rs1_rdata_o = rd_wdata_i;
        end else begin
            rf_jalr_rs1_rdata_o = reg_data[jalr_rs1_idx_i];
        end
    end

    
endmodule