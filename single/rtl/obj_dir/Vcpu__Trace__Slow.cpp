// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__traceInitSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu___024root__traceInitTop(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu___024root__traceInitSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+256,"clk", false,-1);
        tracep->declBit(c+257,"reset", false,-1);
        tracep->declBit(c+256,"cpu clk", false,-1);
        tracep->declBit(c+257,"cpu reset", false,-1);
        tracep->declQuad(c+1,"cpu IF_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu if_pc_next", false,-1, 63,0);
        tracep->declBit(c+5,"cpu if_jalr_rs1_en", false,-1);
        tracep->declBus(c+6,"cpu if_jalr_rs1_idx", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu rf_jalr_rs1_rdata", false,-1, 63,0);
        tracep->declBus(c+9,"cpu if_instr", false,-1, 31,0);
        tracep->declBit(c+258,"cpu if_pc_misalign", false,-1);
        tracep->declBit(c+258,"cpu if_bus_err", false,-1);
        tracep->declBus(c+6,"cpu id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+10,"cpu id_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu rf_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu rf_rs2_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"cpu id_csr_wen", false,-1);
        tracep->declBus(c+16,"cpu id_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+259,"cpu csr_rdata", false,-1, 63,0);
        tracep->declBus(c+17,"cpu id_opcode_info", false,-1, 11,0);
        tracep->declBus(c+18,"cpu id_alu_info", false,-1, 9,0);
        tracep->declBus(c+19,"cpu id_branch_info", false,-1, 5,0);
        tracep->declBus(c+20,"cpu id_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+21,"cpu id_csr_info", false,-1, 5,0);
        tracep->declQuad(c+11,"cpu id_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu id_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu id_imm", false,-1, 63,0);
        tracep->declBit(c+24,"cpu id_rd_wen", false,-1);
        tracep->declBus(c+25,"cpu id_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+261,"cpu id_csr_rdata", false,-1, 63,0);
        tracep->declBit(c+263,"cpu id_ilegl_inst", false,-1);
        tracep->declBit(c+26,"cpu id_ecall", false,-1);
        tracep->declBit(c+27,"cpu id_ebreak", false,-1);
        tracep->declBit(c+28,"cpu id_mret", false,-1);
        tracep->declQuad(c+29,"cpu ex_alu_rd_wdata", false,-1, 63,0);
        tracep->declQuad(c+31,"cpu ex_agu_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+264,"cpu ex_cgu_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+266,"cpu ex_branch_jump", false,-1);
        tracep->declBit(c+24,"cpu wb_rd_wen", false,-1);
        tracep->declBus(c+25,"cpu wb_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+29,"cpu wb_rd_wdata", false,-1, 63,0);
        tracep->declBit(c+256,"cpu pc_reg_u clk", false,-1);
        tracep->declBit(c+257,"cpu pc_reg_u rst", false,-1);
        tracep->declQuad(c+3,"cpu pc_reg_u pc_next_i", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu pc_reg_u IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+267,"cpu pc_reg_u ena", false,-1);
        tracep->declBus(c+268,"cpu pc_reg_u pc_dff DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+269,"cpu pc_reg_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+256,"cpu pc_reg_u pc_dff clk", false,-1);
        tracep->declBit(c+257,"cpu pc_reg_u pc_dff rst", false,-1);
        tracep->declBit(c+267,"cpu pc_reg_u pc_dff ena", false,-1);
        tracep->declQuad(c+3,"cpu pc_reg_u pc_dff d", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu pc_reg_u pc_dff q", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu pc_reg_u pc_dff q_r", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu instr_fetch_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu instr_fetch_u if_pc_next_o", false,-1, 63,0);
        tracep->declBus(c+9,"cpu instr_fetch_u if_instr_o", false,-1, 31,0);
        tracep->declBit(c+5,"cpu instr_fetch_u if_jalr_rs1_en_o", false,-1);
        tracep->declBus(c+6,"cpu instr_fetch_u if_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu instr_fetch_u jalr_rs1_rdata_i", false,-1, 63,0);
        tracep->declBit(c+258,"cpu instr_fetch_u if_pc_misalign_o", false,-1);
        tracep->declBit(c+258,"cpu instr_fetch_u if_bus_err_o", false,-1);
        tracep->declBit(c+33,"cpu instr_fetch_u mini_dec_jal", false,-1);
        tracep->declBit(c+5,"cpu instr_fetch_u mini_dec_jalr", false,-1);
        tracep->declBit(c+34,"cpu instr_fetch_u mini_dec_branch", false,-1);
        tracep->declQuad(c+35,"cpu instr_fetch_u mini_dec_imm", false,-1, 63,0);
        tracep->declBit(c+37,"cpu instr_fetch_u bj", false,-1);
        tracep->declQuad(c+38,"cpu instr_fetch_u bj_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"cpu instr_fetch_u bj_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+40,"cpu instr_fetch_u pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+42,"cpu instr_fetch_u pc_add_op2", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu instr_fetch_u if_bus_u pc_i", false,-1, 63,0);
        tracep->declBus(c+9,"cpu instr_fetch_u if_bus_u if_bus_instr_o", false,-1, 31,0);
        tracep->declBit(c+258,"cpu instr_fetch_u if_bus_u if_bus_pc_misalign_o", false,-1);
        tracep->declBit(c+258,"cpu instr_fetch_u if_bus_u if_bus_bus_err_o", false,-1);
        tracep->declBus(c+44,"cpu instr_fetch_u if_bus_u pc", false,-1, 9,0);
        tracep->declBus(c+9,"cpu instr_fetch_u if_mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+33,"cpu instr_fetch_u if_mini_dec_u mini_dec_jal_o", false,-1);
        tracep->declBit(c+5,"cpu instr_fetch_u if_mini_dec_u mini_dec_jalr_o", false,-1);
        tracep->declBit(c+34,"cpu instr_fetch_u if_mini_dec_u mini_dec_branch_o", false,-1);
        tracep->declBus(c+6,"cpu instr_fetch_u if_mini_dec_u mini_dec_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+35,"cpu instr_fetch_u if_mini_dec_u mini_dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+45,"cpu instr_fetch_u if_mini_dec_u opcode_info", false,-1, 11,0);
        tracep->declBus(c+9,"cpu instr_fetch_u if_mini_dec_u idu instr_i", false,-1, 31,0);
        tracep->declBus(c+6,"cpu instr_fetch_u if_mini_dec_u idu id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+10,"cpu instr_fetch_u if_mini_dec_u idu id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+270,"cpu instr_fetch_u if_mini_dec_u idu rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+272,"cpu instr_fetch_u if_mini_dec_u idu rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+46,"cpu instr_fetch_u if_mini_dec_u idu id_csr_wen_o", false,-1);
        tracep->declBus(c+16,"cpu instr_fetch_u if_mini_dec_u idu id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+274,"cpu instr_fetch_u if_mini_dec_u idu csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+45,"cpu instr_fetch_u if_mini_dec_u idu id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+47,"cpu instr_fetch_u if_mini_dec_u idu id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+19,"cpu instr_fetch_u if_mini_dec_u idu id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+48,"cpu instr_fetch_u if_mini_dec_u idu id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+49,"cpu instr_fetch_u if_mini_dec_u idu id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+270,"cpu instr_fetch_u if_mini_dec_u idu id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+272,"cpu instr_fetch_u if_mini_dec_u idu id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+35,"cpu instr_fetch_u if_mini_dec_u idu id_imm_o", false,-1, 63,0);
        tracep->declBit(c+50,"cpu instr_fetch_u if_mini_dec_u idu id_rd_wen_o", false,-1);
        tracep->declBus(c+25,"cpu instr_fetch_u if_mini_dec_u idu id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+276,"cpu instr_fetch_u if_mini_dec_u idu id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+278,"cpu instr_fetch_u if_mini_dec_u idu id_ilegl_instr_o", false,-1);
        tracep->declBit(c+51,"cpu instr_fetch_u if_mini_dec_u idu id_ecall_o", false,-1);
        tracep->declBit(c+52,"cpu instr_fetch_u if_mini_dec_u idu id_ebreak_o", false,-1);
        tracep->declBit(c+53,"cpu instr_fetch_u if_mini_dec_u idu id_mret_o", false,-1);
        tracep->declBus(c+54,"cpu instr_fetch_u if_mini_dec_u idu opcode", false,-1, 6,0);
        tracep->declBus(c+25,"cpu instr_fetch_u if_mini_dec_u idu rd", false,-1, 4,0);
        tracep->declBus(c+55,"cpu instr_fetch_u if_mini_dec_u idu fun3", false,-1, 2,0);
        tracep->declBus(c+6,"cpu instr_fetch_u if_mini_dec_u idu rs1", false,-1, 4,0);
        tracep->declBus(c+10,"cpu instr_fetch_u if_mini_dec_u idu rs2", false,-1, 4,0);
        tracep->declBus(c+56,"cpu instr_fetch_u if_mini_dec_u idu fun7", false,-1, 6,0);
        tracep->declBit(c+57,"cpu instr_fetch_u if_mini_dec_u idu rv64_alu_imm", false,-1);
        tracep->declBit(c+58,"cpu instr_fetch_u if_mini_dec_u idu rv64_alu_imm_w", false,-1);
        tracep->declBit(c+59,"cpu instr_fetch_u if_mini_dec_u idu rv64_alu", false,-1);
        tracep->declBit(c+60,"cpu instr_fetch_u if_mini_dec_u idu rv64_alu_w", false,-1);
        tracep->declBit(c+61,"cpu instr_fetch_u if_mini_dec_u idu rv64_branch", false,-1);
        tracep->declBit(c+62,"cpu instr_fetch_u if_mini_dec_u idu rv64_jal", false,-1);
        tracep->declBit(c+63,"cpu instr_fetch_u if_mini_dec_u idu rv64_jalr", false,-1);
        tracep->declBit(c+64,"cpu instr_fetch_u if_mini_dec_u idu rv64_load", false,-1);
        tracep->declBit(c+65,"cpu instr_fetch_u if_mini_dec_u idu rv64_store", false,-1);
        tracep->declBit(c+66,"cpu instr_fetch_u if_mini_dec_u idu rv64_lui", false,-1);
        tracep->declBit(c+67,"cpu instr_fetch_u if_mini_dec_u idu rv64_auipc", false,-1);
        tracep->declBit(c+68,"cpu instr_fetch_u if_mini_dec_u idu rv64_system", false,-1);
        tracep->declBit(c+69,"cpu instr_fetch_u if_mini_dec_u idu rv64_addi", false,-1);
        tracep->declBit(c+70,"cpu instr_fetch_u if_mini_dec_u idu rv64_addiw", false,-1);
        tracep->declBit(c+71,"cpu instr_fetch_u if_mini_dec_u idu rv64_slli", false,-1);
        tracep->declBit(c+72,"cpu instr_fetch_u if_mini_dec_u idu rv64_slliw", false,-1);
        tracep->declBit(c+73,"cpu instr_fetch_u if_mini_dec_u idu rv64_slti", false,-1);
        tracep->declBit(c+74,"cpu instr_fetch_u if_mini_dec_u idu rv64_sltui", false,-1);
        tracep->declBit(c+75,"cpu instr_fetch_u if_mini_dec_u idu rv64_xori", false,-1);
        tracep->declBit(c+76,"cpu instr_fetch_u if_mini_dec_u idu rv64_srli", false,-1);
        tracep->declBit(c+77,"cpu instr_fetch_u if_mini_dec_u idu rv64_srliw", false,-1);
        tracep->declBit(c+78,"cpu instr_fetch_u if_mini_dec_u idu rv64_srai", false,-1);
        tracep->declBit(c+79,"cpu instr_fetch_u if_mini_dec_u idu rv64_sraiw", false,-1);
        tracep->declBit(c+80,"cpu instr_fetch_u if_mini_dec_u idu rv64_ori", false,-1);
        tracep->declBit(c+81,"cpu instr_fetch_u if_mini_dec_u idu rv64_andi", false,-1);
        tracep->declBit(c+82,"cpu instr_fetch_u if_mini_dec_u idu rv64_add", false,-1);
        tracep->declBit(c+83,"cpu instr_fetch_u if_mini_dec_u idu rv64_addw", false,-1);
        tracep->declBit(c+84,"cpu instr_fetch_u if_mini_dec_u idu rv64_sub", false,-1);
        tracep->declBit(c+85,"cpu instr_fetch_u if_mini_dec_u idu rv64_subw", false,-1);
        tracep->declBit(c+86,"cpu instr_fetch_u if_mini_dec_u idu rv64_sll", false,-1);
        tracep->declBit(c+87,"cpu instr_fetch_u if_mini_dec_u idu rv64_sllw", false,-1);
        tracep->declBit(c+88,"cpu instr_fetch_u if_mini_dec_u idu rv64_slt", false,-1);
        tracep->declBit(c+89,"cpu instr_fetch_u if_mini_dec_u idu rv64_sltu", false,-1);
        tracep->declBit(c+90,"cpu instr_fetch_u if_mini_dec_u idu rv64_xor", false,-1);
        tracep->declBit(c+91,"cpu instr_fetch_u if_mini_dec_u idu rv64_srl", false,-1);
        tracep->declBit(c+92,"cpu instr_fetch_u if_mini_dec_u idu rv64_srlw", false,-1);
        tracep->declBit(c+93,"cpu instr_fetch_u if_mini_dec_u idu rv64_sra", false,-1);
        tracep->declBit(c+94,"cpu instr_fetch_u if_mini_dec_u idu rv64_sraw", false,-1);
        tracep->declBit(c+95,"cpu instr_fetch_u if_mini_dec_u idu rv64_or", false,-1);
        tracep->declBit(c+96,"cpu instr_fetch_u if_mini_dec_u idu rv64_and", false,-1);
        tracep->declBit(c+97,"cpu instr_fetch_u if_mini_dec_u idu rv64_beq", false,-1);
        tracep->declBit(c+98,"cpu instr_fetch_u if_mini_dec_u idu rv64_bne", false,-1);
        tracep->declBit(c+99,"cpu instr_fetch_u if_mini_dec_u idu rv64_blt", false,-1);
        tracep->declBit(c+100,"cpu instr_fetch_u if_mini_dec_u idu rv64_bge", false,-1);
        tracep->declBit(c+101,"cpu instr_fetch_u if_mini_dec_u idu rv64_bltu", false,-1);
        tracep->declBit(c+102,"cpu instr_fetch_u if_mini_dec_u idu rv64_bgeu", false,-1);
        tracep->declBit(c+103,"cpu instr_fetch_u if_mini_dec_u idu rv64_lb", false,-1);
        tracep->declBit(c+104,"cpu instr_fetch_u if_mini_dec_u idu rv64_lh", false,-1);
        tracep->declBit(c+105,"cpu instr_fetch_u if_mini_dec_u idu rv64_lw", false,-1);
        tracep->declBit(c+106,"cpu instr_fetch_u if_mini_dec_u idu rv64_ld", false,-1);
        tracep->declBit(c+107,"cpu instr_fetch_u if_mini_dec_u idu rv64_lbu", false,-1);
        tracep->declBit(c+108,"cpu instr_fetch_u if_mini_dec_u idu rv64_lhu", false,-1);
        tracep->declBit(c+109,"cpu instr_fetch_u if_mini_dec_u idu rv64_lwu", false,-1);
        tracep->declBit(c+110,"cpu instr_fetch_u if_mini_dec_u idu rv64_sb", false,-1);
        tracep->declBit(c+111,"cpu instr_fetch_u if_mini_dec_u idu rv64_sh", false,-1);
        tracep->declBit(c+112,"cpu instr_fetch_u if_mini_dec_u idu rv64_sw", false,-1);
        tracep->declBit(c+113,"cpu instr_fetch_u if_mini_dec_u idu rv64_sd", false,-1);
        tracep->declBit(c+51,"cpu instr_fetch_u if_mini_dec_u idu rv64_ecall", false,-1);
        tracep->declBit(c+52,"cpu instr_fetch_u if_mini_dec_u idu rv64_ebreak", false,-1);
        tracep->declBit(c+53,"cpu instr_fetch_u if_mini_dec_u idu rv64_mret", false,-1);
        tracep->declBit(c+114,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrw", false,-1);
        tracep->declBit(c+115,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrs", false,-1);
        tracep->declBit(c+116,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrc", false,-1);
        tracep->declBit(c+117,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrwi", false,-1);
        tracep->declBit(c+118,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrsi", false,-1);
        tracep->declBit(c+119,"cpu instr_fetch_u if_mini_dec_u idu rv64_csrrci", false,-1);
        tracep->declBit(c+120,"cpu instr_fetch_u if_mini_dec_u idu rv64_need_rs1", false,-1);
        tracep->declBit(c+121,"cpu instr_fetch_u if_mini_dec_u idu rv64_need_rs2", false,-1);
        tracep->declBit(c+50,"cpu instr_fetch_u if_mini_dec_u idu rv64_need_rd", false,-1);
        tracep->declBit(c+46,"cpu instr_fetch_u if_mini_dec_u idu rv64_need_csr", false,-1);
        tracep->declQuad(c+122,"cpu instr_fetch_u if_mini_dec_u idu rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+124,"cpu instr_fetch_u if_mini_dec_u idu rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+126,"cpu instr_fetch_u if_mini_dec_u idu rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+128,"cpu instr_fetch_u if_mini_dec_u idu rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+130,"cpu instr_fetch_u if_mini_dec_u idu rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+132,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm_sel_i", false,-1);
        tracep->declBit(c+65,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm_sel_s", false,-1);
        tracep->declBit(c+61,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm_sel_b", false,-1);
        tracep->declBit(c+62,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm_sel_j", false,-1);
        tracep->declBit(c+133,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+35,"cpu instr_fetch_u if_mini_dec_u idu rv64_imm", false,-1, 63,0);
        tracep->declBus(c+9,"cpu id_u instr_i", false,-1, 31,0);
        tracep->declBus(c+6,"cpu id_u id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+10,"cpu id_u id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu id_u rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu id_u rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+15,"cpu id_u id_csr_wen_o", false,-1);
        tracep->declBus(c+16,"cpu id_u id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+259,"cpu id_u csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+17,"cpu id_u id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+18,"cpu id_u id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+19,"cpu id_u id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+20,"cpu id_u id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+21,"cpu id_u id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+11,"cpu id_u id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu id_u id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu id_u id_imm_o", false,-1, 63,0);
        tracep->declBit(c+24,"cpu id_u id_rd_wen_o", false,-1);
        tracep->declBus(c+25,"cpu id_u id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+261,"cpu id_u id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+263,"cpu id_u id_ilegl_instr_o", false,-1);
        tracep->declBit(c+26,"cpu id_u id_ecall_o", false,-1);
        tracep->declBit(c+27,"cpu id_u id_ebreak_o", false,-1);
        tracep->declBit(c+28,"cpu id_u id_mret_o", false,-1);
        tracep->declBus(c+54,"cpu id_u opcode", false,-1, 6,0);
        tracep->declBus(c+25,"cpu id_u rd", false,-1, 4,0);
        tracep->declBus(c+55,"cpu id_u fun3", false,-1, 2,0);
        tracep->declBus(c+6,"cpu id_u rs1", false,-1, 4,0);
        tracep->declBus(c+10,"cpu id_u rs2", false,-1, 4,0);
        tracep->declBus(c+56,"cpu id_u fun7", false,-1, 6,0);
        tracep->declBit(c+57,"cpu id_u rv64_alu_imm", false,-1);
        tracep->declBit(c+58,"cpu id_u rv64_alu_imm_w", false,-1);
        tracep->declBit(c+59,"cpu id_u rv64_alu", false,-1);
        tracep->declBit(c+60,"cpu id_u rv64_alu_w", false,-1);
        tracep->declBit(c+61,"cpu id_u rv64_branch", false,-1);
        tracep->declBit(c+62,"cpu id_u rv64_jal", false,-1);
        tracep->declBit(c+63,"cpu id_u rv64_jalr", false,-1);
        tracep->declBit(c+64,"cpu id_u rv64_load", false,-1);
        tracep->declBit(c+65,"cpu id_u rv64_store", false,-1);
        tracep->declBit(c+66,"cpu id_u rv64_lui", false,-1);
        tracep->declBit(c+67,"cpu id_u rv64_auipc", false,-1);
        tracep->declBit(c+68,"cpu id_u rv64_system", false,-1);
        tracep->declBit(c+69,"cpu id_u rv64_addi", false,-1);
        tracep->declBit(c+70,"cpu id_u rv64_addiw", false,-1);
        tracep->declBit(c+71,"cpu id_u rv64_slli", false,-1);
        tracep->declBit(c+72,"cpu id_u rv64_slliw", false,-1);
        tracep->declBit(c+73,"cpu id_u rv64_slti", false,-1);
        tracep->declBit(c+74,"cpu id_u rv64_sltui", false,-1);
        tracep->declBit(c+75,"cpu id_u rv64_xori", false,-1);
        tracep->declBit(c+76,"cpu id_u rv64_srli", false,-1);
        tracep->declBit(c+77,"cpu id_u rv64_srliw", false,-1);
        tracep->declBit(c+78,"cpu id_u rv64_srai", false,-1);
        tracep->declBit(c+79,"cpu id_u rv64_sraiw", false,-1);
        tracep->declBit(c+80,"cpu id_u rv64_ori", false,-1);
        tracep->declBit(c+81,"cpu id_u rv64_andi", false,-1);
        tracep->declBit(c+82,"cpu id_u rv64_add", false,-1);
        tracep->declBit(c+83,"cpu id_u rv64_addw", false,-1);
        tracep->declBit(c+84,"cpu id_u rv64_sub", false,-1);
        tracep->declBit(c+85,"cpu id_u rv64_subw", false,-1);
        tracep->declBit(c+86,"cpu id_u rv64_sll", false,-1);
        tracep->declBit(c+87,"cpu id_u rv64_sllw", false,-1);
        tracep->declBit(c+88,"cpu id_u rv64_slt", false,-1);
        tracep->declBit(c+89,"cpu id_u rv64_sltu", false,-1);
        tracep->declBit(c+90,"cpu id_u rv64_xor", false,-1);
        tracep->declBit(c+91,"cpu id_u rv64_srl", false,-1);
        tracep->declBit(c+92,"cpu id_u rv64_srlw", false,-1);
        tracep->declBit(c+93,"cpu id_u rv64_sra", false,-1);
        tracep->declBit(c+94,"cpu id_u rv64_sraw", false,-1);
        tracep->declBit(c+95,"cpu id_u rv64_or", false,-1);
        tracep->declBit(c+96,"cpu id_u rv64_and", false,-1);
        tracep->declBit(c+97,"cpu id_u rv64_beq", false,-1);
        tracep->declBit(c+98,"cpu id_u rv64_bne", false,-1);
        tracep->declBit(c+99,"cpu id_u rv64_blt", false,-1);
        tracep->declBit(c+100,"cpu id_u rv64_bge", false,-1);
        tracep->declBit(c+101,"cpu id_u rv64_bltu", false,-1);
        tracep->declBit(c+102,"cpu id_u rv64_bgeu", false,-1);
        tracep->declBit(c+103,"cpu id_u rv64_lb", false,-1);
        tracep->declBit(c+104,"cpu id_u rv64_lh", false,-1);
        tracep->declBit(c+105,"cpu id_u rv64_lw", false,-1);
        tracep->declBit(c+106,"cpu id_u rv64_ld", false,-1);
        tracep->declBit(c+107,"cpu id_u rv64_lbu", false,-1);
        tracep->declBit(c+108,"cpu id_u rv64_lhu", false,-1);
        tracep->declBit(c+109,"cpu id_u rv64_lwu", false,-1);
        tracep->declBit(c+110,"cpu id_u rv64_sb", false,-1);
        tracep->declBit(c+111,"cpu id_u rv64_sh", false,-1);
        tracep->declBit(c+112,"cpu id_u rv64_sw", false,-1);
        tracep->declBit(c+113,"cpu id_u rv64_sd", false,-1);
        tracep->declBit(c+26,"cpu id_u rv64_ecall", false,-1);
        tracep->declBit(c+27,"cpu id_u rv64_ebreak", false,-1);
        tracep->declBit(c+28,"cpu id_u rv64_mret", false,-1);
        tracep->declBit(c+134,"cpu id_u rv64_csrrw", false,-1);
        tracep->declBit(c+135,"cpu id_u rv64_csrrs", false,-1);
        tracep->declBit(c+136,"cpu id_u rv64_csrrc", false,-1);
        tracep->declBit(c+137,"cpu id_u rv64_csrrwi", false,-1);
        tracep->declBit(c+138,"cpu id_u rv64_csrrsi", false,-1);
        tracep->declBit(c+139,"cpu id_u rv64_csrrci", false,-1);
        tracep->declBit(c+140,"cpu id_u rv64_need_rs1", false,-1);
        tracep->declBit(c+121,"cpu id_u rv64_need_rs2", false,-1);
        tracep->declBit(c+24,"cpu id_u rv64_need_rd", false,-1);
        tracep->declBit(c+15,"cpu id_u rv64_need_csr", false,-1);
        tracep->declQuad(c+122,"cpu id_u rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+124,"cpu id_u rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+126,"cpu id_u rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+128,"cpu id_u rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+130,"cpu id_u rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+132,"cpu id_u rv64_imm_sel_i", false,-1);
        tracep->declBit(c+65,"cpu id_u rv64_imm_sel_s", false,-1);
        tracep->declBit(c+61,"cpu id_u rv64_imm_sel_b", false,-1);
        tracep->declBit(c+62,"cpu id_u rv64_imm_sel_j", false,-1);
        tracep->declBit(c+133,"cpu id_u rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+22,"cpu id_u rv64_imm", false,-1, 63,0);
        tracep->declBit(c+256,"cpu regfile_u clk", false,-1);
        tracep->declBit(c+257,"cpu regfile_u reset", false,-1);
        tracep->declBit(c+24,"cpu regfile_u rd_wen_i", false,-1);
        tracep->declBus(c+25,"cpu regfile_u rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+29,"cpu regfile_u rd_wdata_i", false,-1, 63,0);
        tracep->declBus(c+6,"cpu regfile_u rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+10,"cpu regfile_u rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu regfile_u rf_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu regfile_u rf_rs2_rdata_o", false,-1, 63,0);
        tracep->declBus(c+6,"cpu regfile_u jalr_rs1_idx_i", false,-1, 4,0);
        tracep->declBit(c+5,"cpu regfile_u jalr_rs1_en_i", false,-1);
        tracep->declQuad(c+7,"cpu regfile_u rf_jalr_rs1_rdata_o", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+141+i*2,"cpu regfile_u reg_data", true,(i+1), 63,0);}}
        tracep->declBus(c+203,"cpu regfile_u i", false,-1, 31,0);
        tracep->declBus(c+17,"cpu ex_u opcode_info_i", false,-1, 11,0);
        tracep->declBus(c+18,"cpu ex_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+19,"cpu ex_u branch_info_i", false,-1, 5,0);
        tracep->declBus(c+20,"cpu ex_u ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+21,"cpu ex_u csr_info_i", false,-1, 5,0);
        tracep->declQuad(c+1,"cpu ex_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu ex_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu ex_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu ex_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+29,"cpu ex_u ex_alu_rd_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+31,"cpu ex_u ex_agu_mem_addr_o", false,-1, 63,0);
        tracep->declQuad(c+264,"cpu ex_u ex_cgu_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+266,"cpu ex_u ex_branch_jump_o", false,-1);
        tracep->declBus(c+17,"cpu ex_u alu_u opcode_info_i", false,-1, 11,0);
        tracep->declBus(c+18,"cpu ex_u alu_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+19,"cpu ex_u alu_u branch_info_i", false,-1, 5,0);
        tracep->declQuad(c+1,"cpu ex_u alu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu ex_u alu_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu ex_u alu_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu ex_u alu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+29,"cpu ex_u alu_u alu_res_o", false,-1, 63,0);
        tracep->declBit(c+266,"cpu ex_u alu_u alu_branch_jump_o", false,-1);
        tracep->declBit(c+204,"cpu ex_u alu_u op_alu_imm", false,-1);
        tracep->declBit(c+205,"cpu ex_u alu_u op_alu_imm_w", false,-1);
        tracep->declBit(c+206,"cpu ex_u alu_u op_alu", false,-1);
        tracep->declBit(c+207,"cpu ex_u alu_u op_alu_w", false,-1);
        tracep->declBit(c+208,"cpu ex_u alu_u op_branch", false,-1);
        tracep->declBit(c+209,"cpu ex_u alu_u op_jal", false,-1);
        tracep->declBit(c+210,"cpu ex_u alu_u op_jalr", false,-1);
        tracep->declBit(c+211,"cpu ex_u alu_u op_lui", false,-1);
        tracep->declBit(c+212,"cpu ex_u alu_u op_auipc", false,-1);
        tracep->declBit(c+213,"cpu ex_u alu_u alu_add", false,-1);
        tracep->declBit(c+214,"cpu ex_u alu_u alu_sub", false,-1);
        tracep->declBit(c+215,"cpu ex_u alu_u alu_sll", false,-1);
        tracep->declBit(c+216,"cpu ex_u alu_u alu_slt", false,-1);
        tracep->declBit(c+217,"cpu ex_u alu_u alu_sltu", false,-1);
        tracep->declBit(c+218,"cpu ex_u alu_u alu_xor", false,-1);
        tracep->declBit(c+219,"cpu ex_u alu_u alu_srl", false,-1);
        tracep->declBit(c+220,"cpu ex_u alu_u alu_sra", false,-1);
        tracep->declBit(c+221,"cpu ex_u alu_u alu_or", false,-1);
        tracep->declBit(c+222,"cpu ex_u alu_u alu_and", false,-1);
        tracep->declBit(c+97,"cpu ex_u alu_u branch_beq", false,-1);
        tracep->declBit(c+98,"cpu ex_u alu_u branch_bne", false,-1);
        tracep->declBit(c+99,"cpu ex_u alu_u branch_blt", false,-1);
        tracep->declBit(c+100,"cpu ex_u alu_u branch_bge", false,-1);
        tracep->declBit(c+101,"cpu ex_u alu_u branch_bltu", false,-1);
        tracep->declBit(c+102,"cpu ex_u alu_u branch_bgeu", false,-1);
        tracep->declBit(c+223,"cpu ex_u alu_u res_sel_add", false,-1);
        tracep->declBit(c+224,"cpu ex_u alu_u res_sel_sub", false,-1);
        tracep->declBit(c+225,"cpu ex_u alu_u res_sel_add_sub", false,-1);
        tracep->declBit(c+215,"cpu ex_u alu_u res_sel_sll", false,-1);
        tracep->declBit(c+216,"cpu ex_u alu_u res_sel_slt", false,-1);
        tracep->declBit(c+217,"cpu ex_u alu_u res_sel_sltu", false,-1);
        tracep->declBit(c+218,"cpu ex_u alu_u res_sel_xor", false,-1);
        tracep->declBit(c+219,"cpu ex_u alu_u res_sel_srl", false,-1);
        tracep->declBit(c+220,"cpu ex_u alu_u res_sel_sra", false,-1);
        tracep->declBit(c+221,"cpu ex_u alu_u res_sel_or", false,-1);
        tracep->declBit(c+222,"cpu ex_u alu_u res_sel_and", false,-1);
        tracep->declQuad(c+226,"cpu ex_u alu_u alu_op1", false,-1, 63,0);
        tracep->declQuad(c+228,"cpu ex_u alu_u alu_op2", false,-1, 63,0);
        tracep->declQuad(c+230,"cpu ex_u alu_u alu_add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+232,"cpu ex_u alu_u alu_sll_res", false,-1, 63,0);
        tracep->declQuad(c+234,"cpu ex_u alu_u alu_slt_res", false,-1, 63,0);
        tracep->declQuad(c+279,"cpu ex_u alu_u alu_sltu_res", false,-1, 63,0);
        tracep->declQuad(c+236,"cpu ex_u alu_u alu_xor_res", false,-1, 63,0);
        tracep->declQuad(c+238,"cpu ex_u alu_u alu_srl_res", false,-1, 63,0);
        tracep->declQuad(c+240,"cpu ex_u alu_u alu_sra_res", false,-1, 63,0);
        tracep->declQuad(c+242,"cpu ex_u alu_u alu_or_res", false,-1, 63,0);
        tracep->declQuad(c+244,"cpu ex_u alu_u alu_and_res", false,-1, 63,0);
        tracep->declQuad(c+246,"cpu ex_u alu_u alu_res", false,-1, 63,0);
        tracep->declBit(c+248,"cpu ex_u alu_u sel_w_res", false,-1);
        tracep->declBus(c+249,"cpu ex_u alu_u alu_res_truncat", false,-1, 31,0);
        tracep->declQuad(c+250,"cpu ex_u alu_u alu_res_w", false,-1, 63,0);
        tracep->declBit(c+252,"cpu ex_u alu_u ne", false,-1);
        tracep->declBit(c+253,"cpu ex_u alu_u eq", false,-1);
        tracep->declBit(c+254,"cpu ex_u alu_u lt", false,-1);
        tracep->declBit(c+255,"cpu ex_u alu_u ge", false,-1);
        tracep->declBit(c+281,"cpu ex_u alu_u ltu", false,-1);
        tracep->declBit(c+282,"cpu ex_u alu_u geu", false,-1);
        tracep->declQuad(c+11,"cpu ex_u agu_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu ex_u agu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+31,"cpu ex_u agu_u agu_mem_addr_o", false,-1, 63,0);
        tracep->declBus(c+21,"cpu ex_u u_cgu csr_info_i", false,-1, 5,0);
        tracep->declQuad(c+11,"cpu ex_u u_cgu rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+22,"cpu ex_u u_cgu imm_i", false,-1, 63,0);
        tracep->declQuad(c+264,"cpu ex_u u_cgu cgu_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+134,"cpu ex_u u_cgu csrrw", false,-1);
        tracep->declBit(c+135,"cpu ex_u u_cgu csrrs", false,-1);
        tracep->declBit(c+136,"cpu ex_u u_cgu csrrc", false,-1);
        tracep->declBit(c+137,"cpu ex_u u_cgu csrrwi", false,-1);
        tracep->declBit(c+138,"cpu ex_u u_cgu csrrsi", false,-1);
        tracep->declBit(c+139,"cpu ex_u u_cgu csrrci", false,-1);
        tracep->declBit(c+24,"cpu u_wb rd_en_i", false,-1);
        tracep->declBus(c+25,"cpu u_wb rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+29,"cpu u_wb alu_rd_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+283,"cpu u_wb mem_rd_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+285,"cpu u_wb csr_rd_wdata_i", false,-1, 63,0);
        tracep->declBit(c+24,"cpu u_wb wb_rd_en_o", false,-1);
        tracep->declBus(c+25,"cpu u_wb wb_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+29,"cpu u_wb wb_rd_wdata_o", false,-1, 63,0);
    }
}

void Vcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu___024root__traceRegister(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu___024root__traceCleanup, vlSelf);
    }
}

void Vcpu___024root__traceFullSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu___024root* const __restrict vlSelf = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu___024root__traceFullSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r),64);
        tracep->fullQData(oldp+3,((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                     ? ((IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                         ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                         : ((0x20U 
                                             & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                             ? ((1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                      >> 5U)) 
                                                    | (0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->cpu__DOT__if_instr 
                                                           >> 0xfU)))))
                                                 ? 0ULL
                                                 : 
                                                ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0ULL))
                                             : 0ULL))
                                     : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r) 
                                   + ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                       ? vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                       : 4ULL))),64);
        tracep->fullBit(oldp+5,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                       >> 5U))));
        tracep->fullCData(oldp+6,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                            >> 0xfU))),5);
        tracep->fullQData(oldp+7,(((1U & ((~ ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                              >> 5U)) 
                                          | (0U == 
                                             (0x1fU 
                                              & (vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU)))))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                               ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                              [(0x1fU 
                                                & ((vlSelf->cpu__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
        tracep->fullIData(oldp+9,(vlSelf->cpu__DOT__if_instr),32);
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+11,(vlSelf->cpu__DOT__rf_rs1_rdata),64);
        tracep->fullQData(oldp+13,(((0U == (0x1fU & 
                                            (vlSelf->cpu__DOT__if_instr 
                                             >> 0x14U)))
                                     ? 0ULL : ((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & ((vlSelf->cpu__DOT__if_instr 
                                                     >> 0x14U) 
                                                    - (IData)(1U))))
                                                ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                               [(0x1fU 
                                                 & ((vlSelf->cpu__DOT__if_instr 
                                                     >> 0x14U) 
                                                    - (IData)(1U)))]
                                                : 0ULL))),64);
        tracep->fullBit(oldp+15,(((((((IData)((0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                      | (IData)((0x2073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))) 
                                     | (IData)((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))) 
                                    | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+16,((vlSelf->cpu__DOT__if_instr 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+17,(vlSelf->cpu__DOT__id_opcode_info),12);
        tracep->fullSData(oldp+18,(vlSelf->cpu__DOT__id_alu_info),10);
        tracep->fullCData(oldp+19,((((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))))))))),6);
        tracep->fullSData(oldp+20,((((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                     << 0xaU) | (((IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu__DOT__if_instr))) 
                                                  << 9U) 
                                                 | (((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     << 8U) 
                                                    | (((IData)(
                                                                (0x3003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        << 7U) 
                                                       | (((IData)(
                                                                   (0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu__DOT__if_instr))) 
                                                           << 6U) 
                                                          | (((IData)(
                                                                      (0x5003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              << 5U) 
                                                             | (((IData)(
                                                                         (0x6003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu__DOT__if_instr))) 
                                                                 << 4U) 
                                                                | (((IData)(
                                                                            (0x23U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                                    << 3U) 
                                                                   | (((IData)(
                                                                               (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                       << 2U) 
                                                                      | (((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                          << 1U) 
                                                                         | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))))))))))))),11);
        tracep->fullCData(oldp+21,((((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))))))),6);
        tracep->fullQData(oldp+22,(vlSelf->cpu__DOT__id_u__DOT__rv64_imm),64);
        tracep->fullBit(oldp+24,((((((~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullCData(oldp+25,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+26,(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall));
        tracep->fullBit(oldp+27,(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak));
        tracep->fullBit(oldp+28,(vlSelf->cpu__DOT__id_u__DOT__rv64_mret));
        tracep->fullQData(oldp+29,(((IData)((0U != 
                                             (0x500U 
                                              & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)))
                                     : vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)),64);
        tracep->fullQData(oldp+31,((vlSelf->cpu__DOT__rf_rs1_rdata 
                                    + vlSelf->cpu__DOT__id_u__DOT__rv64_imm)),64);
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                        >> 6U))));
        tracep->fullBit(oldp+34,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                        >> 7U))));
        tracep->fullQData(oldp+35,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
        tracep->fullBit(oldp+37,(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj));
        tracep->fullQData(oldp+38,(((IData)((0U != 
                                             (0xc0U 
                                              & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                     ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                     : ((0x20U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                         ? ((1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                     >> 5U)) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->cpu__DOT__if_instr 
                                                          >> 0xfU)))))
                                             ? 0ULL
                                             : ((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & ((vlSelf->cpu__DOT__if_instr 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                                 ? 
                                                vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                [(0x1fU 
                                                  & ((vlSelf->cpu__DOT__if_instr 
                                                      >> 0xfU) 
                                                     - (IData)(1U)))]
                                                 : 0ULL))
                                         : 0ULL))),64);
        tracep->fullQData(oldp+40,(((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                     ? ((IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                         ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                         : ((0x20U 
                                             & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                             ? ((1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                      >> 5U)) 
                                                    | (0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->cpu__DOT__if_instr 
                                                           >> 0xfU)))))
                                                 ? 0ULL
                                                 : 
                                                ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0ULL))
                                             : 0ULL))
                                     : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)),64);
        tracep->fullQData(oldp+42,(((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                     ? vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                     : 4ULL)),64);
        tracep->fullSData(oldp+44,((0x3ffU & (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))),10);
        tracep->fullSData(oldp+45,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info),12);
        tracep->fullBit(oldp+46,(((((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+47,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
        tracep->fullSData(oldp+48,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
        tracep->fullCData(oldp+49,((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                     << 5U) | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
        tracep->fullBit(oldp+50,((((((~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+51,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
        tracep->fullBit(oldp+52,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
        tracep->fullBit(oldp+53,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret));
        tracep->fullCData(oldp+54,((0x7fU & vlSelf->cpu__DOT__if_instr)),7);
        tracep->fullCData(oldp+55,((7U & (vlSelf->cpu__DOT__if_instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+56,((vlSelf->cpu__DOT__if_instr 
                                    >> 0x19U)),7);
        tracep->fullBit(oldp+57,((0x13U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+58,((0x1bU == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+59,((0x33U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+60,((0x3bU == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+61,((0x63U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+62,((0x6fU == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+63,((0x67U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+64,((3U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+65,((0x23U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+66,((0x37U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+67,((0x17U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+68,((0x73U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
        tracep->fullBit(oldp+69,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+70,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+71,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+72,(((IData)((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+73,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+74,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+75,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+76,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+77,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+78,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+79,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+80,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+81,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+82,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+83,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+84,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+85,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+86,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+87,(((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+88,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+89,(((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+90,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+91,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+92,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+93,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+94,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+95,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+96,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr))) 
                                  & (0U == (vlSelf->cpu__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+97,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+98,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+99,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+100,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+101,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+102,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+103,((IData)((3U == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+104,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+105,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+106,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+107,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+108,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+109,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+110,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+111,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+112,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+113,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+114,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
        tracep->fullBit(oldp+115,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
        tracep->fullBit(oldp+116,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
        tracep->fullBit(oldp+117,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+118,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+119,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
        tracep->fullBit(oldp+120,((((((((((0x37U != 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr))) 
                                        & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
        tracep->fullBit(oldp+121,(((((0x33U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullQData(oldp+122,((((- (QData)((IData)(
                                                         (vlSelf->cpu__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+124,((((- (QData)((IData)(
                                                         (vlSelf->cpu__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->cpu__DOT__if_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->cpu__DOT__if_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+126,((((- (QData)((IData)(
                                                         (vlSelf->cpu__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->cpu__DOT__if_instr 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->cpu__DOT__if_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->cpu__DOT__if_instr 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+128,((((- (QData)((IData)(
                                                         (vlSelf->cpu__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->cpu__DOT__if_instr 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->cpu__DOT__if_instr) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->cpu__DOT__if_instr 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->cpu__DOT__if_instr 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+130,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->cpu__DOT__if_instr))))),64);
        tracep->fullBit(oldp+132,(((((0x13U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->cpu__DOT__if_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+133,(((0x37U == (0x7fU 
                                              & vlSelf->cpu__DOT__if_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+134,((IData)((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+135,((IData)((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+136,((IData)((0x3073U 
                                           == (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
        tracep->fullBit(oldp+137,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+138,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+139,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci));
        tracep->fullBit(oldp+140,((((((((((0x37U != 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr))) 
                                        & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret)))));
        tracep->fullQData(oldp+141,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[1]),64);
        tracep->fullQData(oldp+145,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[2]),64);
        tracep->fullQData(oldp+147,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[3]),64);
        tracep->fullQData(oldp+149,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[4]),64);
        tracep->fullQData(oldp+151,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[5]),64);
        tracep->fullQData(oldp+153,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[6]),64);
        tracep->fullQData(oldp+155,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[7]),64);
        tracep->fullQData(oldp+157,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[8]),64);
        tracep->fullQData(oldp+159,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[9]),64);
        tracep->fullQData(oldp+161,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[10]),64);
        tracep->fullQData(oldp+163,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[11]),64);
        tracep->fullQData(oldp+165,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[12]),64);
        tracep->fullQData(oldp+167,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[13]),64);
        tracep->fullQData(oldp+169,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[14]),64);
        tracep->fullQData(oldp+171,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[15]),64);
        tracep->fullQData(oldp+173,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[16]),64);
        tracep->fullQData(oldp+175,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[17]),64);
        tracep->fullQData(oldp+177,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[18]),64);
        tracep->fullQData(oldp+179,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[19]),64);
        tracep->fullQData(oldp+181,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[20]),64);
        tracep->fullQData(oldp+183,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[21]),64);
        tracep->fullQData(oldp+185,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[22]),64);
        tracep->fullQData(oldp+187,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[23]),64);
        tracep->fullQData(oldp+189,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[24]),64);
        tracep->fullQData(oldp+191,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[25]),64);
        tracep->fullQData(oldp+193,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[26]),64);
        tracep->fullQData(oldp+195,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[27]),64);
        tracep->fullQData(oldp+197,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[28]),64);
        tracep->fullQData(oldp+199,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[29]),64);
        tracep->fullQData(oldp+201,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[30]),64);
        tracep->fullIData(oldp+203,(vlSelf->cpu__DOT__regfile_u__DOT__i),32);
        tracep->fullBit(oldp+204,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+205,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+208,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+209,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+210,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+211,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+212,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+213,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+214,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+215,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+216,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+217,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+218,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+219,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+220,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+221,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+222,((1U & (IData)(vlSelf->cpu__DOT__id_alu_info))));
        tracep->fullBit(oldp+223,((1U & (IData)(((0U 
                                                  != 
                                                  (0x200U 
                                                   & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                 | (0U 
                                                    != 
                                                    (0x66U 
                                                     & (IData)(vlSelf->cpu__DOT__id_opcode_info))))))));
        tracep->fullBit(oldp+224,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub));
        tracep->fullBit(oldp+225,((1U & ((IData)(((0U 
                                                   != 
                                                   (0x200U 
                                                    & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                  | (0U 
                                                     != 
                                                     (0x66U 
                                                      & (IData)(vlSelf->cpu__DOT__id_opcode_info))))) 
                                         | (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))));
        tracep->fullQData(oldp+226,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1),64);
        tracep->fullQData(oldp+228,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2),64);
        tracep->fullQData(oldp+230,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res),64);
        tracep->fullQData(oldp+232,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     << (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
        tracep->fullQData(oldp+234,(((1U & (IData)(
                                                   (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                    >> 0x3fU)))
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+236,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res),64);
        tracep->fullQData(oldp+238,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     >> (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
        tracep->fullQData(oldp+240,(VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
        tracep->fullQData(oldp+242,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     | vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+244,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+246,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res),64);
        tracep->fullBit(oldp+248,((IData)((0U != (0x500U 
                                                  & (IData)(vlSelf->cpu__DOT__id_opcode_info))))));
        tracep->fullIData(oldp+249,((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)),32);
        tracep->fullQData(oldp+250,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)))),64);
        tracep->fullBit(oldp+252,((0U != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)));
        tracep->fullBit(oldp+253,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))))));
        tracep->fullBit(oldp+254,((1U & (IData)((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+255,((1U & ((~ (IData)(
                                                    (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                     >> 0x3fU))) 
                                         | (~ (IData)(
                                                      (0U 
                                                       != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)))))));
        tracep->fullBit(oldp+256,(vlSelf->clk));
        tracep->fullBit(oldp+257,(vlSelf->reset));
        tracep->fullBit(oldp+258,(0U));
        tracep->fullQData(oldp+259,(vlSelf->cpu__DOT__csr_rdata),64);
        tracep->fullQData(oldp+261,(vlSelf->cpu__DOT__id_csr_rdata),64);
        tracep->fullBit(oldp+263,(vlSelf->cpu__DOT__id_ilegl_inst));
        tracep->fullQData(oldp+264,(vlSelf->cpu__DOT__ex_cgu_csr_wdata),64);
        tracep->fullBit(oldp+266,(vlSelf->cpu__DOT__ex_branch_jump));
        tracep->fullBit(oldp+267,(1U));
        tracep->fullIData(oldp+268,(0x40U),32);
        tracep->fullIData(oldp+269,(0U),32);
        tracep->fullQData(oldp+270,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+272,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i),64);
        tracep->fullQData(oldp+274,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__csr_rdata_i),64);
        tracep->fullQData(oldp+276,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o),64);
        tracep->fullBit(oldp+278,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o));
        tracep->fullQData(oldp+279,(((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullBit(oldp+281,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__ltu));
        tracep->fullBit(oldp+282,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__geu));
        tracep->fullQData(oldp+283,(vlSelf->cpu__DOT__u_wb__DOT__mem_rd_wdata_i),64);
        tracep->fullQData(oldp+285,(vlSelf->cpu__DOT__u_wb__DOT__csr_rd_wdata_i),64);
    }
}
