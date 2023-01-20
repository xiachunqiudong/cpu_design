module mem(
    // from id
    input  [`LD_ST_INFO_WIDTH-1:0] ld_st_info_i,
    // from ex
    input  [`XLEN-1:0] mem_addr_i,
    // rs2_rdata
    input  [`XLEN-1:0] mem_wdata_i,
    // to wb
    output [`XLEN-1:0] mem_rdata_o,

    // mem x ram
    output [`XLEN-1:0] ram_addr_o,
    output             ram_wen_o,
    output [`XLEN-1:0] ram_wdata_o,
    output [1:0]       ram_wmask_o,
    input  [`XLEN-1:0] ram_rdata_i
);

    assign ram_addr_o      = mem_addr_i;
    assign ram_wdata_o     = mem_wdata_i;

    wire lb  = ld_st_info_i[`LD_LB];
    wire lh  = ld_st_info_i[`LD_LH];
    wire lw  = ld_st_info_i[`LD_LW];
    wire ld  = ld_st_info_i[`LD_LD];
    wire lbu = ld_st_info_i[`LD_LBU];
    wire lhu = ld_st_info_i[`LD_LHU];
    wire lwu = ld_st_info_i[`LD_LWU];
    wire sb  = ld_st_info_i[`ST_SB];
    wire sh  = ld_st_info_i[`ST_SH];
    wire sw  = ld_st_info_i[`ST_SW];
    wire sd  = ld_st_info_i[`ST_SD];

    assign ram_wen_o   = (sb | sh | sw | sd);
    assign ram_wmask_o = sb ? `MASK_BYTE
                   : sh ? `MASK_HALF
                   : sw ? `MASK_WORD
                   : sd ? `MASK_DOUBLE
                   : 0;


    // load指令
    // 符号扩展
    wire [`XLEN-1:0] mem_rdata_lb  = {{56{ram_rdata_i[7 ]}}, ram_rdata_i[7:0 ]};
    wire [`XLEN-1:0] mem_rdata_lh  = {{48{ram_rdata_i[15]}}, ram_rdata_i[15:0]};
    wire [`XLEN-1:0] mem_rdata_lw  = {{32{ram_rdata_i[31]}}, ram_rdata_i[31:0]};
    wire [`XLEN-1:0] mem_rdata_ld  = ram_rdata_i;
    // 无符号扩展
    wire [`XLEN-1:0] mem_rdata_lbu = {{56'b0}, ram_rdata_i[7:0 ]};
    wire [`XLEN-1:0] mem_rdata_lhu = {{48'b0}, ram_rdata_i[15:0]};
    wire [`XLEN-1:0] mem_rdata_lwu = {{32'b0}, ram_rdata_i[31:0]};

    assign mem_rdata_o = {{`XLEN{lb}}  & mem_rdata_lb}
                       | {{`XLEN{lh}}  & mem_rdata_lh}
                       | {{`XLEN{lw}}  & mem_rdata_lw}
                       | {{`XLEN{ld}}  & mem_rdata_ld}
                       | {{`XLEN{lbu}} & mem_rdata_lbu}
                       | {{`XLEN{lhu}} & mem_rdata_lhu}
                       | {{`XLEN{lwu}} & mem_rdata_lwu};


endmodule