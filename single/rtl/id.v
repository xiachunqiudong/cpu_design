`include "defines.v"

module id(
    input [`INSTR_WIDTH-1:0] instr_i,
        
    // id x regfile
    // to regfile
    output [4:0]       id_rs1_idx_o,
    output [4:0]       id_rs2_idx_o,
    // form regfile
    input  [`XLEN-1:0] rf_rs1_rdata_i,
    input  [`XLEN-1:0] rf_rs2_rdata_i,
    
    // id x csr
    // to csr
    output                          id_csr_wen_o,// csr指令既要读也要写,x0在csr内部处理
    output [11:0]                   id_csr_idx_o,
    // from csr
    input  [`XLEN-1:0]              csr_rdata_i,
    
    // to ex
    // op info
    output [`OP_INFO_WIDTH-1:0]     id_opcode_info_o,
    output [`ALU_INFO_WIDTH-1:0]    id_alu_info_o,
    output [`BRANCH_INFO_WIDTH-1:0] id_branch_info_o,
    output [`LD_ST_INFO_WIDTH-1:0]  id_ld_st_info_o,
    output [`CSR_INFO_WIDTH-1:0]    id_csr_info_o,
    // op number
    output [`XLEN-1:0]              id_rs1_rdata_o,
    output [`XLEN-1:0]              id_rs2_rdata_o,
    output [`XLEN-1:0]              id_imm_o,

    // to write back
    output                          id_rd_wen_o,
    output [4:0]                    id_rd_idx_o,
    output [`XLEN-1:0]              id_csr_rdata_o,
    
    // excp
    output id_ilegl_instr_o,
    output id_ecall_o,
    output id_ebreak_o,
    output id_mret_o
);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 前递
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    assign id_rs1_rdata_o = rf_rs1_rdata_i;
    assign id_rs2_rdata_o = rf_rs2_rdata_i;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 指令分解
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];

    assign id_rs1_idx_o = rs1;
    assign id_rs2_idx_o = rs2;
    assign id_rd_idx_o  = rd;
    assign id_csr_idx_o = instr_i[31:20];

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// RV64I译码部分
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // opcode
    // reg-imm
    wire rv64_alu_imm   = (opcode == 7'b00_100_11);
    wire rv64_alu_imm_w = (opcode == 7'b00_110_11);
    // reg-reg
    wire rv64_alu       = (opcode == 7'b01_100_11);
    wire rv64_alu_w     = (opcode == 7'b01_110_11);
    wire rv64_branch    = (opcode == 7'b11_000_11);
    wire rv64_jal       = (opcode == 7'b11_011_11);
    wire rv64_jalr      = (opcode == 7'b11_001_11);
    wire rv64_load      = (opcode == 7'b00_000_11);
    wire rv64_store     = (opcode == 7'b01_000_11);
    wire rv64_lui       = (opcode == 7'b01_101_11);
    wire rv64_auipc     = (opcode == 7'b00_101_11);
    wire rv64_system    = (opcode == 7'b11_100_11);

    // ALU OP
    // 1. reg-imm
    wire rv64_addi  = rv64_alu_imm   & (fun3 == 3'b000);
    wire rv64_addiw = rv64_alu_imm_w & (fun3 == 3'b000);
    wire rv64_slli  = rv64_alu_imm   & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slliw = rv64_alu_imm_w & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slti  = rv64_alu_imm   & (fun3 == 3'b010);
    wire rv64_sltui = rv64_alu_imm   & (fun3 == 3'b011);
    wire rv64_xori  = rv64_alu_imm   & (fun3 == 3'b100);
    wire rv64_srli  = rv64_alu_imm   & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srliw = rv64_alu_imm_w & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srai  = rv64_alu_imm   & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_sraiw = rv64_alu_imm_w & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_ori   = rv64_alu_imm   & (fun3 == 3'b110);
    wire rv64_andi  = rv64_alu_imm   & (fun3 == 3'b111);
    // 2. reg-reg
    wire rv64_add  = rv64_alu   & (fun3 == 3'b000) & (fun7 == 7'b00_000_00);
    wire rv64_addw = rv64_alu_w & (fun3 == 3'b000) & (fun7 == 7'b00_000_00);
    wire rv64_sub  = rv64_alu   & (fun3 == 3'b000) & (fun7 == 7'b01_000_00);
    wire rv64_subw = rv64_alu_w & (fun3 == 3'b000) & (fun7 == 7'b01_000_00);
    wire rv64_sll  = rv64_alu   & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_sllw = rv64_alu_w & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv64_slt  = rv64_alu   & (fun3 == 3'b010) & (fun7 == 7'b00_000_00);
    wire rv64_sltu = rv64_alu   & (fun3 == 3'b011) & (fun7 == 7'b00_000_00);
    wire rv64_xor  = rv64_alu   & (fun3 == 3'b100) & (fun7 == 7'b00_000_00);
    wire rv64_srl  = rv64_alu   & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_srlw = rv64_alu_w & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv64_sra  = rv64_alu   & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_sraw = rv64_alu_w & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv64_or   = rv64_alu   & (fun3 == 3'b110) & (fun7 == 7'b00_000_00);
    wire rv64_and  = rv64_alu   & (fun3 == 3'b111) & (fun7 == 7'b00_000_00);

    // BRANCH INSTRUCTIONS
    wire rv64_beq  = rv64_branch & (fun3 == 3'b000);
    wire rv64_bne  = rv64_branch & (fun3 == 3'b001);
    wire rv64_blt  = rv64_branch & (fun3 == 3'b100);
    wire rv64_bge  = rv64_branch & (fun3 == 3'b101);
    wire rv64_bltu = rv64_branch & (fun3 == 3'b110);
    wire rv64_bgeu = rv64_branch & (fun3 == 3'b111);

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

    // OP INFO
    assign id_opcode_info_o = {
                               rv64_alu_imm  , // 11
                               rv64_alu_imm_w, // 10
                               rv64_alu      , // 9
                               rv64_alu_w    , // 8
                               rv64_branch   , // 7
                               rv64_jal      , // 6
                               rv64_jalr     , // 5
                               rv64_load     , // 4
                               rv64_store    , // 3
                               rv64_lui      , // 2
                               rv64_auipc    , // 1
                               rv64_system     // 0
                            };
    // ALU INFO
    assign id_alu_info_o = {
                            (rv64_add  | rv64_addi | rv64_addw | rv64_addiw),   // 9
                            (rv64_sub  | rv64_subw),                            // 8
                            (rv64_sll  | rv64_slli | rv64_sllw | rv64_slliw),   // 7
                            (rv64_slt  | rv64_slti),                            // 6
                            (rv64_sltu | rv64_sltui),                           // 5
                            (rv64_xor  | rv64_xori),                            // 4
                            (rv64_srl  | rv64_srli | rv64_srlw | rv64_srliw),   // 3
                            (rv64_sra  | rv64_srai | rv64_sraw | rv64_sraiw),   // 2
                            (rv64_or   | rv64_ori),                             // 1
                            (rv64_and  | rv64_andi)                             // 0
                        };
    // BRANCH INFO
    assign id_branch_info_o = {
                               rv64_beq , // 5
                               rv64_bne , // 4
                               rv64_blt , // 3
                               rv64_bge , // 2
                               rv64_bltu, // 1
                               rv64_bgeu  // 0
                            };
    // LOAD STORE INFO
    assign id_ld_st_info_o = {
                              rv64_lb , // 10
                              rv64_lh , // 9
                              rv64_lw , // 8
                              rv64_ld , // 7
                              rv64_lbu, // 6
                              rv64_lhu, // 5
                              rv64_lwu, // 4
                              rv64_sb , // 3
                              rv64_sh , // 2
                              rv64_sw , // 1
                              rv64_sd   // 0
                            };
    // CSR INFO
    assign id_csr_info_o = {
                            rv64_csrrw , // 5
                            rv64_csrrs , // 4
                            rv64_csrrc , // 3
                            rv64_csrrwi, // 2
                            rv64_csrrsi, // 1
                            rv64_csrrci  // 0
                        };

    // excp
    assign id_ecall_o  = rv64_ecall;
    assign id_ebreak_o = rv64_ebreak;
    assign id_mret_o   = rv64_mret;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 源寄存器, 目的寄存器解析 id_rs1_en id_rs2_en id_rd_en 
// CSR解析 id_csr_en
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // RV64I不需要rs1的有:
    // 1. lui/auipc
    // 2. jal
    // 3. csrrwi/csrrsi/csrrci
    // 4. ecall/ebreak/mret
    wire rv64_need_rs1 = (~rv64_lui)    & (~rv64_auipc)  & (~rv64_jal)
                       & (~rv64_csrrwi) & (~rv64_csrrsi) & (~rv64_csrrci)
                       & (~rv64_ecall)  & (~rv64_ebreak) & (~rv64_mret);

    // RV64I需要rs2的有
    // 1. rv64_alu
    // 2. branch
    // 3. store
    wire rv64_need_rs2 = (rv64_alu | rv64_alu_w | rv64_branch | rv64_store);

    // RV64I不需要rd的有
    // 1. ecall/ebreak
    // 2. fence/fence_i
    // 3. branch
    // 4. store
    wire rv64_need_rd = (~rv64_ecall)  & (~rv64_ebreak) & (~rv64_mret)
                      & (~rv64_branch) & (~rv64_store);


    // RV64I需要读写csr的有
    // csrrw  csrrs  csrrc
    // csrrwi csrrsi csrrci
    wire rv64_need_csr = rv64_csrrw  | rv64_csrrs  | rv64_csrrc
                       | rv64_csrrwi | rv64_csrrsi | rv64_csrrci;


    assign id_rd_wen_o  = rv64_need_rd;
    assign id_csr_wen_o = rv64_need_csr;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  立即数生成
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // 所有立即数都是有符号数 需要进行符号扩展至64位
    wire [`XLEN-1:0] rv64_i_imm = { {52{instr_i[31]}}, instr_i[31:20] };
    wire [`XLEN-1:0] rv64_s_imm = { {52{instr_i[31]}}, instr_i[31:25], instr_i[11:7 ]}; 
    wire [`XLEN-1:0] rv64_b_imm = { {51{instr_i[31]}}, instr_i[31],    instr_i[7],     instr_i[30:25], instr_i[11:8 ], 1'b0};
    wire [`XLEN-1:0] rv64_j_imm = { {43{instr_i[31]}}, instr_i[31],    instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
    wire [`XLEN-1:0] rv64_u_imm = { {32{instr_i[31]}}, instr_i[31:12], 12'b0 };

    // imm选择
    wire rv64_imm_sel_i = rv64_alu_imm | rv64_alu_imm_w | rv64_load | rv64_jalr;
    wire rv64_imm_sel_s = rv64_store;
    wire rv64_imm_sel_b = rv64_branch;
    wire rv64_imm_sel_j = rv64_jal;
    wire rv64_imm_sel_u = rv64_lui | rv64_auipc;

    wire [`XLEN-1:0] rv64_imm = ({`XLEN{rv64_imm_sel_i}} & rv64_i_imm)
                              | ({`XLEN{rv64_imm_sel_s}} & rv64_s_imm)
                              | ({`XLEN{rv64_imm_sel_b}} & rv64_b_imm)
                              | ({`XLEN{rv64_imm_sel_j}} & rv64_j_imm)
                              | ({`XLEN{rv64_imm_sel_u}} & rv64_u_imm);

    assign id_imm_o = rv64_imm;


endmodule