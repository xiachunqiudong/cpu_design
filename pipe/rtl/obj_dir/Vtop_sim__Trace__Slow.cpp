// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_sim__Syms.h"


void Vtop_sim___024root__traceInitSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop_sim___024root__traceInitTop(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop_sim___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop_sim___024root__traceInitSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+218,"clk", false,-1);
        tracep->declBit(c+219,"rst", false,-1);
        tracep->declBit(c+218,"top_sim clk", false,-1);
        tracep->declBit(c+219,"top_sim rst", false,-1);
        tracep->declQuad(c+1,"top_sim IF_pc", false,-1, 63,0);
        tracep->declBit(c+220,"top_sim IF_valid", false,-1);
        tracep->declQuad(c+3,"top_sim ifu_pc_next", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim ifu_instr", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim ifu_prdt_taken", false,-1);
        tracep->declBit(c+7,"top_sim ifu_pc_misalign", false,-1);
        tracep->declBit(c+221,"top_sim ifu_bus_err", false,-1);
        tracep->declQuad(c+8,"top_sim ID_pc", false,-1, 63,0);
        tracep->declBus(c+10,"top_sim ID_instr", false,-1, 31,0);
        tracep->declBit(c+11,"top_sim ID_prdt_taken", false,-1);
        tracep->declBit(c+12,"top_sim ID_pc_misalign", false,-1);
        tracep->declBit(c+13,"top_sim ID_if_bus_err", false,-1);
        tracep->declBit(c+220,"top_sim ID_ready", false,-1);
        tracep->declBit(c+14,"top_sim ID_valid", false,-1);
        tracep->declBus(c+15,"top_sim id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"top_sim id_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+222,"top_sim rf_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+224,"top_sim rf_rs2_rdata", false,-1, 63,0);
        tracep->declBus(c+17,"top_sim id_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+226,"top_sim csr_rdata", false,-1, 63,0);
        tracep->declBit(c+18,"top_sim id_csr_wen", false,-1);
        tracep->declBus(c+19,"top_sim id_optype_info", false,-1, 11,0);
        tracep->declBus(c+20,"top_sim id_alu_info", false,-1, 9,0);
        tracep->declBus(c+21,"top_sim id_branch_info", false,-1, 5,0);
        tracep->declBus(c+22,"top_sim id_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+23,"top_sim id_csr_info", false,-1, 5,0);
        tracep->declQuad(c+222,"top_sim id_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+224,"top_sim id_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+24,"top_sim id_imm", false,-1, 63,0);
        tracep->declBit(c+26,"top_sim id_rd_wen", false,-1);
        tracep->declBus(c+27,"top_sim id_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+228,"top_sim id_csr_rdata", false,-1, 63,0);
        tracep->declBit(c+230,"top_sim id_ilegl_inst", false,-1);
        tracep->declBit(c+28,"top_sim id_ecall", false,-1);
        tracep->declBit(c+29,"top_sim id_ebreak", false,-1);
        tracep->declBit(c+30,"top_sim id_mret", false,-1);
        tracep->declBit(c+220,"top_sim EX_ready", false,-1);
        tracep->declBit(c+218,"top_sim u_IF clk", false,-1);
        tracep->declBit(c+219,"top_sim u_IF rst", false,-1);
        tracep->declQuad(c+3,"top_sim u_IF ifu_pc_next_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_IF IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+220,"top_sim u_IF ID_ready_i", false,-1);
        tracep->declBit(c+220,"top_sim u_IF IF_valid_o", false,-1);
        tracep->declBit(c+220,"top_sim u_IF data_valid", false,-1);
        tracep->declBit(c+220,"top_sim u_IF run", false,-1);
        tracep->declQuad(c+1,"top_sim u_IF pc_r", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu IF_pc_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top_sim u_ifu ifu_pc_next_o", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ifu ifu_instr_o", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim u_ifu ifu_prdt_taken_o", false,-1);
        tracep->declBit(c+7,"top_sim u_ifu ifu_pc_misalign_o", false,-1);
        tracep->declBit(c+221,"top_sim u_ifu ifu_bus_err_o", false,-1);
        tracep->declBit(c+31,"top_sim u_ifu jal", false,-1);
        tracep->declBit(c+32,"top_sim u_ifu jalr", false,-1);
        tracep->declBit(c+33,"top_sim u_ifu branch", false,-1);
        tracep->declQuad(c+34,"top_sim u_ifu imm", false,-1, 63,0);
        tracep->declBit(c+36,"top_sim u_ifu jump", false,-1);
        tracep->declQuad(c+37,"top_sim u_ifu jump_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+34,"top_sim u_ifu jump_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+39,"top_sim u_ifu pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+41,"top_sim u_ifu pc_add_op2", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu u_if_bus pc_i", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_bus if_bus_instr_o", false,-1, 31,0);
        tracep->declBit(c+7,"top_sim u_ifu u_if_bus if_bus_pc_misalign_o", false,-1);
        tracep->declBit(c+221,"top_sim u_ifu u_if_bus if_bus_bus_err_o", false,-1);
        tracep->declBus(c+43,"top_sim u_ifu u_if_bus pc", false,-1, 9,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+31,"top_sim u_ifu u_if_mini_dec_u mini_dec_jal_o", false,-1);
        tracep->declBit(c+32,"top_sim u_ifu u_if_mini_dec_u mini_dec_jalr_o", false,-1);
        tracep->declBit(c+33,"top_sim u_ifu u_if_mini_dec_u mini_dec_branch_o", false,-1);
        tracep->declBus(c+44,"top_sim u_ifu u_if_mini_dec_u mini_dec_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+34,"top_sim u_ifu u_if_mini_dec_u mini_dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+45,"top_sim u_ifu u_if_mini_dec_u optype_info", false,-1, 11,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_mini_dec_u idu instr_i", false,-1, 31,0);
        tracep->declBus(c+44,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+46,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+231,"top_sim u_ifu u_if_mini_dec_u idu rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+233,"top_sim u_ifu u_if_mini_dec_u idu rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+47,"top_sim u_ifu u_if_mini_dec_u idu id_csr_wen_o", false,-1);
        tracep->declBus(c+48,"top_sim u_ifu u_if_mini_dec_u idu id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+235,"top_sim u_ifu u_if_mini_dec_u idu csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+45,"top_sim u_ifu u_if_mini_dec_u idu id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+49,"top_sim u_ifu u_if_mini_dec_u idu id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+50,"top_sim u_ifu u_if_mini_dec_u idu id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+51,"top_sim u_ifu u_if_mini_dec_u idu id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+52,"top_sim u_ifu u_if_mini_dec_u idu id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+231,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+233,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+34,"top_sim u_ifu u_if_mini_dec_u idu id_imm_o", false,-1, 63,0);
        tracep->declBit(c+53,"top_sim u_ifu u_if_mini_dec_u idu id_rd_wen_o", false,-1);
        tracep->declBus(c+54,"top_sim u_ifu u_if_mini_dec_u idu id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+237,"top_sim u_ifu u_if_mini_dec_u idu id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+239,"top_sim u_ifu u_if_mini_dec_u idu id_ilegl_instr_o", false,-1);
        tracep->declBit(c+55,"top_sim u_ifu u_if_mini_dec_u idu id_ecall_o", false,-1);
        tracep->declBit(c+56,"top_sim u_ifu u_if_mini_dec_u idu id_ebreak_o", false,-1);
        tracep->declBit(c+57,"top_sim u_ifu u_if_mini_dec_u idu id_mret_o", false,-1);
        tracep->declBus(c+58,"top_sim u_ifu u_if_mini_dec_u idu opcode", false,-1, 6,0);
        tracep->declBus(c+54,"top_sim u_ifu u_if_mini_dec_u idu rd", false,-1, 4,0);
        tracep->declBus(c+59,"top_sim u_ifu u_if_mini_dec_u idu fun3", false,-1, 2,0);
        tracep->declBus(c+44,"top_sim u_ifu u_if_mini_dec_u idu rs1", false,-1, 4,0);
        tracep->declBus(c+46,"top_sim u_ifu u_if_mini_dec_u idu rs2", false,-1, 4,0);
        tracep->declBus(c+60,"top_sim u_ifu u_if_mini_dec_u idu fun7", false,-1, 6,0);
        tracep->declBit(c+61,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm", false,-1);
        tracep->declBit(c+62,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm_w", false,-1);
        tracep->declBit(c+63,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu", false,-1);
        tracep->declBit(c+64,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_w", false,-1);
        tracep->declBit(c+65,"top_sim u_ifu u_if_mini_dec_u idu rv64_branch", false,-1);
        tracep->declBit(c+66,"top_sim u_ifu u_if_mini_dec_u idu rv64_jal", false,-1);
        tracep->declBit(c+67,"top_sim u_ifu u_if_mini_dec_u idu rv64_jalr", false,-1);
        tracep->declBit(c+68,"top_sim u_ifu u_if_mini_dec_u idu rv64_load", false,-1);
        tracep->declBit(c+69,"top_sim u_ifu u_if_mini_dec_u idu rv64_store", false,-1);
        tracep->declBit(c+70,"top_sim u_ifu u_if_mini_dec_u idu rv64_lui", false,-1);
        tracep->declBit(c+71,"top_sim u_ifu u_if_mini_dec_u idu rv64_auipc", false,-1);
        tracep->declBit(c+72,"top_sim u_ifu u_if_mini_dec_u idu rv64_system", false,-1);
        tracep->declBit(c+73,"top_sim u_ifu u_if_mini_dec_u idu rv64_addi", false,-1);
        tracep->declBit(c+74,"top_sim u_ifu u_if_mini_dec_u idu rv64_addiw", false,-1);
        tracep->declBit(c+75,"top_sim u_ifu u_if_mini_dec_u idu rv64_slli", false,-1);
        tracep->declBit(c+76,"top_sim u_ifu u_if_mini_dec_u idu rv64_slliw", false,-1);
        tracep->declBit(c+77,"top_sim u_ifu u_if_mini_dec_u idu rv64_slti", false,-1);
        tracep->declBit(c+78,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltui", false,-1);
        tracep->declBit(c+79,"top_sim u_ifu u_if_mini_dec_u idu rv64_xori", false,-1);
        tracep->declBit(c+80,"top_sim u_ifu u_if_mini_dec_u idu rv64_srli", false,-1);
        tracep->declBit(c+81,"top_sim u_ifu u_if_mini_dec_u idu rv64_srliw", false,-1);
        tracep->declBit(c+82,"top_sim u_ifu u_if_mini_dec_u idu rv64_srai", false,-1);
        tracep->declBit(c+83,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraiw", false,-1);
        tracep->declBit(c+84,"top_sim u_ifu u_if_mini_dec_u idu rv64_ori", false,-1);
        tracep->declBit(c+85,"top_sim u_ifu u_if_mini_dec_u idu rv64_andi", false,-1);
        tracep->declBit(c+86,"top_sim u_ifu u_if_mini_dec_u idu rv64_add", false,-1);
        tracep->declBit(c+87,"top_sim u_ifu u_if_mini_dec_u idu rv64_addw", false,-1);
        tracep->declBit(c+88,"top_sim u_ifu u_if_mini_dec_u idu rv64_sub", false,-1);
        tracep->declBit(c+89,"top_sim u_ifu u_if_mini_dec_u idu rv64_subw", false,-1);
        tracep->declBit(c+90,"top_sim u_ifu u_if_mini_dec_u idu rv64_sll", false,-1);
        tracep->declBit(c+91,"top_sim u_ifu u_if_mini_dec_u idu rv64_sllw", false,-1);
        tracep->declBit(c+92,"top_sim u_ifu u_if_mini_dec_u idu rv64_slt", false,-1);
        tracep->declBit(c+93,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltu", false,-1);
        tracep->declBit(c+94,"top_sim u_ifu u_if_mini_dec_u idu rv64_xor", false,-1);
        tracep->declBit(c+95,"top_sim u_ifu u_if_mini_dec_u idu rv64_srl", false,-1);
        tracep->declBit(c+96,"top_sim u_ifu u_if_mini_dec_u idu rv64_srlw", false,-1);
        tracep->declBit(c+97,"top_sim u_ifu u_if_mini_dec_u idu rv64_sra", false,-1);
        tracep->declBit(c+98,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraw", false,-1);
        tracep->declBit(c+99,"top_sim u_ifu u_if_mini_dec_u idu rv64_or", false,-1);
        tracep->declBit(c+100,"top_sim u_ifu u_if_mini_dec_u idu rv64_and", false,-1);
        tracep->declBit(c+101,"top_sim u_ifu u_if_mini_dec_u idu rv64_beq", false,-1);
        tracep->declBit(c+102,"top_sim u_ifu u_if_mini_dec_u idu rv64_bne", false,-1);
        tracep->declBit(c+103,"top_sim u_ifu u_if_mini_dec_u idu rv64_blt", false,-1);
        tracep->declBit(c+104,"top_sim u_ifu u_if_mini_dec_u idu rv64_bge", false,-1);
        tracep->declBit(c+105,"top_sim u_ifu u_if_mini_dec_u idu rv64_bltu", false,-1);
        tracep->declBit(c+106,"top_sim u_ifu u_if_mini_dec_u idu rv64_bgeu", false,-1);
        tracep->declBit(c+107,"top_sim u_ifu u_if_mini_dec_u idu rv64_lb", false,-1);
        tracep->declBit(c+108,"top_sim u_ifu u_if_mini_dec_u idu rv64_lh", false,-1);
        tracep->declBit(c+109,"top_sim u_ifu u_if_mini_dec_u idu rv64_lw", false,-1);
        tracep->declBit(c+110,"top_sim u_ifu u_if_mini_dec_u idu rv64_ld", false,-1);
        tracep->declBit(c+111,"top_sim u_ifu u_if_mini_dec_u idu rv64_lbu", false,-1);
        tracep->declBit(c+112,"top_sim u_ifu u_if_mini_dec_u idu rv64_lhu", false,-1);
        tracep->declBit(c+113,"top_sim u_ifu u_if_mini_dec_u idu rv64_lwu", false,-1);
        tracep->declBit(c+114,"top_sim u_ifu u_if_mini_dec_u idu rv64_sb", false,-1);
        tracep->declBit(c+115,"top_sim u_ifu u_if_mini_dec_u idu rv64_sh", false,-1);
        tracep->declBit(c+116,"top_sim u_ifu u_if_mini_dec_u idu rv64_sw", false,-1);
        tracep->declBit(c+117,"top_sim u_ifu u_if_mini_dec_u idu rv64_sd", false,-1);
        tracep->declBit(c+55,"top_sim u_ifu u_if_mini_dec_u idu rv64_ecall", false,-1);
        tracep->declBit(c+56,"top_sim u_ifu u_if_mini_dec_u idu rv64_ebreak", false,-1);
        tracep->declBit(c+57,"top_sim u_ifu u_if_mini_dec_u idu rv64_mret", false,-1);
        tracep->declBit(c+118,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrw", false,-1);
        tracep->declBit(c+119,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrs", false,-1);
        tracep->declBit(c+120,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrc", false,-1);
        tracep->declBit(c+121,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrwi", false,-1);
        tracep->declBit(c+122,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrsi", false,-1);
        tracep->declBit(c+123,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrci", false,-1);
        tracep->declBit(c+124,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs1", false,-1);
        tracep->declBit(c+125,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs2", false,-1);
        tracep->declBit(c+53,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rd", false,-1);
        tracep->declBit(c+47,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_csr", false,-1);
        tracep->declQuad(c+126,"top_sim u_ifu u_if_mini_dec_u idu rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+128,"top_sim u_ifu u_if_mini_dec_u idu rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+130,"top_sim u_ifu u_if_mini_dec_u idu rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+132,"top_sim u_ifu u_if_mini_dec_u idu rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+134,"top_sim u_ifu u_if_mini_dec_u idu rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+136,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_i", false,-1);
        tracep->declBit(c+69,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_s", false,-1);
        tracep->declBit(c+65,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_b", false,-1);
        tracep->declBit(c+66,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_j", false,-1);
        tracep->declBit(c+137,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+34,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm", false,-1, 63,0);
        tracep->declBit(c+218,"top_sim u_ID clk", false,-1);
        tracep->declBit(c+219,"top_sim u_ID rst", false,-1);
        tracep->declQuad(c+1,"top_sim u_ID IF_pc_i", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ID ifu_instr_i", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim u_ID ifu_prdt_taken_i", false,-1);
        tracep->declBit(c+7,"top_sim u_ID ifu_pc_misalign_i", false,-1);
        tracep->declBit(c+221,"top_sim u_ID ifu_bus_err_i", false,-1);
        tracep->declQuad(c+8,"top_sim u_ID ID_pc_o", false,-1, 63,0);
        tracep->declBus(c+10,"top_sim u_ID ID_instr_o", false,-1, 31,0);
        tracep->declBit(c+11,"top_sim u_ID ID_prdt_taken_o", false,-1);
        tracep->declBit(c+12,"top_sim u_ID ID_pc_misalign_o", false,-1);
        tracep->declBit(c+13,"top_sim u_ID ID_if_bus_err_o", false,-1);
        tracep->declBit(c+220,"top_sim u_ID IF_valid_i", false,-1);
        tracep->declBit(c+220,"top_sim u_ID EX_ready_i", false,-1);
        tracep->declBit(c+220,"top_sim u_ID ID_ready_o", false,-1);
        tracep->declBit(c+14,"top_sim u_ID ID_valid_o", false,-1);
        tracep->declBit(c+220,"top_sim u_ID run", false,-1);
        tracep->declBit(c+14,"top_sim u_ID ID_data_valid", false,-1);
        tracep->declQuad(c+8,"top_sim u_ID ID_pc_r", false,-1, 63,0);
        tracep->declBus(c+10,"top_sim u_ID ID_instr_r", false,-1, 31,0);
        tracep->declBit(c+11,"top_sim u_ID ID_prdt_taken_r", false,-1);
        tracep->declBit(c+12,"top_sim u_ID ID_pc_misalign_r", false,-1);
        tracep->declBit(c+13,"top_sim u_ID ID_if_bus_err_r", false,-1);
        tracep->declBus(c+10,"top_sim u_id instr_i", false,-1, 31,0);
        tracep->declBus(c+15,"top_sim u_id id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+16,"top_sim u_id id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+222,"top_sim u_id rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+224,"top_sim u_id rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+18,"top_sim u_id id_csr_wen_o", false,-1);
        tracep->declBus(c+17,"top_sim u_id id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+226,"top_sim u_id csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+19,"top_sim u_id id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+20,"top_sim u_id id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+21,"top_sim u_id id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+22,"top_sim u_id id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+23,"top_sim u_id id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+222,"top_sim u_id id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+224,"top_sim u_id id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top_sim u_id id_imm_o", false,-1, 63,0);
        tracep->declBit(c+26,"top_sim u_id id_rd_wen_o", false,-1);
        tracep->declBus(c+27,"top_sim u_id id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+228,"top_sim u_id id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+230,"top_sim u_id id_ilegl_instr_o", false,-1);
        tracep->declBit(c+28,"top_sim u_id id_ecall_o", false,-1);
        tracep->declBit(c+29,"top_sim u_id id_ebreak_o", false,-1);
        tracep->declBit(c+30,"top_sim u_id id_mret_o", false,-1);
        tracep->declBus(c+138,"top_sim u_id opcode", false,-1, 6,0);
        tracep->declBus(c+27,"top_sim u_id rd", false,-1, 4,0);
        tracep->declBus(c+139,"top_sim u_id fun3", false,-1, 2,0);
        tracep->declBus(c+15,"top_sim u_id rs1", false,-1, 4,0);
        tracep->declBus(c+16,"top_sim u_id rs2", false,-1, 4,0);
        tracep->declBus(c+140,"top_sim u_id fun7", false,-1, 6,0);
        tracep->declBit(c+141,"top_sim u_id rv64_alu_imm", false,-1);
        tracep->declBit(c+142,"top_sim u_id rv64_alu_imm_w", false,-1);
        tracep->declBit(c+143,"top_sim u_id rv64_alu", false,-1);
        tracep->declBit(c+144,"top_sim u_id rv64_alu_w", false,-1);
        tracep->declBit(c+145,"top_sim u_id rv64_branch", false,-1);
        tracep->declBit(c+146,"top_sim u_id rv64_jal", false,-1);
        tracep->declBit(c+147,"top_sim u_id rv64_jalr", false,-1);
        tracep->declBit(c+148,"top_sim u_id rv64_load", false,-1);
        tracep->declBit(c+149,"top_sim u_id rv64_store", false,-1);
        tracep->declBit(c+150,"top_sim u_id rv64_lui", false,-1);
        tracep->declBit(c+151,"top_sim u_id rv64_auipc", false,-1);
        tracep->declBit(c+152,"top_sim u_id rv64_system", false,-1);
        tracep->declBit(c+153,"top_sim u_id rv64_addi", false,-1);
        tracep->declBit(c+154,"top_sim u_id rv64_addiw", false,-1);
        tracep->declBit(c+155,"top_sim u_id rv64_slli", false,-1);
        tracep->declBit(c+156,"top_sim u_id rv64_slliw", false,-1);
        tracep->declBit(c+157,"top_sim u_id rv64_slti", false,-1);
        tracep->declBit(c+158,"top_sim u_id rv64_sltui", false,-1);
        tracep->declBit(c+159,"top_sim u_id rv64_xori", false,-1);
        tracep->declBit(c+160,"top_sim u_id rv64_srli", false,-1);
        tracep->declBit(c+161,"top_sim u_id rv64_srliw", false,-1);
        tracep->declBit(c+162,"top_sim u_id rv64_srai", false,-1);
        tracep->declBit(c+163,"top_sim u_id rv64_sraiw", false,-1);
        tracep->declBit(c+164,"top_sim u_id rv64_ori", false,-1);
        tracep->declBit(c+165,"top_sim u_id rv64_andi", false,-1);
        tracep->declBit(c+166,"top_sim u_id rv64_add", false,-1);
        tracep->declBit(c+167,"top_sim u_id rv64_addw", false,-1);
        tracep->declBit(c+168,"top_sim u_id rv64_sub", false,-1);
        tracep->declBit(c+169,"top_sim u_id rv64_subw", false,-1);
        tracep->declBit(c+170,"top_sim u_id rv64_sll", false,-1);
        tracep->declBit(c+171,"top_sim u_id rv64_sllw", false,-1);
        tracep->declBit(c+172,"top_sim u_id rv64_slt", false,-1);
        tracep->declBit(c+173,"top_sim u_id rv64_sltu", false,-1);
        tracep->declBit(c+174,"top_sim u_id rv64_xor", false,-1);
        tracep->declBit(c+175,"top_sim u_id rv64_srl", false,-1);
        tracep->declBit(c+176,"top_sim u_id rv64_srlw", false,-1);
        tracep->declBit(c+177,"top_sim u_id rv64_sra", false,-1);
        tracep->declBit(c+178,"top_sim u_id rv64_sraw", false,-1);
        tracep->declBit(c+179,"top_sim u_id rv64_or", false,-1);
        tracep->declBit(c+180,"top_sim u_id rv64_and", false,-1);
        tracep->declBit(c+181,"top_sim u_id rv64_beq", false,-1);
        tracep->declBit(c+182,"top_sim u_id rv64_bne", false,-1);
        tracep->declBit(c+183,"top_sim u_id rv64_blt", false,-1);
        tracep->declBit(c+184,"top_sim u_id rv64_bge", false,-1);
        tracep->declBit(c+185,"top_sim u_id rv64_bltu", false,-1);
        tracep->declBit(c+186,"top_sim u_id rv64_bgeu", false,-1);
        tracep->declBit(c+187,"top_sim u_id rv64_lb", false,-1);
        tracep->declBit(c+188,"top_sim u_id rv64_lh", false,-1);
        tracep->declBit(c+189,"top_sim u_id rv64_lw", false,-1);
        tracep->declBit(c+190,"top_sim u_id rv64_ld", false,-1);
        tracep->declBit(c+191,"top_sim u_id rv64_lbu", false,-1);
        tracep->declBit(c+192,"top_sim u_id rv64_lhu", false,-1);
        tracep->declBit(c+193,"top_sim u_id rv64_lwu", false,-1);
        tracep->declBit(c+194,"top_sim u_id rv64_sb", false,-1);
        tracep->declBit(c+195,"top_sim u_id rv64_sh", false,-1);
        tracep->declBit(c+196,"top_sim u_id rv64_sw", false,-1);
        tracep->declBit(c+197,"top_sim u_id rv64_sd", false,-1);
        tracep->declBit(c+28,"top_sim u_id rv64_ecall", false,-1);
        tracep->declBit(c+29,"top_sim u_id rv64_ebreak", false,-1);
        tracep->declBit(c+30,"top_sim u_id rv64_mret", false,-1);
        tracep->declBit(c+198,"top_sim u_id rv64_csrrw", false,-1);
        tracep->declBit(c+199,"top_sim u_id rv64_csrrs", false,-1);
        tracep->declBit(c+200,"top_sim u_id rv64_csrrc", false,-1);
        tracep->declBit(c+201,"top_sim u_id rv64_csrrwi", false,-1);
        tracep->declBit(c+202,"top_sim u_id rv64_csrrsi", false,-1);
        tracep->declBit(c+203,"top_sim u_id rv64_csrrci", false,-1);
        tracep->declBit(c+204,"top_sim u_id rv64_need_rs1", false,-1);
        tracep->declBit(c+205,"top_sim u_id rv64_need_rs2", false,-1);
        tracep->declBit(c+26,"top_sim u_id rv64_need_rd", false,-1);
        tracep->declBit(c+18,"top_sim u_id rv64_need_csr", false,-1);
        tracep->declQuad(c+206,"top_sim u_id rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+208,"top_sim u_id rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+210,"top_sim u_id rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+212,"top_sim u_id rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+214,"top_sim u_id rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+216,"top_sim u_id rv64_imm_sel_i", false,-1);
        tracep->declBit(c+149,"top_sim u_id rv64_imm_sel_s", false,-1);
        tracep->declBit(c+145,"top_sim u_id rv64_imm_sel_b", false,-1);
        tracep->declBit(c+146,"top_sim u_id rv64_imm_sel_j", false,-1);
        tracep->declBit(c+217,"top_sim u_id rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+24,"top_sim u_id rv64_imm", false,-1, 63,0);
    }
}

void Vtop_sim___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop_sim___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop_sim___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop_sim___024root__traceRegister(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop_sim___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop_sim___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop_sim___024root__traceCleanup, vlSelf);
    }
}

void Vtop_sim___024root__traceFullSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop_sim___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop_sim___024root* const __restrict vlSelf = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop_sim___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop_sim___024root__traceFullSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top_sim__DOT__u_IF__DOT__pc_r),64);
        tracep->fullQData(oldp+3,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                     ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                         ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                     : vlSelf->top_sim__DOT__u_IF__DOT__pc_r) 
                                   + ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                       ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                       : 4ULL))),64);
        tracep->fullIData(oldp+5,(vlSelf->top_sim__DOT__ifu_instr),32);
        tracep->fullBit(oldp+6,(vlSelf->top_sim__DOT__ifu_prdt_taken));
        tracep->fullBit(oldp+7,((0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))));
        tracep->fullQData(oldp+8,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
        tracep->fullIData(oldp+10,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
        tracep->fullBit(oldp+11,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
        tracep->fullBit(oldp+12,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
        tracep->fullBit(oldp+13,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
        tracep->fullBit(oldp+14,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x14U))),5);
        tracep->fullSData(oldp+17,((vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+18,(((((((IData)((0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      | (IData)((0x2073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                     | (IData)((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                    | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+19,((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                     << 0xbU) | (((0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                  << 0xaU) 
                                                 | (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                     << 9U) 
                                                    | (((0x3bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                        << 8U) 
                                                       | (((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                           << 7U) 
                                                          | (((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                              << 6U) 
                                                             | (((0x67U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                 << 5U) 
                                                                | (((3U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                    << 4U) 
                                                                   | (((0x23U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                       << 3U) 
                                                                      | (((0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                          << 2U) 
                                                                         | (((0x17U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                             << 1U) 
                                                                            | (0x73U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))))),12);
        tracep->fullSData(oldp+20,((((((((IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                         & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U))) 
                                        | (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                       | ((IData)((0x3bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                              >> 0x19U)))) 
                                      | (IData)((0x1bU 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                     << 9U) | (((((IData)(
                                                          (0x33U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                      >> 0x19U))) 
                                                 | ((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                        >> 0x19U)))) 
                                                << 8U) 
                                               | (((((((IData)(
                                                               (0x1033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                           >> 0x19U))) 
                                                      | ((IData)(
                                                                 (0x1013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x19U)))) 
                                                     | ((IData)(
                                                                (0x103bU 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                            >> 0x19U)))) 
                                                    | ((IData)(
                                                               (0x101bU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                           >> 0x19U)))) 
                                                   << 7U) 
                                                  | (((((IData)(
                                                                (0x2033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                            >> 0x19U))) 
                                                       | (IData)(
                                                                 (0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                                      << 6U) 
                                                     | (((((IData)(
                                                                   (0x3033U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                               >> 0x19U))) 
                                                          | (IData)(
                                                                    (0x3013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                                         << 5U) 
                                                        | (((((IData)(
                                                                      (0x4033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x4013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                                            << 4U) 
                                                           | (((((((IData)(
                                                                           (0x5033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(
                                                                             (0x5013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                         >> 0x19U)))) 
                                                                 | ((IData)(
                                                                            (0x503bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                        >> 0x19U)))) 
                                                                | ((IData)(
                                                                           (0x501bU 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                       >> 0x19U)))) 
                                                               << 3U) 
                                                              | (((((((IData)(
                                                                              (0x5033U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                          >> 0x19U))) 
                                                                     | ((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                            >> 0x19U)))) 
                                                                    | ((IData)(
                                                                               (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                           >> 0x19U)))) 
                                                                   | ((IData)(
                                                                              (0x501bU 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                          >> 0x19U)))) 
                                                                  << 2U) 
                                                                 | (((((IData)(
                                                                               (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                           >> 0x19U))) 
                                                                      | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                                                     << 1U) 
                                                                    | (((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                            >> 0x19U))) 
                                                                       | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))))),10);
        tracep->fullCData(oldp+21,((((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                     << 5U) | (((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))))))),6);
        tracep->fullSData(oldp+22,((((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                     << 0xaU) | (((IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                  << 9U) 
                                                 | (((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                     << 8U) 
                                                    | (((IData)(
                                                                (0x3003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                        << 7U) 
                                                       | (((IData)(
                                                                   (0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                           << 6U) 
                                                          | (((IData)(
                                                                      (0x5003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                              << 5U) 
                                                             | (((IData)(
                                                                         (0x6003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                 << 4U) 
                                                                | (((IData)(
                                                                            (0x23U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                    << 3U) 
                                                                   | (((IData)(
                                                                               (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                       << 2U) 
                                                                      | (((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                          << 1U) 
                                                                         | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))))),11);
        tracep->fullCData(oldp+23,((((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                     << 5U) | (((IData)(
                                                        (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))))),6);
        tracep->fullQData(oldp+24,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
        tracep->fullBit(oldp+26,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 7U))),5);
        tracep->fullBit(oldp+28,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
        tracep->fullBit(oldp+29,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
        tracep->fullBit(oldp+30,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
        tracep->fullBit(oldp+31,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                        >> 6U))));
        tracep->fullBit(oldp+32,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                        >> 5U))));
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                        >> 7U))));
        tracep->fullQData(oldp+34,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
        tracep->fullBit(oldp+36,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
        tracep->fullQData(oldp+37,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                     ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+39,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                     ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                         ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                     : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+41,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                     ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                     : 4ULL)),64);
        tracep->fullSData(oldp+43,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
        tracep->fullCData(oldp+44,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0xfU))),5);
        tracep->fullSData(oldp+45,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
        tracep->fullCData(oldp+46,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+47,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+48,((vlSelf->top_sim__DOT__ifu_instr 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+49,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
        tracep->fullCData(oldp+50,((((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__ifu_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__ifu_instr))))))))),6);
        tracep->fullSData(oldp+51,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
        tracep->fullCData(oldp+52,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                     << 5U) | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
        tracep->fullBit(oldp+53,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullCData(oldp+54,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+55,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
        tracep->fullBit(oldp+56,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
        tracep->fullBit(oldp+57,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
        tracep->fullCData(oldp+58,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
        tracep->fullCData(oldp+59,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+60,((vlSelf->top_sim__DOT__ifu_instr 
                                    >> 0x19U)),7);
        tracep->fullBit(oldp+61,((0x13U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+62,((0x1bU == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+63,((0x33U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+64,((0x3bU == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+65,((0x63U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+66,((0x6fU == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+67,((0x67U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+68,((3U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+69,((0x23U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+70,((0x37U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+71,((0x17U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+72,((0x73U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+73,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+74,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+75,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+76,(((IData)((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+77,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+78,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+79,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+80,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+81,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+82,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+83,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+84,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+85,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+86,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+87,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+88,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+89,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+90,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+91,(((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+92,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+93,(((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+94,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+95,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+96,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+97,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+98,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+99,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+100,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+101,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+102,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+103,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+104,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+105,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+106,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+107,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+108,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+109,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+110,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+111,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+112,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+113,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+114,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+115,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+116,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+117,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+118,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
        tracep->fullBit(oldp+119,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
        tracep->fullBit(oldp+120,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
        tracep->fullBit(oldp+121,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+122,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+123,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
        tracep->fullBit(oldp+124,((((((((((0x37U != 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
        tracep->fullBit(oldp+125,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullQData(oldp+126,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+128,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__ifu_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__ifu_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+130,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top_sim__DOT__ifu_instr 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top_sim__DOT__ifu_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top_sim__DOT__ifu_instr 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+132,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->top_sim__DOT__ifu_instr 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->top_sim__DOT__ifu_instr) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top_sim__DOT__ifu_instr 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top_sim__DOT__ifu_instr 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+134,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__ifu_instr))))),64);
        tracep->fullBit(oldp+136,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+137,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullCData(oldp+138,((0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)),7);
        tracep->fullCData(oldp+139,((7U & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+140,((vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+141,((0x13U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+142,((0x1bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+143,((0x33U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+144,((0x3bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+145,((0x63U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+146,((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+147,((0x67U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+148,((3U == (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+149,((0x23U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+150,((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+151,((0x17U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+152,((0x73U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
        tracep->fullBit(oldp+153,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+154,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+155,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+156,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+157,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+158,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+159,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+160,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+161,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+162,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+163,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+164,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+165,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+166,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+167,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+168,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+169,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+170,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+171,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+172,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+173,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+174,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+175,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+176,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+177,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+178,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+179,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+180,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+181,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+182,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+183,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+184,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+185,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+186,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+187,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+188,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+189,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+190,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+191,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+192,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+193,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+194,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+195,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+196,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+197,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+198,((IData)((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+199,((IData)((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+200,((IData)((0x3073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+201,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+202,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+203,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
        tracep->fullBit(oldp+204,((((((((((0x37U != 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret)))));
        tracep->fullBit(oldp+205,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullQData(oldp+206,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+208,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+210,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+212,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+214,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))),64);
        tracep->fullBit(oldp+216,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+217,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        tracep->fullBit(oldp+218,(vlSelf->clk));
        tracep->fullBit(oldp+219,(vlSelf->rst));
        tracep->fullBit(oldp+220,(1U));
        tracep->fullBit(oldp+221,(0U));
        tracep->fullQData(oldp+222,(vlSelf->top_sim__DOT__rf_rs1_rdata),64);
        tracep->fullQData(oldp+224,(vlSelf->top_sim__DOT__rf_rs2_rdata),64);
        tracep->fullQData(oldp+226,(vlSelf->top_sim__DOT__csr_rdata),64);
        tracep->fullQData(oldp+228,(vlSelf->top_sim__DOT__id_csr_rdata),64);
        tracep->fullBit(oldp+230,(vlSelf->top_sim__DOT__id_ilegl_inst));
        tracep->fullQData(oldp+231,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+233,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i),64);
        tracep->fullQData(oldp+235,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__csr_rdata_i),64);
        tracep->fullQData(oldp+237,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o),64);
        tracep->fullBit(oldp+239,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o));
    }
}
