`include "defines.v"

module id(
    input [`INSTR_WIDTH-1:0] instr_i,
        
    // to regfile
    output             id_rs1_en_o,
    output [4:0]       id_rs1_idx_o,
    output             id_rs2_en_o,
    output [4:0]       id_rs2_idx_o,
    // form regfile
    input              rf_rs1_rdata_i,
    input              rf_rs2_rdata_i,
    
    output             id_rd_en_o,
    output [4:0]       id_rd_idx_o,

    output id_branch,
    output id_jal,
    output id_jalr,

    // to ex or if
    output [`XLEN-1:0] id_rs1_rdata_o,
    output [`XLEN-1:0] id_rs2_rdata_o,
    output [`XLEN-1:0] id_imm_o,

    // 异常
    output id_ilegl_instr_o,
    output id_ecall_o,
    output id_ebreak_o,
    output id_mret_o
);


    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];

    assign id_rs1_idx_o = rs1;
    assign id_rs2_idx_o = rs2;
    assign id_rd_idx_o  = rd;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// RV64I译码部分
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    // opcode
    // reg-imm
    wire rv64_op_imm   = (opcode == 7'b00_100_11);
    wire rv64_op_imm_w = (opcode == 7'b00_110_11);
    // reg-reg
    wire rv64_op       = (opcode == 7'b01_100_11);
    wire rv64_op_w     = (opcode == 7'b01_110_11);
    wire rv64_branch   = (opcode == 7'b11_000_11);
    wire rv64_jal      = (opcode == 7'b11_011_11);
    wire rv64_jalr     = (opcode == 7'b11_001_11);
    wire rv64_load     = (opcode == 7'b00_000_11);
    wire rv64_store    = (opcode == 7'b01_000_11);
    wire rv64_lui      = (opcode == 7'b01_101_11);
    wire rv64_auipc    = (opcode == 7'b00_101_11);
    wire rv64_system   = (opcode == 7'b11_100_11);

    // ALU OP
    // 1. reg-imm
    wire rv64_addi  = rv64_op_imm   & (fun3 == 3'b000);
    wire rv64_addiw = rv64_op_imm_w & (fun3 == 3'b000);
    wire rv64_slli  = rv64_op_imm   & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slliw = rv64_op_imm_w & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slti  = rv64_op_imm   & (fun3 == 3'b010);
    wire rv64_sltui = rv64_op_imm   & (fun3 == 3'b011);
    wire rv64_xori  = rv64_op_imm   & (fun3 == 3'b100);
    wire rv64_srli  = rv64_op_imm   & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srliw = rv64_op_imm_w & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srai  = rv64_op_imm   & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_sraiw = rv64_op_imm_w & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_ori   = rv64_op_imm   & (fun3 == 3'b110);
    wire rv64_andi  = rv64_op_imm   & (fun3 == 3'b111);
    // 2. reg-reg
    wire rv64_add  = rv64_op   & (fun3 == 3'b000) & (fun7 == 7'b00_000_00);
    wire rv64_addw = rv64_op_w & (fun3 == 3'b000) & (fun7 == 7'b00_000_00);
    wire rv64_sub  = rv64_op   & (fun3 == 3'b000) & (fun7 == 7'b01_000_00);
    wire rv64_subw = rv64_op_w & (fun3 == 3'b000) & (fun7 == 7'b01_000_00);
    wire rv64_sll  = rv64_op   & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_sllw = rv64_op_w & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slt  = rv64_op   & (fun3 == 3'b010) & (fun7 == 7'b00_000_00);
    wire rv64_sltu = rv64_op   & (fun3 == 3'b011) & (fun7 == 7'b00_000_00);
    wire rv64_xor  = rv64_op   & (fun3 == 3'b100) & (fun7 == 7'b00_000_00);
    wire rv64_srl  = rv64_op   & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srlw = rv64_op_w & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_sra  = rv64_op   & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_sraw = rv64_op_w & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_or   = rv64_op   & (fun3 == 3'b110) & (fun7 == 7'b00_000_00);
    wire rv64_and  = rv64_op   & (fun3 == 3'b111) & (fun7 == 7'b00_000_00);

    // BRANCH INSTRUCTIONS
    wire rv64_beq  = rv64_branch & (fun3 == 3'000);
    wire rv64_bne  = rv64_branch & (fun3 == 3'001);
    wire rv64_blt  = rv64_branch & (fun3 == 3'100);
    wire rv64_bgt  = rv64_branch & (fun3 == 3'101);
    wire rv64_bltu = rv64_branch & (fun3 == 3'110);
    wire rv64_bgtu = rv64_branch & (fun3 == 3'111);

    // LOAD INSTRUCTIONS
    wire rv64_lb  = rv64_load & (fun3 == 3'b000);
    wire rv64_lh  = rv64_load & (fun3 == 3'b001);
    wire rv64_lw  = rv64_load & (fun3 == 3'b010);
    
    wire rv64_ld  = rv64_load & (fun3 == 3'b011);
    wire rv64_lbu = rv64_load & (fun3 == 3'b100);
    wire rv64_lhu = rv64_load & (fun3 == 3'b101);
    wire rv64_lwu = rv64_load & (fun3 == 3'b110);

    // STORE INSTRUCTIONS
    wire rv64_sb = rv64_store & (fun3 == 3'b000);
    wire rv64_sh = rv64_store & (fun3 == 3'b001);
    wire rv64_sw = rv64_store & (fun3 == 3'b010);
    wire rv64_sd = rv64_store & (fun3 == 3'b011);

    // SYSTEM INSTRUCTIONS
    wire rv64_ecall  = rv64_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0000_0000_0000);
    wire rv64_ebreak = rv64_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0000_0000_0001);
    wire rv64_mret   = rv64_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0011_0000_0010);

    // CSR INSTRUCTIONS
    wire rv64_csrrw  = rv64_system & (fun3 == 3'b001);
    wire rv64_csrrs  = rv64_system & (fun3 == 3'b010);
    wire rv64_csrrc  = rv64_system & (fun3 == 3'b011);
    wire rv64_csrrwi = rv64_system & (fun3 == 3'b101);
    wire rv64_csrrsi = rv64_system & (fun3 == 3'b110);
    wire rv64_csrrci = rv64_system & (fun3 == 3'b111);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  rv64_need_rs1 rv64_need_rs2
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // RV64I不需要rs1的有:
    // 1. lui/auipc
    // 2. jal
    // 3. csrrwi/csrrsi/csrrci
    // 4. ecall/ebreak
    // 5. fence/fence_i
    wire rv64_need_rs1 = (~rv64_lui)    & (~rv64_auipc)  & (~rv64_jal)
                       & (~rv64_csrrwi) & (~rv64_csrrsi) & (~rv64_csrrci)
                       & (~rv64_ecall)  & (~rv64_ebreak);

    // RV64I需要rs2的有
    // 1. rv64_op
    // 2. branch
    // 3. store
    wire rv64_need_rs2 = (rv64_op | rv64_op_w | rv64_branch | rv64_store);

    // RV64I不需要rd的有
    // 1. ecall/ebreak
    // 2. fence/fence_i
    // 3. branch
    // 4. store
    wire rv32_need_rd = (~rv64_ecall)  & (~rv64_ebreak) 
                      & (~rv64_branch) & (~rv64_store);

    // imm解析
    // 所有立即数都是有符号数 需要进行符号扩展至64位
    wire [`XLEN-1:0] rv64_i_imm = { {52{instr_i[31]}}, instr_i[31:20] };
    wire [`XLEN-1:0] rv64_s_imm = { {52{instr_i[31]}}, instr_i[31:25], instr_i[11:7 ]}; 
    wire [`XLEN-1:0] rv64_b_imm = { {51{instr_i[31]}}, instr_i[31],    instr_i[7],     instr_i[30:25], instr_i[11:8 ], 1'b0 };
    wire [`XLEN-1:0] rv64_j_imm = { {43{instr_i[31]}}, instr_i[31],    instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
    wire [`XLEN-1:0] rv64_u_imm = { {32{instr_i[31]}}, instr_i[31:12], 12'b0 };

    // imm选择
    wire rv64_imm_sel_i = rv64_op_imm | rv64_op_imm_w | rv64_load | rv64_jalr;
    wire rv64_imm_sel_s = rv64_store;
    wire rv64_imm_sel_b = rv64_branch;
    wire rv64_imm_sel_j = rv64_jal;
    wire rv64_imm_sel_u = rv64_lui & rv64_auipc;

    wire [`XLEN-1:0] rv64_imm = ({`XLEN{rv64_imm_sel_i}} & rv64_i_imm)
                              | ({`XLEN{rv64_imm_sel_s}} & rv64_s_imm)
                              | ({`XLEN{rv64_imm_sel_b}} & rv64_b_imm)
                              | ({`XLEN{rv64_imm_sel_j}} & rv64_j_imm)
                              | ({`XLEN{rv64_imm_sel_u}} & rv64_u_imm);


endmodule