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
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+363+i*2,"reg_data_o", true,(i+1), 63,0);}}
        tracep->declQuad(c+425,"IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+427,"clk", false,-1);
        tracep->declBit(c+428,"reset", false,-1);
        tracep->declBus(c+429,"id_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+430,"id_rs1_rdata_o", false,-1, 63,0);
        tracep->declBus(c+432,"id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+433,"id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+435,"id_imm_o", false,-1, 63,0);
        tracep->declBit(c+437,"id_rd_wen_o", false,-1);
        tracep->declBus(c+438,"id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+439,"ex_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+441,"ex_mem_addr_o", false,-1, 63,0);
        tracep->declBit(c+443,"ex_branch_jump_o", false,-1);
        tracep->declQuad(c+444,"mem_rdata_o", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+363+i*2,"top_sim reg_data_o", true,(i+1), 63,0);}}
        tracep->declQuad(c+425,"top_sim IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+427,"top_sim clk", false,-1);
        tracep->declBit(c+428,"top_sim reset", false,-1);
        tracep->declBus(c+429,"top_sim id_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+430,"top_sim id_rs1_rdata_o", false,-1, 63,0);
        tracep->declBus(c+432,"top_sim id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+433,"top_sim id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+435,"top_sim id_imm_o", false,-1, 63,0);
        tracep->declBit(c+437,"top_sim id_rd_wen_o", false,-1);
        tracep->declBus(c+438,"top_sim id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+439,"top_sim ex_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+441,"top_sim ex_mem_addr_o", false,-1, 63,0);
        tracep->declBit(c+443,"top_sim ex_branch_jump_o", false,-1);
        tracep->declQuad(c+444,"top_sim mem_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim IF_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top_sim pc_next", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim if_jalr_rs1_idx", false,-1, 4,0);
        tracep->declQuad(c+6,"top_sim rf_jalr_rs1_rdata", false,-1, 63,0);
        tracep->declBus(c+8,"top_sim if_instr", false,-1, 31,0);
        tracep->declBit(c+446,"top_sim if_pc_misalign", false,-1);
        tracep->declBit(c+446,"top_sim if_bus_err", false,-1);
        tracep->declBus(c+5,"top_sim id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim id_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+10,"top_sim rf_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim rf_rs2_rdata", false,-1, 63,0);
        tracep->declBit(c+14,"top_sim id_csr_wen", false,-1);
        tracep->declBus(c+15,"top_sim id_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+447,"top_sim csr_rdata", false,-1, 63,0);
        tracep->declBus(c+16,"top_sim id_opcode_info", false,-1, 11,0);
        tracep->declBus(c+17,"top_sim id_alu_info", false,-1, 9,0);
        tracep->declBus(c+18,"top_sim id_branch_info", false,-1, 5,0);
        tracep->declBus(c+19,"top_sim id_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+20,"top_sim id_csr_info", false,-1, 5,0);
        tracep->declQuad(c+10,"top_sim id_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim id_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim id_imm", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim id_rd_wen", false,-1);
        tracep->declBus(c+24,"top_sim id_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+449,"top_sim id_csr_rdata", false,-1, 63,0);
        tracep->declBit(c+451,"top_sim id_ilegl_inst", false,-1);
        tracep->declBit(c+25,"top_sim id_ecall", false,-1);
        tracep->declBit(c+26,"top_sim id_ebreak", false,-1);
        tracep->declBit(c+27,"top_sim id_mret", false,-1);
        tracep->declQuad(c+28,"top_sim ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim ex_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+452,"top_sim ex_cgu_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+32,"top_sim ex_branch_jump", false,-1);
        tracep->declQuad(c+33,"top_sim mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim ram_addr", false,-1, 63,0);
        tracep->declBit(c+35,"top_sim ram_wen", false,-1);
        tracep->declQuad(c+12,"top_sim ram_wdata", false,-1, 63,0);
        tracep->declBus(c+36,"top_sim ram_wmask", false,-1, 1,0);
        tracep->declQuad(c+37,"top_sim ram_rdata", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim wb_rd_wen", false,-1);
        tracep->declBus(c+24,"top_sim wb_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+39,"top_sim wb_rd_wdata", false,-1, 63,0);
        tracep->declBit(c+41,"top_sim jal_i", false,-1);
        tracep->declBit(c+42,"top_sim jalr_i", false,-1);
        tracep->declBit(c+43,"top_sim branch_i", false,-1);
        tracep->declBit(c+427,"top_sim pc_reg_u clk", false,-1);
        tracep->declBit(c+428,"top_sim pc_reg_u rst", false,-1);
        tracep->declQuad(c+3,"top_sim pc_reg_u pc_next_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim pc_reg_u IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+454,"top_sim pc_reg_u ena", false,-1);
        tracep->declBus(c+455,"top_sim pc_reg_u pc_dff DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+456,"top_sim pc_reg_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+427,"top_sim pc_reg_u pc_dff clk", false,-1);
        tracep->declBit(c+428,"top_sim pc_reg_u pc_dff rst", false,-1);
        tracep->declBit(c+454,"top_sim pc_reg_u pc_dff ena", false,-1);
        tracep->declQuad(c+3,"top_sim pc_reg_u pc_dff d", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim pc_reg_u pc_dff q", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim pc_reg_u pc_dff q_r", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim instr_fetch_u pc_i", false,-1, 63,0);
        tracep->declBus(c+8,"top_sim instr_fetch_u if_instr_o", false,-1, 31,0);
        tracep->declBus(c+5,"top_sim instr_fetch_u if_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+6,"top_sim instr_fetch_u jalr_rs1_rdata_i", false,-1, 63,0);
        tracep->declBit(c+446,"top_sim instr_fetch_u if_pc_misalign_o", false,-1);
        tracep->declBit(c+446,"top_sim instr_fetch_u if_bus_err_o", false,-1);
        tracep->declBit(c+44,"top_sim instr_fetch_u mini_dec_jal", false,-1);
        tracep->declBit(c+45,"top_sim instr_fetch_u mini_dec_jalr", false,-1);
        tracep->declBit(c+46,"top_sim instr_fetch_u mini_dec_branch", false,-1);
        tracep->declQuad(c+47,"top_sim instr_fetch_u mini_dec_imm", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim instr_fetch_u bj_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+47,"top_sim instr_fetch_u bj_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim instr_fetch_u if_bus_u pc_i", false,-1, 63,0);
        tracep->declBus(c+8,"top_sim instr_fetch_u if_bus_u if_bus_instr_o", false,-1, 31,0);
        tracep->declBit(c+446,"top_sim instr_fetch_u if_bus_u if_bus_pc_misalign_o", false,-1);
        tracep->declBit(c+446,"top_sim instr_fetch_u if_bus_u if_bus_bus_err_o", false,-1);
        tracep->declBus(c+51,"top_sim instr_fetch_u if_bus_u pc", false,-1, 9,0);
        tracep->declBus(c+8,"top_sim instr_fetch_u if_mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+44,"top_sim instr_fetch_u if_mini_dec_u mini_dec_jal_o", false,-1);
        tracep->declBit(c+45,"top_sim instr_fetch_u if_mini_dec_u mini_dec_jalr_o", false,-1);
        tracep->declBit(c+46,"top_sim instr_fetch_u if_mini_dec_u mini_dec_branch_o", false,-1);
        tracep->declBus(c+5,"top_sim instr_fetch_u if_mini_dec_u mini_dec_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+47,"top_sim instr_fetch_u if_mini_dec_u mini_dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+52,"top_sim instr_fetch_u if_mini_dec_u opcode_info", false,-1, 11,0);
        tracep->declBus(c+8,"top_sim instr_fetch_u if_mini_dec_u idu instr_i", false,-1, 31,0);
        tracep->declBus(c+5,"top_sim instr_fetch_u if_mini_dec_u idu id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim instr_fetch_u if_mini_dec_u idu id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+457,"top_sim instr_fetch_u if_mini_dec_u idu rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+459,"top_sim instr_fetch_u if_mini_dec_u idu rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+53,"top_sim instr_fetch_u if_mini_dec_u idu id_csr_wen_o", false,-1);
        tracep->declBus(c+15,"top_sim instr_fetch_u if_mini_dec_u idu id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+461,"top_sim instr_fetch_u if_mini_dec_u idu csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+52,"top_sim instr_fetch_u if_mini_dec_u idu id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+54,"top_sim instr_fetch_u if_mini_dec_u idu id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+55,"top_sim instr_fetch_u if_mini_dec_u idu id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+56,"top_sim instr_fetch_u if_mini_dec_u idu id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+57,"top_sim instr_fetch_u if_mini_dec_u idu id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+457,"top_sim instr_fetch_u if_mini_dec_u idu id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+459,"top_sim instr_fetch_u if_mini_dec_u idu id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+47,"top_sim instr_fetch_u if_mini_dec_u idu id_imm_o", false,-1, 63,0);
        tracep->declBit(c+58,"top_sim instr_fetch_u if_mini_dec_u idu id_rd_wen_o", false,-1);
        tracep->declBus(c+24,"top_sim instr_fetch_u if_mini_dec_u idu id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+463,"top_sim instr_fetch_u if_mini_dec_u idu id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+465,"top_sim instr_fetch_u if_mini_dec_u idu id_ilegl_instr_o", false,-1);
        tracep->declBit(c+59,"top_sim instr_fetch_u if_mini_dec_u idu id_ecall_o", false,-1);
        tracep->declBit(c+60,"top_sim instr_fetch_u if_mini_dec_u idu id_ebreak_o", false,-1);
        tracep->declBit(c+61,"top_sim instr_fetch_u if_mini_dec_u idu id_mret_o", false,-1);
        tracep->declBus(c+62,"top_sim instr_fetch_u if_mini_dec_u idu opcode", false,-1, 6,0);
        tracep->declBus(c+24,"top_sim instr_fetch_u if_mini_dec_u idu rd", false,-1, 4,0);
        tracep->declBus(c+63,"top_sim instr_fetch_u if_mini_dec_u idu fun3", false,-1, 2,0);
        tracep->declBus(c+5,"top_sim instr_fetch_u if_mini_dec_u idu rs1", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim instr_fetch_u if_mini_dec_u idu rs2", false,-1, 4,0);
        tracep->declBus(c+64,"top_sim instr_fetch_u if_mini_dec_u idu fun7", false,-1, 6,0);
        tracep->declBit(c+65,"top_sim instr_fetch_u if_mini_dec_u idu rv64_alu_imm", false,-1);
        tracep->declBit(c+66,"top_sim instr_fetch_u if_mini_dec_u idu rv64_alu_imm_w", false,-1);
        tracep->declBit(c+67,"top_sim instr_fetch_u if_mini_dec_u idu rv64_alu", false,-1);
        tracep->declBit(c+68,"top_sim instr_fetch_u if_mini_dec_u idu rv64_alu_w", false,-1);
        tracep->declBit(c+46,"top_sim instr_fetch_u if_mini_dec_u idu rv64_branch", false,-1);
        tracep->declBit(c+44,"top_sim instr_fetch_u if_mini_dec_u idu rv64_jal", false,-1);
        tracep->declBit(c+45,"top_sim instr_fetch_u if_mini_dec_u idu rv64_jalr", false,-1);
        tracep->declBit(c+69,"top_sim instr_fetch_u if_mini_dec_u idu rv64_load", false,-1);
        tracep->declBit(c+70,"top_sim instr_fetch_u if_mini_dec_u idu rv64_store", false,-1);
        tracep->declBit(c+71,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lui", false,-1);
        tracep->declBit(c+72,"top_sim instr_fetch_u if_mini_dec_u idu rv64_auipc", false,-1);
        tracep->declBit(c+73,"top_sim instr_fetch_u if_mini_dec_u idu rv64_system", false,-1);
        tracep->declBit(c+74,"top_sim instr_fetch_u if_mini_dec_u idu rv64_addi", false,-1);
        tracep->declBit(c+75,"top_sim instr_fetch_u if_mini_dec_u idu rv64_addiw", false,-1);
        tracep->declBit(c+76,"top_sim instr_fetch_u if_mini_dec_u idu rv64_slli", false,-1);
        tracep->declBit(c+77,"top_sim instr_fetch_u if_mini_dec_u idu rv64_slliw", false,-1);
        tracep->declBit(c+78,"top_sim instr_fetch_u if_mini_dec_u idu rv64_slti", false,-1);
        tracep->declBit(c+79,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sltui", false,-1);
        tracep->declBit(c+80,"top_sim instr_fetch_u if_mini_dec_u idu rv64_xori", false,-1);
        tracep->declBit(c+81,"top_sim instr_fetch_u if_mini_dec_u idu rv64_srli", false,-1);
        tracep->declBit(c+82,"top_sim instr_fetch_u if_mini_dec_u idu rv64_srliw", false,-1);
        tracep->declBit(c+83,"top_sim instr_fetch_u if_mini_dec_u idu rv64_srai", false,-1);
        tracep->declBit(c+84,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sraiw", false,-1);
        tracep->declBit(c+85,"top_sim instr_fetch_u if_mini_dec_u idu rv64_ori", false,-1);
        tracep->declBit(c+86,"top_sim instr_fetch_u if_mini_dec_u idu rv64_andi", false,-1);
        tracep->declBit(c+87,"top_sim instr_fetch_u if_mini_dec_u idu rv64_add", false,-1);
        tracep->declBit(c+88,"top_sim instr_fetch_u if_mini_dec_u idu rv64_addw", false,-1);
        tracep->declBit(c+89,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sub", false,-1);
        tracep->declBit(c+90,"top_sim instr_fetch_u if_mini_dec_u idu rv64_subw", false,-1);
        tracep->declBit(c+91,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sll", false,-1);
        tracep->declBit(c+92,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sllw", false,-1);
        tracep->declBit(c+93,"top_sim instr_fetch_u if_mini_dec_u idu rv64_slt", false,-1);
        tracep->declBit(c+94,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sltu", false,-1);
        tracep->declBit(c+95,"top_sim instr_fetch_u if_mini_dec_u idu rv64_xor", false,-1);
        tracep->declBit(c+96,"top_sim instr_fetch_u if_mini_dec_u idu rv64_srl", false,-1);
        tracep->declBit(c+97,"top_sim instr_fetch_u if_mini_dec_u idu rv64_srlw", false,-1);
        tracep->declBit(c+98,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sra", false,-1);
        tracep->declBit(c+99,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sraw", false,-1);
        tracep->declBit(c+100,"top_sim instr_fetch_u if_mini_dec_u idu rv64_or", false,-1);
        tracep->declBit(c+101,"top_sim instr_fetch_u if_mini_dec_u idu rv64_and", false,-1);
        tracep->declBit(c+102,"top_sim instr_fetch_u if_mini_dec_u idu rv64_beq", false,-1);
        tracep->declBit(c+103,"top_sim instr_fetch_u if_mini_dec_u idu rv64_bne", false,-1);
        tracep->declBit(c+104,"top_sim instr_fetch_u if_mini_dec_u idu rv64_blt", false,-1);
        tracep->declBit(c+105,"top_sim instr_fetch_u if_mini_dec_u idu rv64_bge", false,-1);
        tracep->declBit(c+106,"top_sim instr_fetch_u if_mini_dec_u idu rv64_bltu", false,-1);
        tracep->declBit(c+107,"top_sim instr_fetch_u if_mini_dec_u idu rv64_bgeu", false,-1);
        tracep->declBit(c+108,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lb", false,-1);
        tracep->declBit(c+109,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lh", false,-1);
        tracep->declBit(c+110,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lw", false,-1);
        tracep->declBit(c+111,"top_sim instr_fetch_u if_mini_dec_u idu rv64_ld", false,-1);
        tracep->declBit(c+112,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lbu", false,-1);
        tracep->declBit(c+113,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lhu", false,-1);
        tracep->declBit(c+114,"top_sim instr_fetch_u if_mini_dec_u idu rv64_lwu", false,-1);
        tracep->declBit(c+115,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sb", false,-1);
        tracep->declBit(c+116,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sh", false,-1);
        tracep->declBit(c+117,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sw", false,-1);
        tracep->declBit(c+118,"top_sim instr_fetch_u if_mini_dec_u idu rv64_sd", false,-1);
        tracep->declBit(c+59,"top_sim instr_fetch_u if_mini_dec_u idu rv64_ecall", false,-1);
        tracep->declBit(c+60,"top_sim instr_fetch_u if_mini_dec_u idu rv64_ebreak", false,-1);
        tracep->declBit(c+61,"top_sim instr_fetch_u if_mini_dec_u idu rv64_mret", false,-1);
        tracep->declBit(c+119,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrw", false,-1);
        tracep->declBit(c+120,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrs", false,-1);
        tracep->declBit(c+121,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrc", false,-1);
        tracep->declBit(c+122,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrwi", false,-1);
        tracep->declBit(c+123,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrsi", false,-1);
        tracep->declBit(c+124,"top_sim instr_fetch_u if_mini_dec_u idu rv64_csrrci", false,-1);
        tracep->declBit(c+125,"top_sim instr_fetch_u if_mini_dec_u idu rv64_need_rs1", false,-1);
        tracep->declBit(c+126,"top_sim instr_fetch_u if_mini_dec_u idu rv64_need_rs2", false,-1);
        tracep->declBit(c+58,"top_sim instr_fetch_u if_mini_dec_u idu rv64_need_rd", false,-1);
        tracep->declBit(c+53,"top_sim instr_fetch_u if_mini_dec_u idu rv64_need_csr", false,-1);
        tracep->declQuad(c+127,"top_sim instr_fetch_u if_mini_dec_u idu rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+129,"top_sim instr_fetch_u if_mini_dec_u idu rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+131,"top_sim instr_fetch_u if_mini_dec_u idu rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+133,"top_sim instr_fetch_u if_mini_dec_u idu rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+135,"top_sim instr_fetch_u if_mini_dec_u idu rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+137,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm_sel_i", false,-1);
        tracep->declBit(c+70,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm_sel_s", false,-1);
        tracep->declBit(c+46,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm_sel_b", false,-1);
        tracep->declBit(c+44,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm_sel_j", false,-1);
        tracep->declBit(c+138,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+47,"top_sim instr_fetch_u if_mini_dec_u idu rv64_imm", false,-1, 63,0);
        tracep->declBus(c+8,"top_sim id_u instr_i", false,-1, 31,0);
        tracep->declBus(c+5,"top_sim id_u id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim id_u id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+10,"top_sim id_u rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim id_u rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+14,"top_sim id_u id_csr_wen_o", false,-1);
        tracep->declBus(c+15,"top_sim id_u id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+447,"top_sim id_u csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+16,"top_sim id_u id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+17,"top_sim id_u id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+18,"top_sim id_u id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+19,"top_sim id_u id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+20,"top_sim id_u id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+10,"top_sim id_u id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim id_u id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim id_u id_imm_o", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim id_u id_rd_wen_o", false,-1);
        tracep->declBus(c+24,"top_sim id_u id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+449,"top_sim id_u id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+451,"top_sim id_u id_ilegl_instr_o", false,-1);
        tracep->declBit(c+25,"top_sim id_u id_ecall_o", false,-1);
        tracep->declBit(c+26,"top_sim id_u id_ebreak_o", false,-1);
        tracep->declBit(c+27,"top_sim id_u id_mret_o", false,-1);
        tracep->declBus(c+62,"top_sim id_u opcode", false,-1, 6,0);
        tracep->declBus(c+24,"top_sim id_u rd", false,-1, 4,0);
        tracep->declBus(c+63,"top_sim id_u fun3", false,-1, 2,0);
        tracep->declBus(c+5,"top_sim id_u rs1", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim id_u rs2", false,-1, 4,0);
        tracep->declBus(c+64,"top_sim id_u fun7", false,-1, 6,0);
        tracep->declBit(c+65,"top_sim id_u rv64_alu_imm", false,-1);
        tracep->declBit(c+66,"top_sim id_u rv64_alu_imm_w", false,-1);
        tracep->declBit(c+67,"top_sim id_u rv64_alu", false,-1);
        tracep->declBit(c+68,"top_sim id_u rv64_alu_w", false,-1);
        tracep->declBit(c+46,"top_sim id_u rv64_branch", false,-1);
        tracep->declBit(c+44,"top_sim id_u rv64_jal", false,-1);
        tracep->declBit(c+45,"top_sim id_u rv64_jalr", false,-1);
        tracep->declBit(c+69,"top_sim id_u rv64_load", false,-1);
        tracep->declBit(c+70,"top_sim id_u rv64_store", false,-1);
        tracep->declBit(c+71,"top_sim id_u rv64_lui", false,-1);
        tracep->declBit(c+72,"top_sim id_u rv64_auipc", false,-1);
        tracep->declBit(c+73,"top_sim id_u rv64_system", false,-1);
        tracep->declBit(c+74,"top_sim id_u rv64_addi", false,-1);
        tracep->declBit(c+75,"top_sim id_u rv64_addiw", false,-1);
        tracep->declBit(c+76,"top_sim id_u rv64_slli", false,-1);
        tracep->declBit(c+77,"top_sim id_u rv64_slliw", false,-1);
        tracep->declBit(c+78,"top_sim id_u rv64_slti", false,-1);
        tracep->declBit(c+79,"top_sim id_u rv64_sltui", false,-1);
        tracep->declBit(c+80,"top_sim id_u rv64_xori", false,-1);
        tracep->declBit(c+81,"top_sim id_u rv64_srli", false,-1);
        tracep->declBit(c+82,"top_sim id_u rv64_srliw", false,-1);
        tracep->declBit(c+83,"top_sim id_u rv64_srai", false,-1);
        tracep->declBit(c+84,"top_sim id_u rv64_sraiw", false,-1);
        tracep->declBit(c+85,"top_sim id_u rv64_ori", false,-1);
        tracep->declBit(c+86,"top_sim id_u rv64_andi", false,-1);
        tracep->declBit(c+87,"top_sim id_u rv64_add", false,-1);
        tracep->declBit(c+88,"top_sim id_u rv64_addw", false,-1);
        tracep->declBit(c+89,"top_sim id_u rv64_sub", false,-1);
        tracep->declBit(c+90,"top_sim id_u rv64_subw", false,-1);
        tracep->declBit(c+91,"top_sim id_u rv64_sll", false,-1);
        tracep->declBit(c+92,"top_sim id_u rv64_sllw", false,-1);
        tracep->declBit(c+93,"top_sim id_u rv64_slt", false,-1);
        tracep->declBit(c+94,"top_sim id_u rv64_sltu", false,-1);
        tracep->declBit(c+95,"top_sim id_u rv64_xor", false,-1);
        tracep->declBit(c+96,"top_sim id_u rv64_srl", false,-1);
        tracep->declBit(c+97,"top_sim id_u rv64_srlw", false,-1);
        tracep->declBit(c+98,"top_sim id_u rv64_sra", false,-1);
        tracep->declBit(c+99,"top_sim id_u rv64_sraw", false,-1);
        tracep->declBit(c+100,"top_sim id_u rv64_or", false,-1);
        tracep->declBit(c+101,"top_sim id_u rv64_and", false,-1);
        tracep->declBit(c+102,"top_sim id_u rv64_beq", false,-1);
        tracep->declBit(c+103,"top_sim id_u rv64_bne", false,-1);
        tracep->declBit(c+104,"top_sim id_u rv64_blt", false,-1);
        tracep->declBit(c+105,"top_sim id_u rv64_bge", false,-1);
        tracep->declBit(c+106,"top_sim id_u rv64_bltu", false,-1);
        tracep->declBit(c+107,"top_sim id_u rv64_bgeu", false,-1);
        tracep->declBit(c+108,"top_sim id_u rv64_lb", false,-1);
        tracep->declBit(c+109,"top_sim id_u rv64_lh", false,-1);
        tracep->declBit(c+110,"top_sim id_u rv64_lw", false,-1);
        tracep->declBit(c+111,"top_sim id_u rv64_ld", false,-1);
        tracep->declBit(c+112,"top_sim id_u rv64_lbu", false,-1);
        tracep->declBit(c+113,"top_sim id_u rv64_lhu", false,-1);
        tracep->declBit(c+114,"top_sim id_u rv64_lwu", false,-1);
        tracep->declBit(c+115,"top_sim id_u rv64_sb", false,-1);
        tracep->declBit(c+116,"top_sim id_u rv64_sh", false,-1);
        tracep->declBit(c+117,"top_sim id_u rv64_sw", false,-1);
        tracep->declBit(c+118,"top_sim id_u rv64_sd", false,-1);
        tracep->declBit(c+25,"top_sim id_u rv64_ecall", false,-1);
        tracep->declBit(c+26,"top_sim id_u rv64_ebreak", false,-1);
        tracep->declBit(c+27,"top_sim id_u rv64_mret", false,-1);
        tracep->declBit(c+139,"top_sim id_u rv64_csrrw", false,-1);
        tracep->declBit(c+140,"top_sim id_u rv64_csrrs", false,-1);
        tracep->declBit(c+141,"top_sim id_u rv64_csrrc", false,-1);
        tracep->declBit(c+142,"top_sim id_u rv64_csrrwi", false,-1);
        tracep->declBit(c+143,"top_sim id_u rv64_csrrsi", false,-1);
        tracep->declBit(c+144,"top_sim id_u rv64_csrrci", false,-1);
        tracep->declBit(c+145,"top_sim id_u rv64_need_rs1", false,-1);
        tracep->declBit(c+126,"top_sim id_u rv64_need_rs2", false,-1);
        tracep->declBit(c+23,"top_sim id_u rv64_need_rd", false,-1);
        tracep->declBit(c+14,"top_sim id_u rv64_need_csr", false,-1);
        tracep->declQuad(c+127,"top_sim id_u rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+129,"top_sim id_u rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+131,"top_sim id_u rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+133,"top_sim id_u rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+135,"top_sim id_u rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+137,"top_sim id_u rv64_imm_sel_i", false,-1);
        tracep->declBit(c+70,"top_sim id_u rv64_imm_sel_s", false,-1);
        tracep->declBit(c+46,"top_sim id_u rv64_imm_sel_b", false,-1);
        tracep->declBit(c+44,"top_sim id_u rv64_imm_sel_j", false,-1);
        tracep->declBit(c+138,"top_sim id_u rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+21,"top_sim id_u rv64_imm", false,-1, 63,0);
        tracep->declBit(c+427,"top_sim regfile_u clk", false,-1);
        tracep->declBit(c+428,"top_sim regfile_u reset", false,-1);
        tracep->declBit(c+23,"top_sim regfile_u rd_wen_i", false,-1);
        tracep->declBus(c+24,"top_sim regfile_u rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+39,"top_sim regfile_u rd_wdata_i", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim regfile_u rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+9,"top_sim regfile_u rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+10,"top_sim regfile_u rf_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim regfile_u rf_rs2_rdata_o", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim regfile_u jalr_rs1_idx_i", false,-1, 4,0);
        tracep->declQuad(c+6,"top_sim regfile_u rf_jalr_rs1_rdata_o", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+146+i*2,"top_sim regfile_u reg_data_o", true,(i+1), 63,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+208+i*2,"top_sim regfile_u reg_data", true,(i+1), 63,0);}}
        tracep->declBus(c+270,"top_sim regfile_u i", false,-1, 31,0);
        tracep->declBus(c+16,"top_sim ex_u opcode_info_i", false,-1, 11,0);
        tracep->declBus(c+17,"top_sim ex_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+18,"top_sim ex_u branch_info_i", false,-1, 5,0);
        tracep->declBus(c+19,"top_sim ex_u ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+20,"top_sim ex_u csr_info_i", false,-1, 5,0);
        tracep->declQuad(c+1,"top_sim ex_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top_sim ex_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim ex_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim ex_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+28,"top_sim ex_u ex_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim ex_u ex_mem_addr_o", false,-1, 63,0);
        tracep->declQuad(c+452,"top_sim ex_u ex_cgu_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+32,"top_sim ex_u ex_branch_jump_o", false,-1);
        tracep->declBus(c+16,"top_sim ex_u alu_u opcode_info_i", false,-1, 11,0);
        tracep->declBus(c+17,"top_sim ex_u alu_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+18,"top_sim ex_u alu_u branch_info_i", false,-1, 5,0);
        tracep->declQuad(c+1,"top_sim ex_u alu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top_sim ex_u alu_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim ex_u alu_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim ex_u alu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+28,"top_sim ex_u alu_u alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim ex_u alu_u mem_addr_o", false,-1, 63,0);
        tracep->declBit(c+32,"top_sim ex_u alu_u alu_branch_jump_o", false,-1);
        tracep->declBit(c+271,"top_sim ex_u alu_u op_alu_imm", false,-1);
        tracep->declBit(c+272,"top_sim ex_u alu_u op_alu_imm_w", false,-1);
        tracep->declBit(c+273,"top_sim ex_u alu_u op_alu", false,-1);
        tracep->declBit(c+274,"top_sim ex_u alu_u op_alu_w", false,-1);
        tracep->declBit(c+43,"top_sim ex_u alu_u op_branch", false,-1);
        tracep->declBit(c+41,"top_sim ex_u alu_u op_jal", false,-1);
        tracep->declBit(c+42,"top_sim ex_u alu_u op_jalr", false,-1);
        tracep->declBit(c+275,"top_sim ex_u alu_u op_load", false,-1);
        tracep->declBit(c+276,"top_sim ex_u alu_u op_store", false,-1);
        tracep->declBit(c+277,"top_sim ex_u alu_u op_lui", false,-1);
        tracep->declBit(c+278,"top_sim ex_u alu_u op_auipc", false,-1);
        tracep->declBit(c+279,"top_sim ex_u alu_u alu_add", false,-1);
        tracep->declBit(c+280,"top_sim ex_u alu_u alu_sub", false,-1);
        tracep->declBit(c+281,"top_sim ex_u alu_u alu_sll", false,-1);
        tracep->declBit(c+282,"top_sim ex_u alu_u alu_slt", false,-1);
        tracep->declBit(c+283,"top_sim ex_u alu_u alu_sltu", false,-1);
        tracep->declBit(c+284,"top_sim ex_u alu_u alu_xor", false,-1);
        tracep->declBit(c+285,"top_sim ex_u alu_u alu_srl", false,-1);
        tracep->declBit(c+286,"top_sim ex_u alu_u alu_sra", false,-1);
        tracep->declBit(c+287,"top_sim ex_u alu_u alu_or", false,-1);
        tracep->declBit(c+288,"top_sim ex_u alu_u alu_and", false,-1);
        tracep->declBit(c+289,"top_sim ex_u alu_u branch_beq", false,-1);
        tracep->declBit(c+290,"top_sim ex_u alu_u branch_bne", false,-1);
        tracep->declBit(c+291,"top_sim ex_u alu_u branch_blt", false,-1);
        tracep->declBit(c+292,"top_sim ex_u alu_u branch_bge", false,-1);
        tracep->declBit(c+293,"top_sim ex_u alu_u branch_bltu", false,-1);
        tracep->declBit(c+294,"top_sim ex_u alu_u branch_bgeu", false,-1);
        tracep->declBit(c+295,"top_sim ex_u alu_u res_sel_add", false,-1);
        tracep->declBit(c+280,"top_sim ex_u alu_u res_sel_sub", false,-1);
        tracep->declBit(c+296,"top_sim ex_u alu_u res_sel_add_sub", false,-1);
        tracep->declBit(c+281,"top_sim ex_u alu_u res_sel_sll", false,-1);
        tracep->declBit(c+282,"top_sim ex_u alu_u res_sel_slt", false,-1);
        tracep->declBit(c+283,"top_sim ex_u alu_u res_sel_sltu", false,-1);
        tracep->declBit(c+284,"top_sim ex_u alu_u res_sel_xor", false,-1);
        tracep->declBit(c+285,"top_sim ex_u alu_u res_sel_srl", false,-1);
        tracep->declBit(c+286,"top_sim ex_u alu_u res_sel_sra", false,-1);
        tracep->declBit(c+287,"top_sim ex_u alu_u res_sel_or", false,-1);
        tracep->declBit(c+288,"top_sim ex_u alu_u res_sel_and", false,-1);
        tracep->declQuad(c+297,"top_sim ex_u alu_u alu_op1", false,-1, 63,0);
        tracep->declQuad(c+299,"top_sim ex_u alu_u alu_op2", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim ex_u alu_u alu_add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+301,"top_sim ex_u alu_u alu_sll_res", false,-1, 63,0);
        tracep->declQuad(c+303,"top_sim ex_u alu_u alu_slt_res", false,-1, 63,0);
        tracep->declQuad(c+305,"top_sim ex_u alu_u alu_sltu_res", false,-1, 63,0);
        tracep->declQuad(c+307,"top_sim ex_u alu_u alu_xor_res", false,-1, 63,0);
        tracep->declQuad(c+309,"top_sim ex_u alu_u alu_srl_res", false,-1, 63,0);
        tracep->declQuad(c+311,"top_sim ex_u alu_u alu_sra_res", false,-1, 63,0);
        tracep->declQuad(c+313,"top_sim ex_u alu_u alu_or_res", false,-1, 63,0);
        tracep->declQuad(c+315,"top_sim ex_u alu_u alu_and_res", false,-1, 63,0);
        tracep->declBus(c+317,"top_sim ex_u alu_u shift_op2", false,-1, 5,0);
        tracep->declQuad(c+318,"top_sim ex_u alu_u alu_res", false,-1, 63,0);
        tracep->declBit(c+320,"top_sim ex_u alu_u sel_w_res", false,-1);
        tracep->declBus(c+321,"top_sim ex_u alu_u alu_res_truncat", false,-1, 31,0);
        tracep->declQuad(c+322,"top_sim ex_u alu_u alu_res_w", false,-1, 63,0);
        tracep->declBit(c+324,"top_sim ex_u alu_u ne", false,-1);
        tracep->declBit(c+325,"top_sim ex_u alu_u eq", false,-1);
        tracep->declBit(c+326,"top_sim ex_u alu_u lt", false,-1);
        tracep->declBit(c+327,"top_sim ex_u alu_u ge", false,-1);
        tracep->declBit(c+328,"top_sim ex_u alu_u ltu", false,-1);
        tracep->declBit(c+329,"top_sim ex_u alu_u geu", false,-1);
        tracep->declBus(c+20,"top_sim ex_u u_cgu csr_info_i", false,-1, 5,0);
        tracep->declQuad(c+10,"top_sim ex_u u_cgu rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim ex_u u_cgu imm_i", false,-1, 63,0);
        tracep->declQuad(c+452,"top_sim ex_u u_cgu cgu_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+139,"top_sim ex_u u_cgu csrrw", false,-1);
        tracep->declBit(c+140,"top_sim ex_u u_cgu csrrs", false,-1);
        tracep->declBit(c+141,"top_sim ex_u u_cgu csrrc", false,-1);
        tracep->declBit(c+142,"top_sim ex_u u_cgu csrrwi", false,-1);
        tracep->declBit(c+143,"top_sim ex_u u_cgu csrrsi", false,-1);
        tracep->declBit(c+144,"top_sim ex_u u_cgu csrrci", false,-1);
        tracep->declBus(c+19,"top_sim mem_u ld_st_info_i", false,-1, 10,0);
        tracep->declQuad(c+30,"top_sim mem_u mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top_sim mem_u mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+33,"top_sim mem_u mem_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim mem_u ram_addr_o", false,-1, 63,0);
        tracep->declBit(c+35,"top_sim mem_u ram_wen_o", false,-1);
        tracep->declQuad(c+12,"top_sim mem_u ram_wdata_o", false,-1, 63,0);
        tracep->declBus(c+36,"top_sim mem_u ram_wmask_o", false,-1, 1,0);
        tracep->declQuad(c+37,"top_sim mem_u ram_rdata_i", false,-1, 63,0);
        tracep->declBit(c+330,"top_sim mem_u lb", false,-1);
        tracep->declBit(c+331,"top_sim mem_u lh", false,-1);
        tracep->declBit(c+332,"top_sim mem_u lw", false,-1);
        tracep->declBit(c+333,"top_sim mem_u ld", false,-1);
        tracep->declBit(c+334,"top_sim mem_u lbu", false,-1);
        tracep->declBit(c+335,"top_sim mem_u lhu", false,-1);
        tracep->declBit(c+336,"top_sim mem_u lwu", false,-1);
        tracep->declBit(c+337,"top_sim mem_u sb", false,-1);
        tracep->declBit(c+338,"top_sim mem_u sh", false,-1);
        tracep->declBit(c+339,"top_sim mem_u sw", false,-1);
        tracep->declBit(c+340,"top_sim mem_u sd", false,-1);
        tracep->declQuad(c+341,"top_sim mem_u mem_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+343,"top_sim mem_u mem_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+345,"top_sim mem_u mem_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+37,"top_sim mem_u mem_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+347,"top_sim mem_u mem_rdata_lbu", false,-1, 63,0);
        tracep->declQuad(c+349,"top_sim mem_u mem_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+351,"top_sim mem_u mem_rdata_lwu", false,-1, 63,0);
        tracep->declBus(c+466,"top_sim ram_u SIZE", false,-1, 31,0);
        tracep->declBit(c+427,"top_sim ram_u clk", false,-1);
        tracep->declQuad(c+30,"top_sim ram_u addr_i", false,-1, 63,0);
        tracep->declBit(c+35,"top_sim ram_u wen_i", false,-1);
        tracep->declQuad(c+12,"top_sim ram_u wdata_i", false,-1, 63,0);
        tracep->declBus(c+36,"top_sim ram_u wmask_i", false,-1, 1,0);
        tracep->declQuad(c+37,"top_sim ram_u rdata_o", false,-1, 63,0);
        tracep->declBus(c+353,"top_sim ram_u addr", false,-1, 9,0);
        tracep->declBit(c+23,"top_sim wb_u rd_wen_i", false,-1);
        tracep->declBus(c+24,"top_sim wb_u rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+16,"top_sim wb_u opcode_info_i", false,-1, 11,0);
        tracep->declQuad(c+28,"top_sim wb_u alu_rd_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+33,"top_sim wb_u mem_rd_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+449,"top_sim wb_u csr_rd_wdata_i", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim wb_u wb_rd_wen_o", false,-1);
        tracep->declBus(c+24,"top_sim wb_u wb_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+39,"top_sim wb_u wb_rd_wdata_o", false,-1, 63,0);
        tracep->declBit(c+275,"top_sim wb_u op_load", false,-1);
        tracep->declBit(c+354,"top_sim wb_u op_system", false,-1);
        tracep->declQuad(c+1,"top_sim pc_next_gen_u pc_i", false,-1, 63,0);
        tracep->declBit(c+41,"top_sim pc_next_gen_u jal_i", false,-1);
        tracep->declBit(c+42,"top_sim pc_next_gen_u jalr_i", false,-1);
        tracep->declBit(c+43,"top_sim pc_next_gen_u branch_i", false,-1);
        tracep->declBit(c+32,"top_sim pc_next_gen_u branch_jump_i", false,-1);
        tracep->declQuad(c+21,"top_sim pc_next_gen_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top_sim pc_next_gen_u jalr_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top_sim pc_next_gen_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+355,"top_sim pc_next_gen_u bj", false,-1);
        tracep->declBit(c+356,"top_sim pc_next_gen_u jump", false,-1);
        tracep->declQuad(c+357,"top_sim pc_next_gen_u jump_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim pc_next_gen_u jump_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+359,"top_sim pc_next_gen_u pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+361,"top_sim pc_next_gen_u pc_add_op2", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r),64);
        tracep->fullQData(oldp+3,((((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                     ? ((IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                         ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                         : ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                             ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                             : 0ULL))
                                     : vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r) 
                                   + ((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                       ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                       : 4ULL))),64);
        tracep->fullCData(oldp+5,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                            >> 0xfU))),5);
        tracep->fullQData(oldp+6,(((0U == (0x1fU & 
                                           (vlSelf->top_sim__DOT__if_instr 
                                            >> 0xfU)))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((vlSelf->top_sim__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                               ? vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                              [(0x1fU 
                                                & ((vlSelf->top_sim__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
        tracep->fullIData(oldp+8,(vlSelf->top_sim__DOT__if_instr),32);
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x14U))),5);
        tracep->fullQData(oldp+10,(vlSelf->top_sim__DOT__rf_rs1_rdata),64);
        tracep->fullQData(oldp+12,(vlSelf->top_sim__DOT__rf_rs2_rdata),64);
        tracep->fullBit(oldp+14,(((((((IData)((0x1073U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      | (IData)((0x2073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))) 
                                     | (IData)((0x3073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))) 
                                    | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+15,((vlSelf->top_sim__DOT__if_instr 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+16,(vlSelf->top_sim__DOT__id_opcode_info),12);
        tracep->fullSData(oldp+17,(vlSelf->top_sim__DOT__id_alu_info),10);
        tracep->fullCData(oldp+18,(vlSelf->top_sim__DOT__id_branch_info),6);
        tracep->fullSData(oldp+19,(vlSelf->top_sim__DOT__id_ld_st_info),11);
        tracep->fullCData(oldp+20,((((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))))))),6);
        tracep->fullQData(oldp+21,(vlSelf->top_sim__DOT__id_u__DOT__rv64_imm),64);
        tracep->fullBit(oldp+23,(vlSelf->top_sim__DOT__id_u__DOT__rv64_need_rd));
        tracep->fullCData(oldp+24,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+25,(vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall));
        tracep->fullBit(oldp+26,(vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak));
        tracep->fullBit(oldp+27,(vlSelf->top_sim__DOT__id_u__DOT__rv64_mret));
        tracep->fullQData(oldp+28,(vlSelf->top_sim__DOT__ex_alu_res),64);
        tracep->fullQData(oldp+30,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res),64);
        tracep->fullBit(oldp+32,(vlSelf->top_sim__DOT__ex_branch_jump));
        tracep->fullQData(oldp+33,(vlSelf->top_sim__DOT__mem_rdata),64);
        tracep->fullBit(oldp+35,((IData)((0U != (0xfU 
                                                 & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))))));
        tracep->fullCData(oldp+36,(vlSelf->top_sim__DOT__ram_wmask),2);
        tracep->fullQData(oldp+37,(vlSelf->top_sim__DOT__ram_rdata),64);
        tracep->fullQData(oldp+39,(((0x10U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                     ? vlSelf->top_sim__DOT__mem_rdata
                                     : ((1U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                         ? vlSelf->top_sim__DOT__id_csr_rdata
                                         : vlSelf->top_sim__DOT__ex_alu_res))),64);
        tracep->fullBit(oldp+41,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                        >> 6U))));
        tracep->fullBit(oldp+42,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                        >> 5U))));
        tracep->fullBit(oldp+43,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                        >> 7U))));
        tracep->fullBit(oldp+44,((0x6fU == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+45,((0x67U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+46,((0x63U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullQData(oldp+47,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
        tracep->fullQData(oldp+49,((((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))
                                     ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                     : ((0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top_sim__DOT__if_instr 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : ((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & ((vlSelf->top_sim__DOT__if_instr 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                                 ? 
                                                vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                                [(0x1fU 
                                                  & ((vlSelf->top_sim__DOT__if_instr 
                                                      >> 0xfU) 
                                                     - (IData)(1U)))]
                                                 : 0ULL))
                                         : 0ULL))),64);
        tracep->fullSData(oldp+51,((0x3ffU & (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))),10);
        tracep->fullSData(oldp+52,((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)) 
                                     << 0xbU) | (((0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__if_instr)) 
                                                  << 0xaU) 
                                                 | (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top_sim__DOT__if_instr)) 
                                                     << 9U) 
                                                    | (((0x3bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top_sim__DOT__if_instr)) 
                                                        << 8U) 
                                                       | (((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top_sim__DOT__if_instr)) 
                                                           << 7U) 
                                                          | (((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top_sim__DOT__if_instr)) 
                                                              << 6U) 
                                                             | (((0x67U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                                                 << 5U) 
                                                                | (((3U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top_sim__DOT__if_instr)) 
                                                                    << 4U) 
                                                                   | (((0x23U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top_sim__DOT__if_instr)) 
                                                                       << 3U) 
                                                                      | (((0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__if_instr)) 
                                                                          << 2U) 
                                                                         | (((0x17U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__if_instr)) 
                                                                             << 1U) 
                                                                            | (0x73U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top_sim__DOT__if_instr)))))))))))))),12);
        tracep->fullBit(oldp+53,(((((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+54,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
        tracep->fullCData(oldp+55,((((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__if_instr))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__if_instr))))))))),6);
        tracep->fullSData(oldp+56,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
        tracep->fullCData(oldp+57,((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                     << 5U) | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
        tracep->fullBit(oldp+58,((((((~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+59,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
        tracep->fullBit(oldp+60,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
        tracep->fullBit(oldp+61,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret));
        tracep->fullCData(oldp+62,((0x7fU & vlSelf->top_sim__DOT__if_instr)),7);
        tracep->fullCData(oldp+63,((7U & (vlSelf->top_sim__DOT__if_instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+64,((vlSelf->top_sim__DOT__if_instr 
                                    >> 0x19U)),7);
        tracep->fullBit(oldp+65,((0x13U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+66,((0x1bU == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+67,((0x33U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+68,((0x3bU == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+69,((3U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+70,((0x23U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+71,((0x37U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+72,((0x17U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+73,((0x73U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
        tracep->fullBit(oldp+74,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+75,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+76,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+77,(((IData)((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+78,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+79,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+80,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+81,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+82,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+83,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+84,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+85,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+86,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+87,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+88,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+89,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+90,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+91,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+92,(((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+93,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+94,(((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+95,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+96,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+97,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0U == (vlSelf->top_sim__DOT__if_instr 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+98,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+99,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr))) 
                                  & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+100,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__if_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__if_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+101,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__if_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__if_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+102,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+103,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+104,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+105,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+106,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+107,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+108,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+109,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+110,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+111,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+112,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+113,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+114,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+115,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+116,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+117,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+118,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+119,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
        tracep->fullBit(oldp+120,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
        tracep->fullBit(oldp+121,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
        tracep->fullBit(oldp+122,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+123,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+124,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
        tracep->fullBit(oldp+125,((((((((((0x37U != 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
        tracep->fullBit(oldp+126,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullQData(oldp+127,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__if_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+129,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__if_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__if_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+131,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top_sim__DOT__if_instr 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top_sim__DOT__if_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top_sim__DOT__if_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top_sim__DOT__if_instr 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+133,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__if_instr 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->top_sim__DOT__if_instr 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->top_sim__DOT__if_instr) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top_sim__DOT__if_instr 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top_sim__DOT__if_instr 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__if_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__if_instr))))),64);
        tracep->fullBit(oldp+137,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__if_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+138,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__if_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+139,((IData)((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+140,((IData)((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+141,((IData)((0x3073U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
        tracep->fullBit(oldp+142,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+143,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+144,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci));
        tracep->fullBit(oldp+145,((((((((((0x37U != 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_mret)))));
        tracep->fullQData(oldp+146,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0]),64);
        tracep->fullQData(oldp+148,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[1]),64);
        tracep->fullQData(oldp+150,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[2]),64);
        tracep->fullQData(oldp+152,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[3]),64);
        tracep->fullQData(oldp+154,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[4]),64);
        tracep->fullQData(oldp+156,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[5]),64);
        tracep->fullQData(oldp+158,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[6]),64);
        tracep->fullQData(oldp+160,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[7]),64);
        tracep->fullQData(oldp+162,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[8]),64);
        tracep->fullQData(oldp+164,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[9]),64);
        tracep->fullQData(oldp+166,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[10]),64);
        tracep->fullQData(oldp+168,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[11]),64);
        tracep->fullQData(oldp+170,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[12]),64);
        tracep->fullQData(oldp+172,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[13]),64);
        tracep->fullQData(oldp+174,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[14]),64);
        tracep->fullQData(oldp+176,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[15]),64);
        tracep->fullQData(oldp+178,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[16]),64);
        tracep->fullQData(oldp+180,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[17]),64);
        tracep->fullQData(oldp+182,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[18]),64);
        tracep->fullQData(oldp+184,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[19]),64);
        tracep->fullQData(oldp+186,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[20]),64);
        tracep->fullQData(oldp+188,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[21]),64);
        tracep->fullQData(oldp+190,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[22]),64);
        tracep->fullQData(oldp+192,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[23]),64);
        tracep->fullQData(oldp+194,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[24]),64);
        tracep->fullQData(oldp+196,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[25]),64);
        tracep->fullQData(oldp+198,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[26]),64);
        tracep->fullQData(oldp+200,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[27]),64);
        tracep->fullQData(oldp+202,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[28]),64);
        tracep->fullQData(oldp+204,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[29]),64);
        tracep->fullQData(oldp+206,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[30]),64);
        tracep->fullQData(oldp+208,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0]),64);
        tracep->fullQData(oldp+210,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[1]),64);
        tracep->fullQData(oldp+212,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[2]),64);
        tracep->fullQData(oldp+214,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[3]),64);
        tracep->fullQData(oldp+216,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[4]),64);
        tracep->fullQData(oldp+218,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[5]),64);
        tracep->fullQData(oldp+220,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[6]),64);
        tracep->fullQData(oldp+222,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[7]),64);
        tracep->fullQData(oldp+224,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[8]),64);
        tracep->fullQData(oldp+226,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[9]),64);
        tracep->fullQData(oldp+228,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[10]),64);
        tracep->fullQData(oldp+230,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[11]),64);
        tracep->fullQData(oldp+232,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[12]),64);
        tracep->fullQData(oldp+234,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[13]),64);
        tracep->fullQData(oldp+236,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[14]),64);
        tracep->fullQData(oldp+238,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[15]),64);
        tracep->fullQData(oldp+240,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[16]),64);
        tracep->fullQData(oldp+242,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[17]),64);
        tracep->fullQData(oldp+244,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[18]),64);
        tracep->fullQData(oldp+246,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[19]),64);
        tracep->fullQData(oldp+248,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[20]),64);
        tracep->fullQData(oldp+250,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[21]),64);
        tracep->fullQData(oldp+252,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[22]),64);
        tracep->fullQData(oldp+254,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[23]),64);
        tracep->fullQData(oldp+256,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[24]),64);
        tracep->fullQData(oldp+258,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[25]),64);
        tracep->fullQData(oldp+260,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[26]),64);
        tracep->fullQData(oldp+262,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[27]),64);
        tracep->fullQData(oldp+264,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[28]),64);
        tracep->fullQData(oldp+266,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[29]),64);
        tracep->fullQData(oldp+268,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[30]),64);
        tracep->fullIData(oldp+270,(vlSelf->top_sim__DOT__regfile_u__DOT__i),32);
        tracep->fullBit(oldp+271,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+273,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+274,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+275,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+276,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+277,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+278,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+279,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+280,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+281,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+282,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+283,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+284,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+285,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+286,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+287,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+288,((1U & (IData)(vlSelf->top_sim__DOT__id_alu_info))));
        tracep->fullBit(oldp+289,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+290,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+291,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+292,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+293,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+294,((1U & (IData)(vlSelf->top_sim__DOT__id_branch_info))));
        tracep->fullBit(oldp+295,((1U & (IData)(((0U 
                                                  != 
                                                  (0x200U 
                                                   & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                 | (0U 
                                                    != 
                                                    (0x66U 
                                                     & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))))));
        tracep->fullBit(oldp+296,((1U & (IData)(((0U 
                                                  != 
                                                  (0x300U 
                                                   & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                 | (0U 
                                                    != 
                                                    (0x66U 
                                                     & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))))));
        tracep->fullQData(oldp+297,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1),64);
        tracep->fullQData(oldp+299,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2),64);
        tracep->fullQData(oldp+301,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     << (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+303,(((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+305,(((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+307,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res),64);
        tracep->fullQData(oldp+309,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     >> (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+311,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+313,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     | vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+315,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                     & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullCData(oldp+317,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2),6);
        tracep->fullQData(oldp+318,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res),64);
        tracep->fullBit(oldp+320,((IData)((0U != (0x500U 
                                                  & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))));
        tracep->fullIData(oldp+321,((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)),32);
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)))),64);
        tracep->fullBit(oldp+324,((0U != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)));
        tracep->fullBit(oldp+325,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))))));
        tracep->fullBit(oldp+326,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt));
        tracep->fullBit(oldp+327,(VL_GTS_IQQ(1,64,64, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
        tracep->fullBit(oldp+328,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu));
        tracep->fullBit(oldp+329,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                   > vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
        tracep->fullBit(oldp+330,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+331,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+332,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+333,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+334,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+335,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+336,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+337,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+338,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+339,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+340,((1U & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))));
        tracep->fullQData(oldp+341,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top_sim__DOT__ram_rdata 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top_sim__DOT__ram_rdata)))))),64);
        tracep->fullQData(oldp+343,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top_sim__DOT__ram_rdata 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top_sim__DOT__ram_rdata)))))),64);
        tracep->fullQData(oldp+345,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_sim__DOT__ram_rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__ram_rdata)))),64);
        tracep->fullQData(oldp+347,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top_sim__DOT__ram_rdata))))),64);
        tracep->fullQData(oldp+349,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top_sim__DOT__ram_rdata))))),64);
        tracep->fullQData(oldp+351,((QData)((IData)(vlSelf->top_sim__DOT__ram_rdata))),64);
        tracep->fullSData(oldp+353,((0x3ffU & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res))),10);
        tracep->fullBit(oldp+354,((1U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))));
        tracep->fullBit(oldp+355,((IData)((0U != (0xe0U 
                                                  & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))));
        tracep->fullBit(oldp+356,(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump));
        tracep->fullQData(oldp+357,(((IData)((0U != 
                                              (0xc0U 
                                               & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                      ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                      : ((0x20U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                          ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                          : 0ULL))),64);
        tracep->fullQData(oldp+359,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                      ? ((IData)((0U 
                                                  != 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                          ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                          : ((0x20U 
                                              & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                              ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                              : 0ULL))
                                      : vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)),64);
        tracep->fullQData(oldp+361,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                      ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                      : 4ULL)),64);
        tracep->fullQData(oldp+363,(vlSelf->reg_data_o[0]),64);
        tracep->fullQData(oldp+365,(vlSelf->reg_data_o[1]),64);
        tracep->fullQData(oldp+367,(vlSelf->reg_data_o[2]),64);
        tracep->fullQData(oldp+369,(vlSelf->reg_data_o[3]),64);
        tracep->fullQData(oldp+371,(vlSelf->reg_data_o[4]),64);
        tracep->fullQData(oldp+373,(vlSelf->reg_data_o[5]),64);
        tracep->fullQData(oldp+375,(vlSelf->reg_data_o[6]),64);
        tracep->fullQData(oldp+377,(vlSelf->reg_data_o[7]),64);
        tracep->fullQData(oldp+379,(vlSelf->reg_data_o[8]),64);
        tracep->fullQData(oldp+381,(vlSelf->reg_data_o[9]),64);
        tracep->fullQData(oldp+383,(vlSelf->reg_data_o[10]),64);
        tracep->fullQData(oldp+385,(vlSelf->reg_data_o[11]),64);
        tracep->fullQData(oldp+387,(vlSelf->reg_data_o[12]),64);
        tracep->fullQData(oldp+389,(vlSelf->reg_data_o[13]),64);
        tracep->fullQData(oldp+391,(vlSelf->reg_data_o[14]),64);
        tracep->fullQData(oldp+393,(vlSelf->reg_data_o[15]),64);
        tracep->fullQData(oldp+395,(vlSelf->reg_data_o[16]),64);
        tracep->fullQData(oldp+397,(vlSelf->reg_data_o[17]),64);
        tracep->fullQData(oldp+399,(vlSelf->reg_data_o[18]),64);
        tracep->fullQData(oldp+401,(vlSelf->reg_data_o[19]),64);
        tracep->fullQData(oldp+403,(vlSelf->reg_data_o[20]),64);
        tracep->fullQData(oldp+405,(vlSelf->reg_data_o[21]),64);
        tracep->fullQData(oldp+407,(vlSelf->reg_data_o[22]),64);
        tracep->fullQData(oldp+409,(vlSelf->reg_data_o[23]),64);
        tracep->fullQData(oldp+411,(vlSelf->reg_data_o[24]),64);
        tracep->fullQData(oldp+413,(vlSelf->reg_data_o[25]),64);
        tracep->fullQData(oldp+415,(vlSelf->reg_data_o[26]),64);
        tracep->fullQData(oldp+417,(vlSelf->reg_data_o[27]),64);
        tracep->fullQData(oldp+419,(vlSelf->reg_data_o[28]),64);
        tracep->fullQData(oldp+421,(vlSelf->reg_data_o[29]),64);
        tracep->fullQData(oldp+423,(vlSelf->reg_data_o[30]),64);
        tracep->fullQData(oldp+425,(vlSelf->IF_pc_o),64);
        tracep->fullBit(oldp+427,(vlSelf->clk));
        tracep->fullBit(oldp+428,(vlSelf->reset));
        tracep->fullCData(oldp+429,(vlSelf->id_rs1_idx_o),5);
        tracep->fullQData(oldp+430,(vlSelf->id_rs1_rdata_o),64);
        tracep->fullCData(oldp+432,(vlSelf->id_rs2_idx_o),5);
        tracep->fullQData(oldp+433,(vlSelf->id_rs2_rdata_o),64);
        tracep->fullQData(oldp+435,(vlSelf->id_imm_o),64);
        tracep->fullBit(oldp+437,(vlSelf->id_rd_wen_o));
        tracep->fullCData(oldp+438,(vlSelf->id_rd_idx_o),5);
        tracep->fullQData(oldp+439,(vlSelf->ex_alu_res_o),64);
        tracep->fullQData(oldp+441,(vlSelf->ex_mem_addr_o),64);
        tracep->fullBit(oldp+443,(vlSelf->ex_branch_jump_o));
        tracep->fullQData(oldp+444,(vlSelf->mem_rdata_o),64);
        tracep->fullBit(oldp+446,(0U));
        tracep->fullQData(oldp+447,(vlSelf->top_sim__DOT__csr_rdata),64);
        tracep->fullQData(oldp+449,(vlSelf->top_sim__DOT__id_csr_rdata),64);
        tracep->fullBit(oldp+451,(vlSelf->top_sim__DOT__id_ilegl_inst));
        tracep->fullQData(oldp+452,(vlSelf->top_sim__DOT__ex_cgu_csr_wdata),64);
        tracep->fullBit(oldp+454,(1U));
        tracep->fullIData(oldp+455,(0x40U),32);
        tracep->fullIData(oldp+456,(0U),32);
        tracep->fullQData(oldp+457,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+459,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i),64);
        tracep->fullQData(oldp+461,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__csr_rdata_i),64);
        tracep->fullQData(oldp+463,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o),64);
        tracep->fullBit(oldp+465,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o));
        tracep->fullIData(oldp+466,(0x400U),32);
    }
}
