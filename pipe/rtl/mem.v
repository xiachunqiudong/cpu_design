module mem(
    input                          mem_flush_i,
    input  [`LD_ST_INFO_WIDTH-1:0] ld_st_info_i,
    input  [`XLEN-1:0]             mem_addr_i,
    input  [`XLEN-1:0]             mem_wdata_i,
    output [`XLEN-1:0]             mem_rdata_o,
    // excp
    input                          MEM_pc_misalign_i,
    input                          MEM_if_bus_err_i,
    input                          MEM_ilegl_instr_i,
    input                          MEM_ecall_i,
    input                          MEM_ebreak_i,
    input                          MEM_mret_i,
    output                         mem_ld_misalign_o,
    output                         mem_ld_bus_err_o,
    output                         mem_st_misalign_o,
    output                         mem_st_bus_err_o,
    // mem x ram
    output [`XLEN-1:0]             ram_addr_o,
    // write
    output                         ram_wen_o,
    output [7:0]                   ram_byte_en_o,
    output [`XLEN-1:0]             ram_wdata_o,
    // read
    output                         ram_ren_o,
    input  [`XLEN-1:0]             ram_rdata_i
);

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

    // excp
    assign mem_ld_misalign_o = (lh | lhu) & ( mem_addr_i[0])
                             | (lw | lwu) & (|mem_addr_i[1:0])
                             |  ld        & (|mem_addr_i[2:0]);
    assign mem_ld_bus_err_o = 0;

    assign mem_st_misalign_o = sh & ( mem_addr_i[0])
                             | sw & (|mem_addr_i[1:0])
                             | sd & (|mem_addr_i[2:0]);
    assign mem_st_bus_err_o = 0;

    wire mem_excp = MEM_pc_misalign_i | MEM_if_bus_err_i | MEM_ecall_i       | MEM_ebreak_i     | MEM_mret_i
                  | mem_ld_misalign_o | mem_ld_bus_err_o | mem_st_misalign_o | mem_st_bus_err_o;


    // ram_addr RAM位宽为8字节
    assign ram_addr_o = {mem_addr_i[63:3], 3'b0};
    
    // LOAD
    // 读使能
    assign ram_ren_o   = !mem_flush_i && !mem_excp && (lb || lh || lw || ld || lbu || lhu || lwu);
    // lb
    // 根据低三位从ram_rdata中选择所需数据  
    reg [7:0] lb_rdata;
    always @(*) begin
        case(mem_addr_i[2:0])
            3'b000: lb_rdata = ram_rdata_i[7 :0 ];
            3'b001: lb_rdata = ram_rdata_i[15:8 ];
            3'b010: lb_rdata = ram_rdata_i[23:16];
            3'b011: lb_rdata = ram_rdata_i[31:24];
            3'b100: lb_rdata = ram_rdata_i[39:32];
            3'b101: lb_rdata = ram_rdata_i[47:40];
            3'b110: lb_rdata = ram_rdata_i[55:48];
            3'b111: lb_rdata = ram_rdata_i[63:56];
            default: lb_rdata = 8'b0;
        endcase
    end
    // lh
    reg [15:0] lh_rdata;
    always @(*) begin
        case(mem_addr_i[2:1])
            2'b00: lh_rdata = ram_rdata_i[15:0];
            2'b01: lh_rdata = ram_rdata_i[31:16];
            2'b10: lh_rdata = ram_rdata_i[47:32];
            2'b11: lh_rdata = ram_rdata_i[63:48];
            default lh_rdata = 16'b0;
        endcase
    end
    // lw
    reg [31:0] lw_rdata;
    always @(*) begin
        if(mem_addr_i[2] == 1'b0)
            lw_rdata = ram_rdata_i[31:0];
        else
            lw_rdata = ram_rdata_i[63:32];
    end

    // 符号扩展
    wire [`XLEN-1:0] mem_rdata_lb  = {{56{lb_rdata[7 ]}}, lb_rdata};
    wire [`XLEN-1:0] mem_rdata_lh  = {{48{lh_rdata[15]}}, lh_rdata};
    wire [`XLEN-1:0] mem_rdata_lw  = {{32{lw_rdata[31]}}, lw_rdata};
    wire [`XLEN-1:0] mem_rdata_ld  = ram_rdata_i;
    // 无符号扩展
    wire [`XLEN-1:0] mem_rdata_lbu = {{56'b0}, lb_rdata};
    wire [`XLEN-1:0] mem_rdata_lhu = {{48'b0}, lh_rdata};
    wire [`XLEN-1:0] mem_rdata_lwu = {{32'b0}, lw_rdata};
    
    // 结果选择
    assign mem_rdata_o = {{`XLEN{lb}}  & mem_rdata_lb}
                       | {{`XLEN{lh}}  & mem_rdata_lh}
                       | {{`XLEN{lw}}  & mem_rdata_lw}
                       | {{`XLEN{ld}}  & mem_rdata_ld}
                       | {{`XLEN{lbu}} & mem_rdata_lbu}
                       | {{`XLEN{lhu}} & mem_rdata_lhu}
                       | {{`XLEN{lwu}} & mem_rdata_lwu};

    // STORE
    // 写使能
    assign ram_wen_o   = !mem_flush_i && !mem_excp && (sb || sh || sw || sd);
    // 写字节使能
    // sb
    reg [7:0] sb_byte_en;
    always @(*) begin
        case(mem_addr_i[2:0])
            3'b000: sb_byte_en = 8'b0000_0001;
            3'b001: sb_byte_en = 8'b0000_0010;
            3'b010: sb_byte_en = 8'b0000_0100;
            3'b011: sb_byte_en = 8'b0000_1000;
            3'b100: sb_byte_en = 8'b0001_0000;
            3'b101: sb_byte_en = 8'b0010_0000;
            3'b110: sb_byte_en = 8'b0100_0000;
            3'b111: sb_byte_en = 8'b1000_0000;
            default: sb_byte_en = 8'b0000_0000;
        endcase
    end
    // sh
    reg [7:0] sh_byte_en;
    always @(*) begin
        case(mem_addr_i[2:1])
            2'b00: sh_byte_en = 8'b0000_0011;
            2'b01: sh_byte_en = 8'b0000_1100;
            2'b10: sh_byte_en = 8'b0011_0000;
            2'b11: sh_byte_en = 8'b1100_0000;
            default: sh_byte_en = 8'b0000_0000;
        endcase
    end
    // sw
    reg [7:0] sw_byte_en;
    always @(*) begin
        case(mem_addr_i[2])
            1'b0: sw_byte_en = 8'b0000_1111;
            1'b1: sw_byte_en = 8'b1111_0000;
            default: sw_byte_en = 8'b0000_0000;
        endcase
    end

    // 字节使能
    assign ram_byte_en_o = ({8{sb}} & sb_byte_en)
                         | ({8{sh}} & sh_byte_en)
                         | ({8{sw}} & sw_byte_en)
                         | ({8{sd}} & 8'b1111_1111);

    assign ram_wdata_o = ({64{sb}} & {8{mem_wdata_i[7:0]}})
                       | ({64{sh}} & {4{mem_wdata_i[15:0]}})
                       | ({64{sw}} & {2{mem_wdata_i[31:0]}})
                       | ({64{sd}} & mem_wdata_i);

endmodule