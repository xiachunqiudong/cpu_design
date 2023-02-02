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
        tracep->declBit(c+610,"clk", false,-1);
        tracep->declBit(c+611,"rst", false,-1);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+612+i*2,"reg_data_o", true,(i+1), 63,0);}}
        tracep->declBit(c+610,"top_sim clk", false,-1);
        tracep->declBit(c+611,"top_sim rst", false,-1);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+612+i*2,"top_sim reg_data_o", true,(i+1), 63,0);}}
        tracep->declQuad(c+1,"top_sim IF_pc", false,-1, 63,0);
        tracep->declBit(c+674,"top_sim IF_valid", false,-1);
        tracep->declQuad(c+3,"top_sim ifu_pc_next", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim ifu_instr", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim ifu_prdt_taken", false,-1);
        tracep->declBit(c+7,"top_sim ifu_pc_misalign", false,-1);
        tracep->declBit(c+675,"top_sim ifu_bus_err", false,-1);
        tracep->declQuad(c+8,"top_sim ID_pc", false,-1, 63,0);
        tracep->declBus(c+10,"top_sim ID_instr", false,-1, 31,0);
        tracep->declBit(c+11,"top_sim ID_prdt_taken", false,-1);
        tracep->declBit(c+12,"top_sim ID_pc_misalign", false,-1);
        tracep->declBit(c+13,"top_sim ID_if_bus_err", false,-1);
        tracep->declBit(c+14,"top_sim ID_ready", false,-1);
        tracep->declBit(c+15,"top_sim ID_valid", false,-1);
        tracep->declBus(c+16,"top_sim id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+17,"top_sim id_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+18,"top_sim rf_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim rf_rs2_rdata", false,-1, 63,0);
        tracep->declBus(c+22,"top_sim id_csr_idx", false,-1, 11,0);
        tracep->declBit(c+23,"top_sim id_csr_wen", false,-1);
        tracep->declBus(c+24,"top_sim id_optype_info", false,-1, 11,0);
        tracep->declBus(c+25,"top_sim id_alu_info", false,-1, 9,0);
        tracep->declBus(c+26,"top_sim id_branch_info", false,-1, 5,0);
        tracep->declBus(c+27,"top_sim id_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+28,"top_sim id_csr_info", false,-1, 5,0);
        tracep->declQuad(c+18,"top_sim id_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim id_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+29,"top_sim id_imm", false,-1, 63,0);
        tracep->declBit(c+31,"top_sim id_rd_wen", false,-1);
        tracep->declBus(c+32,"top_sim id_rd_idx", false,-1, 4,0);
        tracep->declBit(c+33,"top_sim id_load_use", false,-1);
        tracep->declBit(c+676,"top_sim id_ilegl_instr", false,-1);
        tracep->declBit(c+34,"top_sim id_ecall", false,-1);
        tracep->declBit(c+35,"top_sim id_ebreak", false,-1);
        tracep->declBit(c+36,"top_sim id_mret", false,-1);
        tracep->declQuad(c+37,"top_sim EX_pc", false,-1, 63,0);
        tracep->declBit(c+39,"top_sim EX_prdt_taken", false,-1);
        tracep->declBus(c+40,"top_sim EX_optype_info", false,-1, 11,0);
        tracep->declBus(c+41,"top_sim EX_alu_info", false,-1, 9,0);
        tracep->declBus(c+42,"top_sim EX_branch_info", false,-1, 5,0);
        tracep->declBus(c+43,"top_sim EX_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+44,"top_sim EX_csr_info", false,-1, 5,0);
        tracep->declBit(c+45,"top_sim EX_op_load", false,-1);
        tracep->declBus(c+46,"top_sim EX_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+47,"top_sim EX_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+48,"top_sim EX_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+50,"top_sim EX_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+52,"top_sim EX_imm", false,-1, 63,0);
        tracep->declBit(c+54,"top_sim EX_csr_wen", false,-1);
        tracep->declBus(c+55,"top_sim EX_csr_idx", false,-1, 11,0);
        tracep->declBit(c+56,"top_sim EX_rd_wen", false,-1);
        tracep->declBus(c+57,"top_sim EX_rd_idx", false,-1, 4,0);
        tracep->declBit(c+58,"top_sim EX_pc_misalign", false,-1);
        tracep->declBit(c+59,"top_sim EX_if_bus_err", false,-1);
        tracep->declBit(c+60,"top_sim EX_ilegl_instr", false,-1);
        tracep->declBit(c+61,"top_sim EX_ecall", false,-1);
        tracep->declBit(c+62,"top_sim EX_ebreak", false,-1);
        tracep->declBit(c+63,"top_sim EX_mret", false,-1);
        tracep->declBit(c+64,"top_sim EX_valid", false,-1);
        tracep->declBit(c+674,"top_sim EX_ready", false,-1);
        tracep->declQuad(c+65,"top_sim ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+677,"top_sim ex_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+679,"top_sim ex_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim ex_jump", false,-1);
        tracep->declQuad(c+68,"top_sim ex_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+70,"top_sim MEM_pc", false,-1, 63,0);
        tracep->declBus(c+72,"top_sim MEM_optype_info", false,-1, 11,0);
        tracep->declBus(c+73,"top_sim MEM_ld_st_info", false,-1, 10,0);
        tracep->declBit(c+74,"top_sim MEM_csr_wen", false,-1);
        tracep->declBus(c+75,"top_sim MEM_csr_idx", false,-1, 11,0);
        tracep->declBit(c+76,"top_sim MEM_rd_wen", false,-1);
        tracep->declBus(c+77,"top_sim MEM_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+78,"top_sim MEM_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+80,"top_sim MEM_alu_res", false,-1, 63,0);
        tracep->declQuad(c+82,"top_sim MEM_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+84,"top_sim MEM_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+86,"top_sim MEM_pc_misalign", false,-1);
        tracep->declBit(c+87,"top_sim MEM_if_bus_err", false,-1);
        tracep->declBit(c+88,"top_sim MEM_ilegl_instr", false,-1);
        tracep->declBit(c+89,"top_sim MEM_ecall", false,-1);
        tracep->declBit(c+90,"top_sim MEM_ebreak", false,-1);
        tracep->declBit(c+91,"top_sim MEM_mret", false,-1);
        tracep->declBit(c+674,"top_sim MEM_ready", false,-1);
        tracep->declBit(c+92,"top_sim MEM_valid", false,-1);
        tracep->declQuad(c+93,"top_sim mem_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"top_sim mem_ld_misalign", false,-1);
        tracep->declBit(c+675,"top_sim mem_ld_bus_err", false,-1);
        tracep->declBit(c+96,"top_sim mem_st_misalign", false,-1);
        tracep->declBit(c+675,"top_sim mem_st_bus_err", false,-1);
        tracep->declBit(c+674,"top_sim WB_ready", false,-1);
        tracep->declQuad(c+97,"top_sim WB_pc", false,-1, 63,0);
        tracep->declBus(c+99,"top_sim WB_optype_info", false,-1, 11,0);
        tracep->declBit(c+100,"top_sim WB_csr_wen", false,-1);
        tracep->declBus(c+101,"top_sim WB_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+102,"top_sim WB_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+104,"top_sim WB_rd_wen", false,-1);
        tracep->declBus(c+105,"top_sim WB_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+106,"top_sim WB_alu_res", false,-1, 63,0);
        tracep->declQuad(c+108,"top_sim WB_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+110,"top_sim WB_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+112,"top_sim WB_pc_misalign", false,-1);
        tracep->declBit(c+113,"top_sim WB_if_bus_err", false,-1);
        tracep->declBit(c+114,"top_sim WB_ilegl_instr", false,-1);
        tracep->declBit(c+115,"top_sim WB_ecall", false,-1);
        tracep->declBit(c+116,"top_sim WB_ebreak", false,-1);
        tracep->declBit(c+117,"top_sim WB_mret", false,-1);
        tracep->declBit(c+118,"top_sim WB_ld_misalign", false,-1);
        tracep->declBit(c+119,"top_sim WB_ld_bus_err", false,-1);
        tracep->declBit(c+120,"top_sim WB_st_misalign", false,-1);
        tracep->declBit(c+121,"top_sim WB_st_bus_err", false,-1);
        tracep->declBit(c+104,"top_sim wb_rd_wen", false,-1);
        tracep->declBus(c+105,"top_sim wb_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+122,"top_sim wb_rd_wdata", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim if_flush", false,-1);
        tracep->declBit(c+67,"top_sim id_flush", false,-1);
        tracep->declBit(c+681,"top_sim ex_flush", false,-1);
        tracep->declBit(c+682,"top_sim mem_flush", false,-1);
        tracep->declQuad(c+68,"top_sim flush_pc", false,-1, 63,0);
        tracep->declQuad(c+124,"top_sim ram_addr", false,-1, 63,0);
        tracep->declBit(c+126,"top_sim ram_wen", false,-1);
        tracep->declBus(c+127,"top_sim ram_byte_en", false,-1, 7,0);
        tracep->declQuad(c+128,"top_sim ram_wdata", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim ram_ren", false,-1);
        tracep->declQuad(c+131,"top_sim ram_rdata", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim u_controller ex_jump_i", false,-1);
        tracep->declQuad(c+68,"top_sim u_controller ex_jump_pc_i", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim u_controller if_flush_o", false,-1);
        tracep->declBit(c+67,"top_sim u_controller id_flush_o", false,-1);
        tracep->declBit(c+681,"top_sim u_controller ex_flush_o", false,-1);
        tracep->declBit(c+682,"top_sim u_controller mem_flush_o", false,-1);
        tracep->declQuad(c+68,"top_sim u_controller flush_pc_o", false,-1, 63,0);
        tracep->declBit(c+610,"top_sim u_IF clk", false,-1);
        tracep->declBit(c+611,"top_sim u_IF rst", false,-1);
        tracep->declQuad(c+3,"top_sim u_IF ifu_pc_next_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_IF IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+14,"top_sim u_IF ID_ready_i", false,-1);
        tracep->declBit(c+674,"top_sim u_IF IF_valid_o", false,-1);
        tracep->declBit(c+674,"top_sim u_IF data_valid", false,-1);
        tracep->declBit(c+674,"top_sim u_IF run", false,-1);
        tracep->declQuad(c+1,"top_sim u_IF pc_r", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu IF_pc_i", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim u_ifu if_flush_i", false,-1);
        tracep->declQuad(c+68,"top_sim u_ifu flush_pc_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top_sim u_ifu ifu_pc_next_o", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ifu ifu_instr_o", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim u_ifu ifu_prdt_taken_o", false,-1);
        tracep->declBit(c+7,"top_sim u_ifu ifu_pc_misalign_o", false,-1);
        tracep->declBit(c+675,"top_sim u_ifu ifu_bus_err_o", false,-1);
        tracep->declBit(c+133,"top_sim u_ifu jal", false,-1);
        tracep->declBit(c+134,"top_sim u_ifu jalr", false,-1);
        tracep->declBit(c+135,"top_sim u_ifu branch", false,-1);
        tracep->declQuad(c+136,"top_sim u_ifu imm", false,-1, 63,0);
        tracep->declBit(c+138,"top_sim u_ifu jump", false,-1);
        tracep->declQuad(c+139,"top_sim u_ifu jump_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+136,"top_sim u_ifu jump_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+141,"top_sim u_ifu pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+143,"top_sim u_ifu pc_add_op2", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu u_if_bus pc_i", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_bus if_bus_instr_o", false,-1, 31,0);
        tracep->declBit(c+7,"top_sim u_ifu u_if_bus if_bus_pc_misalign_o", false,-1);
        tracep->declBit(c+675,"top_sim u_ifu u_if_bus if_bus_bus_err_o", false,-1);
        tracep->declBus(c+145,"top_sim u_ifu u_if_bus pc", false,-1, 9,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+133,"top_sim u_ifu u_if_mini_dec_u mini_dec_jal_o", false,-1);
        tracep->declBit(c+134,"top_sim u_ifu u_if_mini_dec_u mini_dec_jalr_o", false,-1);
        tracep->declBit(c+135,"top_sim u_ifu u_if_mini_dec_u mini_dec_branch_o", false,-1);
        tracep->declBus(c+146,"top_sim u_ifu u_if_mini_dec_u mini_dec_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+136,"top_sim u_ifu u_if_mini_dec_u mini_dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+147,"top_sim u_ifu u_if_mini_dec_u optype_info", false,-1, 11,0);
        tracep->declBus(c+5,"top_sim u_ifu u_if_mini_dec_u idu instr_i", false,-1, 31,0);
        tracep->declBus(c+146,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+148,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+683,"top_sim u_ifu u_if_mini_dec_u idu rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+685,"top_sim u_ifu u_if_mini_dec_u idu rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+687,"top_sim u_ifu u_if_mini_dec_u idu EX_op_load_i", false,-1);
        tracep->declBus(c+688,"top_sim u_ifu u_if_mini_dec_u idu EX_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+147,"top_sim u_ifu u_if_mini_dec_u idu id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+149,"top_sim u_ifu u_if_mini_dec_u idu id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+150,"top_sim u_ifu u_if_mini_dec_u idu id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+151,"top_sim u_ifu u_if_mini_dec_u idu id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+152,"top_sim u_ifu u_if_mini_dec_u idu id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+683,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+685,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+136,"top_sim u_ifu u_if_mini_dec_u idu id_imm_o", false,-1, 63,0);
        tracep->declBit(c+153,"top_sim u_ifu u_if_mini_dec_u idu id_csr_wen_o", false,-1);
        tracep->declBus(c+154,"top_sim u_ifu u_if_mini_dec_u idu id_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+155,"top_sim u_ifu u_if_mini_dec_u idu id_rd_wen_o", false,-1);
        tracep->declBus(c+156,"top_sim u_ifu u_if_mini_dec_u idu id_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+157,"top_sim u_ifu u_if_mini_dec_u idu id_load_use_o", false,-1);
        tracep->declBit(c+689,"top_sim u_ifu u_if_mini_dec_u idu id_ilegl_instr_o", false,-1);
        tracep->declBit(c+158,"top_sim u_ifu u_if_mini_dec_u idu id_ecall_o", false,-1);
        tracep->declBit(c+159,"top_sim u_ifu u_if_mini_dec_u idu id_ebreak_o", false,-1);
        tracep->declBit(c+160,"top_sim u_ifu u_if_mini_dec_u idu id_mret_o", false,-1);
        tracep->declBus(c+161,"top_sim u_ifu u_if_mini_dec_u idu opcode", false,-1, 6,0);
        tracep->declBus(c+156,"top_sim u_ifu u_if_mini_dec_u idu rd", false,-1, 4,0);
        tracep->declBus(c+162,"top_sim u_ifu u_if_mini_dec_u idu fun3", false,-1, 2,0);
        tracep->declBus(c+146,"top_sim u_ifu u_if_mini_dec_u idu rs1", false,-1, 4,0);
        tracep->declBus(c+148,"top_sim u_ifu u_if_mini_dec_u idu rs2", false,-1, 4,0);
        tracep->declBus(c+163,"top_sim u_ifu u_if_mini_dec_u idu fun7", false,-1, 6,0);
        tracep->declBit(c+164,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm", false,-1);
        tracep->declBit(c+165,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm_w", false,-1);
        tracep->declBit(c+166,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu", false,-1);
        tracep->declBit(c+167,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_w", false,-1);
        tracep->declBit(c+168,"top_sim u_ifu u_if_mini_dec_u idu rv64_branch", false,-1);
        tracep->declBit(c+169,"top_sim u_ifu u_if_mini_dec_u idu rv64_jal", false,-1);
        tracep->declBit(c+170,"top_sim u_ifu u_if_mini_dec_u idu rv64_jalr", false,-1);
        tracep->declBit(c+171,"top_sim u_ifu u_if_mini_dec_u idu rv64_load", false,-1);
        tracep->declBit(c+172,"top_sim u_ifu u_if_mini_dec_u idu rv64_store", false,-1);
        tracep->declBit(c+173,"top_sim u_ifu u_if_mini_dec_u idu rv64_lui", false,-1);
        tracep->declBit(c+174,"top_sim u_ifu u_if_mini_dec_u idu rv64_auipc", false,-1);
        tracep->declBit(c+175,"top_sim u_ifu u_if_mini_dec_u idu rv64_system", false,-1);
        tracep->declBit(c+176,"top_sim u_ifu u_if_mini_dec_u idu rv64_addi", false,-1);
        tracep->declBit(c+177,"top_sim u_ifu u_if_mini_dec_u idu rv64_addiw", false,-1);
        tracep->declBit(c+178,"top_sim u_ifu u_if_mini_dec_u idu rv64_slli", false,-1);
        tracep->declBit(c+179,"top_sim u_ifu u_if_mini_dec_u idu rv64_slliw", false,-1);
        tracep->declBit(c+180,"top_sim u_ifu u_if_mini_dec_u idu rv64_slti", false,-1);
        tracep->declBit(c+181,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltui", false,-1);
        tracep->declBit(c+182,"top_sim u_ifu u_if_mini_dec_u idu rv64_xori", false,-1);
        tracep->declBit(c+183,"top_sim u_ifu u_if_mini_dec_u idu rv64_srli", false,-1);
        tracep->declBit(c+184,"top_sim u_ifu u_if_mini_dec_u idu rv64_srliw", false,-1);
        tracep->declBit(c+185,"top_sim u_ifu u_if_mini_dec_u idu rv64_srai", false,-1);
        tracep->declBit(c+186,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraiw", false,-1);
        tracep->declBit(c+187,"top_sim u_ifu u_if_mini_dec_u idu rv64_ori", false,-1);
        tracep->declBit(c+188,"top_sim u_ifu u_if_mini_dec_u idu rv64_andi", false,-1);
        tracep->declBit(c+189,"top_sim u_ifu u_if_mini_dec_u idu rv64_add", false,-1);
        tracep->declBit(c+190,"top_sim u_ifu u_if_mini_dec_u idu rv64_addw", false,-1);
        tracep->declBit(c+191,"top_sim u_ifu u_if_mini_dec_u idu rv64_sub", false,-1);
        tracep->declBit(c+192,"top_sim u_ifu u_if_mini_dec_u idu rv64_subw", false,-1);
        tracep->declBit(c+193,"top_sim u_ifu u_if_mini_dec_u idu rv64_sll", false,-1);
        tracep->declBit(c+194,"top_sim u_ifu u_if_mini_dec_u idu rv64_sllw", false,-1);
        tracep->declBit(c+195,"top_sim u_ifu u_if_mini_dec_u idu rv64_slt", false,-1);
        tracep->declBit(c+196,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltu", false,-1);
        tracep->declBit(c+197,"top_sim u_ifu u_if_mini_dec_u idu rv64_xor", false,-1);
        tracep->declBit(c+198,"top_sim u_ifu u_if_mini_dec_u idu rv64_srl", false,-1);
        tracep->declBit(c+199,"top_sim u_ifu u_if_mini_dec_u idu rv64_srlw", false,-1);
        tracep->declBit(c+200,"top_sim u_ifu u_if_mini_dec_u idu rv64_sra", false,-1);
        tracep->declBit(c+201,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraw", false,-1);
        tracep->declBit(c+202,"top_sim u_ifu u_if_mini_dec_u idu rv64_or", false,-1);
        tracep->declBit(c+203,"top_sim u_ifu u_if_mini_dec_u idu rv64_and", false,-1);
        tracep->declBit(c+204,"top_sim u_ifu u_if_mini_dec_u idu rv64_beq", false,-1);
        tracep->declBit(c+205,"top_sim u_ifu u_if_mini_dec_u idu rv64_bne", false,-1);
        tracep->declBit(c+206,"top_sim u_ifu u_if_mini_dec_u idu rv64_blt", false,-1);
        tracep->declBit(c+207,"top_sim u_ifu u_if_mini_dec_u idu rv64_bge", false,-1);
        tracep->declBit(c+208,"top_sim u_ifu u_if_mini_dec_u idu rv64_bltu", false,-1);
        tracep->declBit(c+209,"top_sim u_ifu u_if_mini_dec_u idu rv64_bgeu", false,-1);
        tracep->declBit(c+210,"top_sim u_ifu u_if_mini_dec_u idu rv64_lb", false,-1);
        tracep->declBit(c+211,"top_sim u_ifu u_if_mini_dec_u idu rv64_lh", false,-1);
        tracep->declBit(c+212,"top_sim u_ifu u_if_mini_dec_u idu rv64_lw", false,-1);
        tracep->declBit(c+213,"top_sim u_ifu u_if_mini_dec_u idu rv64_ld", false,-1);
        tracep->declBit(c+214,"top_sim u_ifu u_if_mini_dec_u idu rv64_lbu", false,-1);
        tracep->declBit(c+215,"top_sim u_ifu u_if_mini_dec_u idu rv64_lhu", false,-1);
        tracep->declBit(c+216,"top_sim u_ifu u_if_mini_dec_u idu rv64_lwu", false,-1);
        tracep->declBit(c+217,"top_sim u_ifu u_if_mini_dec_u idu rv64_sb", false,-1);
        tracep->declBit(c+218,"top_sim u_ifu u_if_mini_dec_u idu rv64_sh", false,-1);
        tracep->declBit(c+219,"top_sim u_ifu u_if_mini_dec_u idu rv64_sw", false,-1);
        tracep->declBit(c+220,"top_sim u_ifu u_if_mini_dec_u idu rv64_sd", false,-1);
        tracep->declBit(c+158,"top_sim u_ifu u_if_mini_dec_u idu rv64_ecall", false,-1);
        tracep->declBit(c+159,"top_sim u_ifu u_if_mini_dec_u idu rv64_ebreak", false,-1);
        tracep->declBit(c+160,"top_sim u_ifu u_if_mini_dec_u idu rv64_mret", false,-1);
        tracep->declBit(c+221,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrw", false,-1);
        tracep->declBit(c+222,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrs", false,-1);
        tracep->declBit(c+223,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrc", false,-1);
        tracep->declBit(c+224,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrwi", false,-1);
        tracep->declBit(c+225,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrsi", false,-1);
        tracep->declBit(c+226,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrci", false,-1);
        tracep->declBit(c+227,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs1", false,-1);
        tracep->declBit(c+228,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs2", false,-1);
        tracep->declBit(c+155,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rd", false,-1);
        tracep->declBit(c+153,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_csr", false,-1);
        tracep->declBit(c+227,"top_sim u_ifu u_if_mini_dec_u idu need_rs1", false,-1);
        tracep->declBit(c+228,"top_sim u_ifu u_if_mini_dec_u idu need_rs2", false,-1);
        tracep->declQuad(c+229,"top_sim u_ifu u_if_mini_dec_u idu rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+231,"top_sim u_ifu u_if_mini_dec_u idu rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+233,"top_sim u_ifu u_if_mini_dec_u idu rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+235,"top_sim u_ifu u_if_mini_dec_u idu rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+237,"top_sim u_ifu u_if_mini_dec_u idu rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+239,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_i", false,-1);
        tracep->declBit(c+172,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_s", false,-1);
        tracep->declBit(c+168,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_b", false,-1);
        tracep->declBit(c+169,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_j", false,-1);
        tracep->declBit(c+240,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+136,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm", false,-1, 63,0);
        tracep->declBit(c+610,"top_sim u_ID clk", false,-1);
        tracep->declBit(c+611,"top_sim u_ID rst", false,-1);
        tracep->declQuad(c+1,"top_sim u_ID IF_pc_i", false,-1, 63,0);
        tracep->declBus(c+5,"top_sim u_ID ifu_instr_i", false,-1, 31,0);
        tracep->declBit(c+6,"top_sim u_ID ifu_prdt_taken_i", false,-1);
        tracep->declBit(c+7,"top_sim u_ID ifu_pc_misalign_i", false,-1);
        tracep->declBit(c+675,"top_sim u_ID ifu_bus_err_i", false,-1);
        tracep->declBit(c+33,"top_sim u_ID id_load_use_i", false,-1);
        tracep->declQuad(c+8,"top_sim u_ID ID_pc_o", false,-1, 63,0);
        tracep->declBus(c+10,"top_sim u_ID ID_instr_o", false,-1, 31,0);
        tracep->declBit(c+11,"top_sim u_ID ID_prdt_taken_o", false,-1);
        tracep->declBit(c+12,"top_sim u_ID ID_pc_misalign_o", false,-1);
        tracep->declBit(c+13,"top_sim u_ID ID_if_bus_err_o", false,-1);
        tracep->declBit(c+674,"top_sim u_ID IF_valid_i", false,-1);
        tracep->declBit(c+674,"top_sim u_ID EX_ready_i", false,-1);
        tracep->declBit(c+15,"top_sim u_ID ID_valid_o", false,-1);
        tracep->declBit(c+14,"top_sim u_ID ID_ready_o", false,-1);
        tracep->declBit(c+14,"top_sim u_ID run", false,-1);
        tracep->declBit(c+241,"top_sim u_ID ID_data_valid", false,-1);
        tracep->declQuad(c+242,"top_sim u_ID ID_pc_r", false,-1, 63,0);
        tracep->declBus(c+244,"top_sim u_ID ID_instr_r", false,-1, 31,0);
        tracep->declBit(c+245,"top_sim u_ID ID_prdt_taken_r", false,-1);
        tracep->declBit(c+246,"top_sim u_ID ID_pc_misalign_r", false,-1);
        tracep->declBit(c+247,"top_sim u_ID ID_if_bus_err_r", false,-1);
        tracep->declBus(c+10,"top_sim u_id instr_i", false,-1, 31,0);
        tracep->declBus(c+16,"top_sim u_id id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+17,"top_sim u_id id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+18,"top_sim u_id rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim u_id rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+45,"top_sim u_id EX_op_load_i", false,-1);
        tracep->declBus(c+57,"top_sim u_id EX_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+24,"top_sim u_id id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+25,"top_sim u_id id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+26,"top_sim u_id id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+27,"top_sim u_id id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+28,"top_sim u_id id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+18,"top_sim u_id id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim u_id id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+29,"top_sim u_id id_imm_o", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim u_id id_csr_wen_o", false,-1);
        tracep->declBus(c+22,"top_sim u_id id_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+31,"top_sim u_id id_rd_wen_o", false,-1);
        tracep->declBus(c+32,"top_sim u_id id_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+33,"top_sim u_id id_load_use_o", false,-1);
        tracep->declBit(c+676,"top_sim u_id id_ilegl_instr_o", false,-1);
        tracep->declBit(c+34,"top_sim u_id id_ecall_o", false,-1);
        tracep->declBit(c+35,"top_sim u_id id_ebreak_o", false,-1);
        tracep->declBit(c+36,"top_sim u_id id_mret_o", false,-1);
        tracep->declBus(c+248,"top_sim u_id opcode", false,-1, 6,0);
        tracep->declBus(c+32,"top_sim u_id rd", false,-1, 4,0);
        tracep->declBus(c+249,"top_sim u_id fun3", false,-1, 2,0);
        tracep->declBus(c+16,"top_sim u_id rs1", false,-1, 4,0);
        tracep->declBus(c+17,"top_sim u_id rs2", false,-1, 4,0);
        tracep->declBus(c+250,"top_sim u_id fun7", false,-1, 6,0);
        tracep->declBit(c+251,"top_sim u_id rv64_alu_imm", false,-1);
        tracep->declBit(c+252,"top_sim u_id rv64_alu_imm_w", false,-1);
        tracep->declBit(c+253,"top_sim u_id rv64_alu", false,-1);
        tracep->declBit(c+254,"top_sim u_id rv64_alu_w", false,-1);
        tracep->declBit(c+255,"top_sim u_id rv64_branch", false,-1);
        tracep->declBit(c+256,"top_sim u_id rv64_jal", false,-1);
        tracep->declBit(c+257,"top_sim u_id rv64_jalr", false,-1);
        tracep->declBit(c+258,"top_sim u_id rv64_load", false,-1);
        tracep->declBit(c+259,"top_sim u_id rv64_store", false,-1);
        tracep->declBit(c+260,"top_sim u_id rv64_lui", false,-1);
        tracep->declBit(c+261,"top_sim u_id rv64_auipc", false,-1);
        tracep->declBit(c+262,"top_sim u_id rv64_system", false,-1);
        tracep->declBit(c+263,"top_sim u_id rv64_addi", false,-1);
        tracep->declBit(c+264,"top_sim u_id rv64_addiw", false,-1);
        tracep->declBit(c+265,"top_sim u_id rv64_slli", false,-1);
        tracep->declBit(c+266,"top_sim u_id rv64_slliw", false,-1);
        tracep->declBit(c+267,"top_sim u_id rv64_slti", false,-1);
        tracep->declBit(c+268,"top_sim u_id rv64_sltui", false,-1);
        tracep->declBit(c+269,"top_sim u_id rv64_xori", false,-1);
        tracep->declBit(c+270,"top_sim u_id rv64_srli", false,-1);
        tracep->declBit(c+271,"top_sim u_id rv64_srliw", false,-1);
        tracep->declBit(c+272,"top_sim u_id rv64_srai", false,-1);
        tracep->declBit(c+273,"top_sim u_id rv64_sraiw", false,-1);
        tracep->declBit(c+274,"top_sim u_id rv64_ori", false,-1);
        tracep->declBit(c+275,"top_sim u_id rv64_andi", false,-1);
        tracep->declBit(c+276,"top_sim u_id rv64_add", false,-1);
        tracep->declBit(c+277,"top_sim u_id rv64_addw", false,-1);
        tracep->declBit(c+278,"top_sim u_id rv64_sub", false,-1);
        tracep->declBit(c+279,"top_sim u_id rv64_subw", false,-1);
        tracep->declBit(c+280,"top_sim u_id rv64_sll", false,-1);
        tracep->declBit(c+281,"top_sim u_id rv64_sllw", false,-1);
        tracep->declBit(c+282,"top_sim u_id rv64_slt", false,-1);
        tracep->declBit(c+283,"top_sim u_id rv64_sltu", false,-1);
        tracep->declBit(c+284,"top_sim u_id rv64_xor", false,-1);
        tracep->declBit(c+285,"top_sim u_id rv64_srl", false,-1);
        tracep->declBit(c+286,"top_sim u_id rv64_srlw", false,-1);
        tracep->declBit(c+287,"top_sim u_id rv64_sra", false,-1);
        tracep->declBit(c+288,"top_sim u_id rv64_sraw", false,-1);
        tracep->declBit(c+289,"top_sim u_id rv64_or", false,-1);
        tracep->declBit(c+290,"top_sim u_id rv64_and", false,-1);
        tracep->declBit(c+291,"top_sim u_id rv64_beq", false,-1);
        tracep->declBit(c+292,"top_sim u_id rv64_bne", false,-1);
        tracep->declBit(c+293,"top_sim u_id rv64_blt", false,-1);
        tracep->declBit(c+294,"top_sim u_id rv64_bge", false,-1);
        tracep->declBit(c+295,"top_sim u_id rv64_bltu", false,-1);
        tracep->declBit(c+296,"top_sim u_id rv64_bgeu", false,-1);
        tracep->declBit(c+297,"top_sim u_id rv64_lb", false,-1);
        tracep->declBit(c+298,"top_sim u_id rv64_lh", false,-1);
        tracep->declBit(c+299,"top_sim u_id rv64_lw", false,-1);
        tracep->declBit(c+300,"top_sim u_id rv64_ld", false,-1);
        tracep->declBit(c+301,"top_sim u_id rv64_lbu", false,-1);
        tracep->declBit(c+302,"top_sim u_id rv64_lhu", false,-1);
        tracep->declBit(c+303,"top_sim u_id rv64_lwu", false,-1);
        tracep->declBit(c+304,"top_sim u_id rv64_sb", false,-1);
        tracep->declBit(c+305,"top_sim u_id rv64_sh", false,-1);
        tracep->declBit(c+306,"top_sim u_id rv64_sw", false,-1);
        tracep->declBit(c+307,"top_sim u_id rv64_sd", false,-1);
        tracep->declBit(c+34,"top_sim u_id rv64_ecall", false,-1);
        tracep->declBit(c+35,"top_sim u_id rv64_ebreak", false,-1);
        tracep->declBit(c+36,"top_sim u_id rv64_mret", false,-1);
        tracep->declBit(c+308,"top_sim u_id rv64_csrrw", false,-1);
        tracep->declBit(c+309,"top_sim u_id rv64_csrrs", false,-1);
        tracep->declBit(c+310,"top_sim u_id rv64_csrrc", false,-1);
        tracep->declBit(c+311,"top_sim u_id rv64_csrrwi", false,-1);
        tracep->declBit(c+312,"top_sim u_id rv64_csrrsi", false,-1);
        tracep->declBit(c+313,"top_sim u_id rv64_csrrci", false,-1);
        tracep->declBit(c+314,"top_sim u_id rv64_need_rs1", false,-1);
        tracep->declBit(c+315,"top_sim u_id rv64_need_rs2", false,-1);
        tracep->declBit(c+31,"top_sim u_id rv64_need_rd", false,-1);
        tracep->declBit(c+23,"top_sim u_id rv64_need_csr", false,-1);
        tracep->declBit(c+314,"top_sim u_id need_rs1", false,-1);
        tracep->declBit(c+315,"top_sim u_id need_rs2", false,-1);
        tracep->declQuad(c+316,"top_sim u_id rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+318,"top_sim u_id rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+320,"top_sim u_id rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+322,"top_sim u_id rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+324,"top_sim u_id rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+326,"top_sim u_id rv64_imm_sel_i", false,-1);
        tracep->declBit(c+259,"top_sim u_id rv64_imm_sel_s", false,-1);
        tracep->declBit(c+255,"top_sim u_id rv64_imm_sel_b", false,-1);
        tracep->declBit(c+256,"top_sim u_id rv64_imm_sel_j", false,-1);
        tracep->declBit(c+327,"top_sim u_id rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+29,"top_sim u_id rv64_imm", false,-1, 63,0);
        tracep->declBit(c+610,"top_sim u_regfile clk", false,-1);
        tracep->declBit(c+104,"top_sim u_regfile rd_wen_i", false,-1);
        tracep->declBus(c+105,"top_sim u_regfile rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+122,"top_sim u_regfile rd_wdata_i", false,-1, 63,0);
        tracep->declBus(c+16,"top_sim u_regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+17,"top_sim u_regfile rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+18,"top_sim u_regfile rf_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim u_regfile rf_rs2_rdata_o", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+328+i*2,"top_sim u_regfile reg_data_o", true,(i+1), 63,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+390+i*2,"top_sim u_regfile reg_data", true,(i+1), 63,0);}}
        tracep->declBit(c+610,"top_sim u_EX clk", false,-1);
        tracep->declBit(c+611,"top_sim u_EX rst", false,-1);
        tracep->declQuad(c+8,"top_sim u_EX ID_pc_i", false,-1, 63,0);
        tracep->declBit(c+11,"top_sim u_EX ID_prdt_taken_i", false,-1);
        tracep->declBus(c+24,"top_sim u_EX id_optype_info_i", false,-1, 11,0);
        tracep->declBus(c+25,"top_sim u_EX id_alu_info_i", false,-1, 9,0);
        tracep->declBus(c+26,"top_sim u_EX id_branch_info_i", false,-1, 5,0);
        tracep->declBus(c+27,"top_sim u_EX id_ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+28,"top_sim u_EX id_csr_info_i", false,-1, 5,0);
        tracep->declBus(c+16,"top_sim u_EX id_rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+17,"top_sim u_EX id_rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+18,"top_sim u_EX id_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top_sim u_EX id_rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+29,"top_sim u_EX id_imm_i", false,-1, 63,0);
        tracep->declBit(c+76,"top_sim u_EX MEM_rd_wen_i", false,-1);
        tracep->declBus(c+77,"top_sim u_EX MEM_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+80,"top_sim u_EX MEM_alu_res_i", false,-1, 63,0);
        tracep->declBit(c+104,"top_sim u_EX WB_rd_wen_i", false,-1);
        tracep->declBus(c+105,"top_sim u_EX WB_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+122,"top_sim u_EX wb_rd_wdata_i", false,-1, 63,0);
        tracep->declBit(c+23,"top_sim u_EX id_csr_wen_i", false,-1);
        tracep->declBus(c+22,"top_sim u_EX id_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+31,"top_sim u_EX id_rd_wen_i", false,-1);
        tracep->declBus(c+32,"top_sim u_EX id_rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+12,"top_sim u_EX ID_pc_misalign_i", false,-1);
        tracep->declBit(c+13,"top_sim u_EX ID_if_bus_err_i", false,-1);
        tracep->declBit(c+676,"top_sim u_EX id_ilegl_instr_i", false,-1);
        tracep->declBit(c+34,"top_sim u_EX id_ecall_i", false,-1);
        tracep->declBit(c+35,"top_sim u_EX id_ebreak_i", false,-1);
        tracep->declBit(c+36,"top_sim u_EX id_mret_i", false,-1);
        tracep->declQuad(c+37,"top_sim u_EX EX_pc_o", false,-1, 63,0);
        tracep->declBit(c+39,"top_sim u_EX EX_prdt_taken_o", false,-1);
        tracep->declBus(c+40,"top_sim u_EX EX_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+41,"top_sim u_EX EX_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+42,"top_sim u_EX EX_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+43,"top_sim u_EX EX_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+44,"top_sim u_EX EX_csr_info_o", false,-1, 5,0);
        tracep->declBit(c+45,"top_sim u_EX EX_op_load_o", false,-1);
        tracep->declBus(c+46,"top_sim u_EX EX_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+47,"top_sim u_EX EX_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+48,"top_sim u_EX EX_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+50,"top_sim u_EX EX_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+52,"top_sim u_EX EX_imm_o", false,-1, 63,0);
        tracep->declBit(c+54,"top_sim u_EX EX_csr_wen_o", false,-1);
        tracep->declBus(c+55,"top_sim u_EX EX_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+56,"top_sim u_EX EX_rd_wen_o", false,-1);
        tracep->declBus(c+57,"top_sim u_EX EX_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+58,"top_sim u_EX EX_pc_misalign_o", false,-1);
        tracep->declBit(c+59,"top_sim u_EX EX_if_bus_err_o", false,-1);
        tracep->declBit(c+60,"top_sim u_EX EX_ilegl_instr_o", false,-1);
        tracep->declBit(c+61,"top_sim u_EX EX_ecall_o", false,-1);
        tracep->declBit(c+62,"top_sim u_EX EX_ebreak_o", false,-1);
        tracep->declBit(c+63,"top_sim u_EX EX_mret_o", false,-1);
        tracep->declBit(c+15,"top_sim u_EX ID_valid_i", false,-1);
        tracep->declBit(c+674,"top_sim u_EX MEM_ready_i", false,-1);
        tracep->declBit(c+64,"top_sim u_EX EX_valid_o", false,-1);
        tracep->declBit(c+674,"top_sim u_EX EX_ready_o", false,-1);
        tracep->declBit(c+64,"top_sim u_EX EX_data_valid", false,-1);
        tracep->declBit(c+674,"top_sim u_EX run", false,-1);
        tracep->declBit(c+452,"top_sim u_EX rs1_MEM_fwd", false,-1);
        tracep->declBit(c+453,"top_sim u_EX rs2_MEM_fwd", false,-1);
        tracep->declBit(c+454,"top_sim u_EX rs1_WB_fwd", false,-1);
        tracep->declBit(c+455,"top_sim u_EX rs2_WB_fwd", false,-1);
        tracep->declQuad(c+456,"top_sim u_EX EX_pc_r", false,-1, 63,0);
        tracep->declBit(c+690,"top_sim u_EX EX_prdt_taken_r", false,-1);
        tracep->declBus(c+458,"top_sim u_EX EX_optype_info_r", false,-1, 11,0);
        tracep->declBus(c+459,"top_sim u_EX EX_alu_info_r", false,-1, 9,0);
        tracep->declBus(c+460,"top_sim u_EX EX_branch_info_r", false,-1, 5,0);
        tracep->declBus(c+461,"top_sim u_EX EX_ld_st_info_r", false,-1, 10,0);
        tracep->declBus(c+462,"top_sim u_EX EX_csr_info_r", false,-1, 5,0);
        tracep->declBus(c+463,"top_sim u_EX EX_rs1_idx_r", false,-1, 4,0);
        tracep->declBus(c+464,"top_sim u_EX EX_rs2_idx_r", false,-1, 4,0);
        tracep->declQuad(c+465,"top_sim u_EX EX_rs1_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+467,"top_sim u_EX EX_rs2_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+469,"top_sim u_EX EX_imm_r", false,-1, 63,0);
        tracep->declBit(c+471,"top_sim u_EX EX_csr_wen_r", false,-1);
        tracep->declBus(c+472,"top_sim u_EX EX_csr_idx_r", false,-1, 11,0);
        tracep->declBit(c+473,"top_sim u_EX EX_rd_wen_r", false,-1);
        tracep->declBus(c+474,"top_sim u_EX EX_rd_idx_r", false,-1, 4,0);
        tracep->declBit(c+475,"top_sim u_EX EX_pc_misalign_r", false,-1);
        tracep->declBit(c+476,"top_sim u_EX EX_if_bus_err_r", false,-1);
        tracep->declBit(c+477,"top_sim u_EX EX_ilegl_instr_r", false,-1);
        tracep->declBit(c+478,"top_sim u_EX EX_ecall_r", false,-1);
        tracep->declBit(c+479,"top_sim u_EX EX_ebreak_r", false,-1);
        tracep->declBit(c+480,"top_sim u_EX EX_mret_r", false,-1);
        tracep->declBus(c+40,"top_sim u_ex optype_info_i", false,-1, 11,0);
        tracep->declBus(c+41,"top_sim u_ex alu_info_i", false,-1, 9,0);
        tracep->declBus(c+42,"top_sim u_ex branch_info_i", false,-1, 5,0);
        tracep->declBus(c+43,"top_sim u_ex ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+44,"top_sim u_ex csr_info_i", false,-1, 5,0);
        tracep->declBus(c+46,"top_sim u_ex EX_rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+47,"top_sim u_ex EX_rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+37,"top_sim u_ex pc_i", false,-1, 63,0);
        tracep->declQuad(c+48,"top_sim u_ex rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top_sim u_ex rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top_sim u_ex imm_i", false,-1, 63,0);
        tracep->declBus(c+55,"top_sim u_ex csr_idx_i", false,-1, 11,0);
        tracep->declBus(c+691,"top_sim u_ex ex_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+692,"top_sim u_ex csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+65,"top_sim u_ex ex_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+677,"top_sim u_ex ex_csr_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+679,"top_sim u_ex ex_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+67,"top_sim u_ex ex_jump_o", false,-1);
        tracep->declQuad(c+68,"top_sim u_ex ex_jump_pc_o", false,-1, 63,0);
        tracep->declBit(c+481,"top_sim u_ex branch_jump", false,-1);
        tracep->declBit(c+482,"top_sim u_ex op_jal", false,-1);
        tracep->declBit(c+483,"top_sim u_ex op_jalr", false,-1);
        tracep->declQuad(c+484,"top_sim u_ex jump_pc_src1", false,-1, 63,0);
        tracep->declQuad(c+52,"top_sim u_ex jump_pc_src2", false,-1, 63,0);
        tracep->declBus(c+40,"top_sim u_ex alu_u optype_info_i", false,-1, 11,0);
        tracep->declBus(c+41,"top_sim u_ex alu_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+42,"top_sim u_ex alu_u branch_info_i", false,-1, 5,0);
        tracep->declQuad(c+37,"top_sim u_ex alu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+48,"top_sim u_ex alu_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top_sim u_ex alu_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top_sim u_ex alu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+65,"top_sim u_ex alu_u alu_res_o", false,-1, 63,0);
        tracep->declBit(c+481,"top_sim u_ex alu_u alu_branch_jump_o", false,-1);
        tracep->declBit(c+486,"top_sim u_ex alu_u op_alu_imm", false,-1);
        tracep->declBit(c+487,"top_sim u_ex alu_u op_alu_imm_w", false,-1);
        tracep->declBit(c+488,"top_sim u_ex alu_u op_alu", false,-1);
        tracep->declBit(c+489,"top_sim u_ex alu_u op_alu_w", false,-1);
        tracep->declBit(c+490,"top_sim u_ex alu_u op_branch", false,-1);
        tracep->declBit(c+482,"top_sim u_ex alu_u op_jal", false,-1);
        tracep->declBit(c+483,"top_sim u_ex alu_u op_jalr", false,-1);
        tracep->declBit(c+491,"top_sim u_ex alu_u op_load", false,-1);
        tracep->declBit(c+492,"top_sim u_ex alu_u op_store", false,-1);
        tracep->declBit(c+493,"top_sim u_ex alu_u op_lui", false,-1);
        tracep->declBit(c+494,"top_sim u_ex alu_u op_auipc", false,-1);
        tracep->declBit(c+495,"top_sim u_ex alu_u alu_add", false,-1);
        tracep->declBit(c+496,"top_sim u_ex alu_u alu_sub", false,-1);
        tracep->declBit(c+497,"top_sim u_ex alu_u alu_sll", false,-1);
        tracep->declBit(c+498,"top_sim u_ex alu_u alu_slt", false,-1);
        tracep->declBit(c+499,"top_sim u_ex alu_u alu_sltu", false,-1);
        tracep->declBit(c+500,"top_sim u_ex alu_u alu_xor", false,-1);
        tracep->declBit(c+501,"top_sim u_ex alu_u alu_srl", false,-1);
        tracep->declBit(c+502,"top_sim u_ex alu_u alu_sra", false,-1);
        tracep->declBit(c+503,"top_sim u_ex alu_u alu_or", false,-1);
        tracep->declBit(c+504,"top_sim u_ex alu_u alu_and", false,-1);
        tracep->declBit(c+505,"top_sim u_ex alu_u branch_beq", false,-1);
        tracep->declBit(c+506,"top_sim u_ex alu_u branch_bne", false,-1);
        tracep->declBit(c+507,"top_sim u_ex alu_u branch_blt", false,-1);
        tracep->declBit(c+508,"top_sim u_ex alu_u branch_bge", false,-1);
        tracep->declBit(c+509,"top_sim u_ex alu_u branch_bltu", false,-1);
        tracep->declBit(c+510,"top_sim u_ex alu_u branch_bgeu", false,-1);
        tracep->declBit(c+511,"top_sim u_ex alu_u res_sel_add", false,-1);
        tracep->declBit(c+512,"top_sim u_ex alu_u res_sel_sub", false,-1);
        tracep->declBit(c+513,"top_sim u_ex alu_u res_sel_add_sub", false,-1);
        tracep->declBit(c+497,"top_sim u_ex alu_u res_sel_sll", false,-1);
        tracep->declBit(c+498,"top_sim u_ex alu_u res_sel_slt", false,-1);
        tracep->declBit(c+499,"top_sim u_ex alu_u res_sel_sltu", false,-1);
        tracep->declBit(c+500,"top_sim u_ex alu_u res_sel_xor", false,-1);
        tracep->declBit(c+501,"top_sim u_ex alu_u res_sel_srl", false,-1);
        tracep->declBit(c+502,"top_sim u_ex alu_u res_sel_sra", false,-1);
        tracep->declBit(c+503,"top_sim u_ex alu_u res_sel_or", false,-1);
        tracep->declBit(c+504,"top_sim u_ex alu_u res_sel_and", false,-1);
        tracep->declQuad(c+514,"top_sim u_ex alu_u alu_op1", false,-1, 63,0);
        tracep->declQuad(c+516,"top_sim u_ex alu_u alu_op2", false,-1, 63,0);
        tracep->declQuad(c+518,"top_sim u_ex alu_u alu_add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+520,"top_sim u_ex alu_u alu_sll_res", false,-1, 63,0);
        tracep->declQuad(c+522,"top_sim u_ex alu_u alu_slt_res", false,-1, 63,0);
        tracep->declQuad(c+524,"top_sim u_ex alu_u alu_sltu_res", false,-1, 63,0);
        tracep->declQuad(c+526,"top_sim u_ex alu_u alu_xor_res", false,-1, 63,0);
        tracep->declQuad(c+528,"top_sim u_ex alu_u alu_srl_res", false,-1, 63,0);
        tracep->declQuad(c+530,"top_sim u_ex alu_u alu_sra_res", false,-1, 63,0);
        tracep->declQuad(c+532,"top_sim u_ex alu_u alu_or_res", false,-1, 63,0);
        tracep->declQuad(c+534,"top_sim u_ex alu_u alu_and_res", false,-1, 63,0);
        tracep->declQuad(c+514,"top_sim u_ex alu_u adder_op1", false,-1, 63,0);
        tracep->declQuad(c+536,"top_sim u_ex alu_u adder_op2", false,-1, 63,0);
        tracep->declBit(c+512,"top_sim u_ex alu_u adder_cin", false,-1);
        tracep->declBit(c+538,"top_sim u_ex alu_u adder_cout", false,-1);
        tracep->declBus(c+539,"top_sim u_ex alu_u shift_op2", false,-1, 5,0);
        tracep->declQuad(c+540,"top_sim u_ex alu_u alu_res", false,-1, 63,0);
        tracep->declQuad(c+542,"top_sim u_ex alu_u alu_res_w", false,-1, 63,0);
        tracep->declBit(c+544,"top_sim u_ex alu_u ne", false,-1);
        tracep->declBit(c+545,"top_sim u_ex alu_u eq", false,-1);
        tracep->declBit(c+546,"top_sim u_ex alu_u lt", false,-1);
        tracep->declBit(c+547,"top_sim u_ex alu_u ltu", false,-1);
        tracep->declBit(c+548,"top_sim u_ex alu_u ge", false,-1);
        tracep->declBit(c+538,"top_sim u_ex alu_u geu", false,-1);
        tracep->declBit(c+610,"top_sim u_MEM clk", false,-1);
        tracep->declBit(c+611,"top_sim u_MEM rst", false,-1);
        tracep->declQuad(c+37,"top_sim u_MEM EX_pc_i", false,-1, 63,0);
        tracep->declBus(c+40,"top_sim u_MEM EX_optype_info_i", false,-1, 11,0);
        tracep->declBus(c+43,"top_sim u_MEM EX_ld_st_info_i", false,-1, 10,0);
        tracep->declBit(c+54,"top_sim u_MEM EX_csr_wen_i", false,-1);
        tracep->declBus(c+55,"top_sim u_MEM EX_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+56,"top_sim u_MEM EX_rd_wen_i", false,-1);
        tracep->declBus(c+57,"top_sim u_MEM EX_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+50,"top_sim u_MEM EX_rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+65,"top_sim u_MEM ex_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+677,"top_sim u_MEM ex_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+679,"top_sim u_MEM ex_csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+58,"top_sim u_MEM EX_pc_misalign_i", false,-1);
        tracep->declBit(c+59,"top_sim u_MEM EX_if_bus_err_i", false,-1);
        tracep->declBit(c+60,"top_sim u_MEM EX_ilegl_instr_i", false,-1);
        tracep->declBit(c+61,"top_sim u_MEM EX_ecall_i", false,-1);
        tracep->declBit(c+62,"top_sim u_MEM EX_ebreak_i", false,-1);
        tracep->declBit(c+63,"top_sim u_MEM EX_mret_i", false,-1);
        tracep->declQuad(c+70,"top_sim u_MEM MEM_pc_o", false,-1, 63,0);
        tracep->declBus(c+72,"top_sim u_MEM MEM_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+73,"top_sim u_MEM MEM_ld_st_info_o", false,-1, 10,0);
        tracep->declBit(c+74,"top_sim u_MEM MEM_csr_wen_o", false,-1);
        tracep->declBus(c+75,"top_sim u_MEM MEM_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+76,"top_sim u_MEM MEM_rd_wen_o", false,-1);
        tracep->declBus(c+77,"top_sim u_MEM MEM_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+78,"top_sim u_MEM MEM_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+80,"top_sim u_MEM MEM_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top_sim u_MEM MEM_csr_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top_sim u_MEM MEM_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+86,"top_sim u_MEM MEM_pc_misalign_o", false,-1);
        tracep->declBit(c+87,"top_sim u_MEM MEM_if_bus_err_o", false,-1);
        tracep->declBit(c+88,"top_sim u_MEM MEM_ilegl_instr_o", false,-1);
        tracep->declBit(c+89,"top_sim u_MEM MEM_ecall_o", false,-1);
        tracep->declBit(c+90,"top_sim u_MEM MEM_ebreak_o", false,-1);
        tracep->declBit(c+91,"top_sim u_MEM MEM_mret_o", false,-1);
        tracep->declBit(c+64,"top_sim u_MEM EX_valid_i", false,-1);
        tracep->declBit(c+674,"top_sim u_MEM WB_ready_i", false,-1);
        tracep->declBit(c+92,"top_sim u_MEM MEM_valid_o", false,-1);
        tracep->declBit(c+674,"top_sim u_MEM MEM_ready_o", false,-1);
        tracep->declBit(c+92,"top_sim u_MEM MEM_data_valid", false,-1);
        tracep->declBit(c+674,"top_sim u_MEM run", false,-1);
        tracep->declQuad(c+549,"top_sim u_MEM MEM_pc_r", false,-1, 63,0);
        tracep->declBus(c+551,"top_sim u_MEM MEM_optype_info_r", false,-1, 11,0);
        tracep->declBus(c+552,"top_sim u_MEM MEM_ld_st_info_r", false,-1, 10,0);
        tracep->declBit(c+553,"top_sim u_MEM MEM_csr_wen_r", false,-1);
        tracep->declBus(c+554,"top_sim u_MEM MEM_csr_idx_r", false,-1, 11,0);
        tracep->declBit(c+555,"top_sim u_MEM MEM_rd_wen_r", false,-1);
        tracep->declBus(c+556,"top_sim u_MEM MEM_rd_idx_r", false,-1, 4,0);
        tracep->declQuad(c+557,"top_sim u_MEM MEM_rs2_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+559,"top_sim u_MEM MEM_alu_res_r", false,-1, 63,0);
        tracep->declQuad(c+561,"top_sim u_MEM MEM_csr_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+563,"top_sim u_MEM MEM_csr_wdata_r", false,-1, 63,0);
        tracep->declBit(c+565,"top_sim u_MEM MEM_pc_misalign_r", false,-1);
        tracep->declBit(c+566,"top_sim u_MEM MEM_if_bus_err_r", false,-1);
        tracep->declBit(c+567,"top_sim u_MEM MEM_ilegl_instr_r", false,-1);
        tracep->declBit(c+568,"top_sim u_MEM MEM_ecall_r", false,-1);
        tracep->declBit(c+569,"top_sim u_MEM MEM_ebreak_r", false,-1);
        tracep->declBit(c+570,"top_sim u_MEM MEM_mret_r", false,-1);
        tracep->declBus(c+73,"top_sim u_mem ld_st_info_i", false,-1, 10,0);
        tracep->declQuad(c+80,"top_sim u_mem mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+78,"top_sim u_mem mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top_sim u_mem mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+95,"top_sim u_mem mem_ld_misalign_o", false,-1);
        tracep->declBit(c+675,"top_sim u_mem mem_ld_bus_err_o", false,-1);
        tracep->declBit(c+96,"top_sim u_mem mem_st_misalign_o", false,-1);
        tracep->declBit(c+675,"top_sim u_mem mem_st_bus_err_o", false,-1);
        tracep->declQuad(c+124,"top_sim u_mem ram_addr_o", false,-1, 63,0);
        tracep->declBit(c+126,"top_sim u_mem ram_wen_o", false,-1);
        tracep->declBus(c+127,"top_sim u_mem ram_byte_en_o", false,-1, 7,0);
        tracep->declQuad(c+128,"top_sim u_mem ram_wdata_o", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_mem ram_ren_o", false,-1);
        tracep->declQuad(c+131,"top_sim u_mem ram_rdata_i", false,-1, 63,0);
        tracep->declBit(c+571,"top_sim u_mem lb", false,-1);
        tracep->declBit(c+572,"top_sim u_mem lh", false,-1);
        tracep->declBit(c+573,"top_sim u_mem lw", false,-1);
        tracep->declBit(c+574,"top_sim u_mem ld", false,-1);
        tracep->declBit(c+575,"top_sim u_mem lbu", false,-1);
        tracep->declBit(c+576,"top_sim u_mem lhu", false,-1);
        tracep->declBit(c+577,"top_sim u_mem lwu", false,-1);
        tracep->declBit(c+578,"top_sim u_mem sb", false,-1);
        tracep->declBit(c+579,"top_sim u_mem sh", false,-1);
        tracep->declBit(c+580,"top_sim u_mem sw", false,-1);
        tracep->declBit(c+581,"top_sim u_mem sd", false,-1);
        tracep->declBus(c+582,"top_sim u_mem lb_rdata", false,-1, 7,0);
        tracep->declBus(c+583,"top_sim u_mem lh_rdata", false,-1, 15,0);
        tracep->declBus(c+584,"top_sim u_mem lw_rdata", false,-1, 31,0);
        tracep->declQuad(c+585,"top_sim u_mem mem_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+587,"top_sim u_mem mem_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+589,"top_sim u_mem mem_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+131,"top_sim u_mem mem_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+591,"top_sim u_mem mem_rdata_lbu", false,-1, 63,0);
        tracep->declQuad(c+593,"top_sim u_mem mem_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+595,"top_sim u_mem mem_rdata_lwu", false,-1, 63,0);
        tracep->declBus(c+597,"top_sim u_mem sb_byte_en", false,-1, 7,0);
        tracep->declBus(c+598,"top_sim u_mem sh_byte_en", false,-1, 7,0);
        tracep->declBus(c+599,"top_sim u_mem sw_byte_en", false,-1, 7,0);
        tracep->declBus(c+694,"top_sim u_ram SIZE", false,-1, 31,0);
        tracep->declBit(c+610,"top_sim u_ram clk", false,-1);
        tracep->declQuad(c+124,"top_sim u_ram addr_i", false,-1, 63,0);
        tracep->declBit(c+126,"top_sim u_ram wen_i", false,-1);
        tracep->declBus(c+127,"top_sim u_ram byte_en_i", false,-1, 7,0);
        tracep->declQuad(c+128,"top_sim u_ram wdata_i", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_ram ren_i", false,-1);
        tracep->declQuad(c+131,"top_sim u_ram rdata_o", false,-1, 63,0);
        tracep->declBus(c+600,"top_sim u_ram addr", false,-1, 9,0);
        tracep->declQuad(c+601,"top_sim u_ram rdata", false,-1, 63,0);
        tracep->declQuad(c+603,"top_sim u_ram mask", false,-1, 63,0);
        tracep->declQuad(c+605,"top_sim u_ram wdata", false,-1, 63,0);
        tracep->declBit(c+610,"top_sim u_WB clk", false,-1);
        tracep->declBit(c+611,"top_sim u_WB rst", false,-1);
        tracep->declQuad(c+70,"top_sim u_WB MEM_pc_i", false,-1, 63,0);
        tracep->declBus(c+72,"top_sim u_WB MEM_optype_info_i", false,-1, 11,0);
        tracep->declBit(c+74,"top_sim u_WB MEM_csr_wen_i", false,-1);
        tracep->declBus(c+75,"top_sim u_WB MEM_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+76,"top_sim u_WB MEM_rd_wen_i", false,-1);
        tracep->declBus(c+77,"top_sim u_WB MEM_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+80,"top_sim u_WB MEM_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top_sim u_WB MEM_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top_sim u_WB MEM_csr_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top_sim u_WB mem_rdata_i", false,-1, 63,0);
        tracep->declBit(c+86,"top_sim u_WB MEM_pc_misalign_i", false,-1);
        tracep->declBit(c+87,"top_sim u_WB MEM_if_bus_err_i", false,-1);
        tracep->declBit(c+88,"top_sim u_WB MEM_ilegl_instr_i", false,-1);
        tracep->declBit(c+89,"top_sim u_WB MEM_ecall_i", false,-1);
        tracep->declBit(c+90,"top_sim u_WB MEM_ebreak_i", false,-1);
        tracep->declBit(c+91,"top_sim u_WB MEM_mret_i", false,-1);
        tracep->declBit(c+95,"top_sim u_WB mem_ld_misalign_i", false,-1);
        tracep->declBit(c+675,"top_sim u_WB mem_ld_bus_err_i", false,-1);
        tracep->declBit(c+96,"top_sim u_WB mem_st_misalign_i", false,-1);
        tracep->declBit(c+675,"top_sim u_WB mem_st_bus_err_i", false,-1);
        tracep->declQuad(c+97,"top_sim u_WB WB_pc_o", false,-1, 63,0);
        tracep->declBus(c+99,"top_sim u_WB WB_optype_info_o", false,-1, 11,0);
        tracep->declBit(c+100,"top_sim u_WB WB_csr_wen_o", false,-1);
        tracep->declBus(c+101,"top_sim u_WB WB_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+104,"top_sim u_WB WB_rd_wen_o", false,-1);
        tracep->declBus(c+105,"top_sim u_WB WB_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+106,"top_sim u_WB WB_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+108,"top_sim u_WB WB_csr_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+102,"top_sim u_WB WB_csr_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+110,"top_sim u_WB WB_mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+112,"top_sim u_WB WB_pc_misalign_o", false,-1);
        tracep->declBit(c+113,"top_sim u_WB WB_if_bus_err_o", false,-1);
        tracep->declBit(c+114,"top_sim u_WB WB_ilegl_instr_o", false,-1);
        tracep->declBit(c+115,"top_sim u_WB WB_ecall_o", false,-1);
        tracep->declBit(c+116,"top_sim u_WB WB_ebreak_o", false,-1);
        tracep->declBit(c+117,"top_sim u_WB WB_mret_o", false,-1);
        tracep->declBit(c+118,"top_sim u_WB WB_ld_misalign_o", false,-1);
        tracep->declBit(c+119,"top_sim u_WB WB_ld_bus_err_o", false,-1);
        tracep->declBit(c+120,"top_sim u_WB WB_st_misalign_o", false,-1);
        tracep->declBit(c+121,"top_sim u_WB WB_st_bus_err_o", false,-1);
        tracep->declBit(c+92,"top_sim u_WB MEM_valid_i", false,-1);
        tracep->declBit(c+674,"top_sim u_WB WB_ready_o", false,-1);
        tracep->declBit(c+607,"top_sim u_WB WB_data_valid", false,-1);
        tracep->declBit(c+674,"top_sim u_WB run", false,-1);
        tracep->declBus(c+99,"top_sim u_wb WB_optype_info_i", false,-1, 11,0);
        tracep->declBit(c+695,"top_sim u_wb WB_csr_wen_i", false,-1);
        tracep->declBus(c+696,"top_sim u_wb WB_csr_idx_i", false,-1, 11,0);
        tracep->declQuad(c+697,"top_sim u_wb WB_csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+104,"top_sim u_wb WB_rd_wen_i", false,-1);
        tracep->declBus(c+105,"top_sim u_wb WB_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+106,"top_sim u_wb WB_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+108,"top_sim u_wb WB_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+110,"top_sim u_wb WB_mem_rdata_i", false,-1, 63,0);
        tracep->declBit(c+104,"top_sim u_wb wb_rd_wen_o", false,-1);
        tracep->declBus(c+105,"top_sim u_wb wb_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+122,"top_sim u_wb wb_rd_wdata_o", false,-1, 63,0);
        tracep->declBit(c+608,"top_sim u_wb op_load", false,-1);
        tracep->declBit(c+609,"top_sim u_wb op_system", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
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
        tracep->fullQData(oldp+8,((vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r 
                                   & (- (QData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))))),64);
        tracep->fullIData(oldp+10,(vlSelf->top_sim__DOT__ID_instr),32);
        tracep->fullBit(oldp+11,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+13,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+14,((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))));
        tracep->fullBit(oldp+15,(vlSelf->top_sim__DOT__ID_valid));
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+18,(((0U == (0x1fU & 
                                            (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0xfU)))
                                     ? 0ULL : (((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                & ((0x1fU 
                                                    & (vlSelf->top_sim__DOT__ID_instr 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                                ? vlSelf->top_sim__DOT__wb_rd_wdata
                                                : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->top_sim__DOT__ID_instr 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->top_sim__DOT__ID_instr 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0ULL)))),64);
        tracep->fullQData(oldp+20,(((0U == (0x1fU & 
                                            (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x14U)))
                                     ? 0ULL : (((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                & ((0x1fU 
                                                    & (vlSelf->top_sim__DOT__ID_instr 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                                ? vlSelf->top_sim__DOT__wb_rd_wdata
                                                : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->top_sim__DOT__ID_instr 
                                                         >> 0x14U) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->top_sim__DOT__ID_instr 
                                                        >> 0x14U) 
                                                       - (IData)(1U)))]
                                                    : 0ULL)))),64);
        tracep->fullSData(oldp+22,((vlSelf->top_sim__DOT__ID_instr 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+23,(((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+24,((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                     << 0xbU) | (((0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__ID_instr)) 
                                                  << 0xaU) 
                                                 | (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top_sim__DOT__ID_instr)) 
                                                     << 9U) 
                                                    | (((0x3bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top_sim__DOT__ID_instr)) 
                                                        << 8U) 
                                                       | (((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top_sim__DOT__ID_instr)) 
                                                           << 7U) 
                                                          | (((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                                              << 6U) 
                                                             | (((0x67U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                                                 << 5U) 
                                                                | (((3U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top_sim__DOT__ID_instr)) 
                                                                    << 4U) 
                                                                   | (((0x23U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top_sim__DOT__ID_instr)) 
                                                                       << 3U) 
                                                                      | (((0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__ID_instr)) 
                                                                          << 2U) 
                                                                         | (((0x17U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__ID_instr)) 
                                                                             << 1U) 
                                                                            | (0x73U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr)))))))))))))),12);
        tracep->fullSData(oldp+25,((((((((IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                         & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U))) 
                                        | (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__ID_instr)))) 
                                       | ((IData)((0x3bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__ID_instr))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0x19U)))) 
                                      | (IData)((0x1bU 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))) 
                                     << 9U) | (((((IData)(
                                                          (0x33U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr))) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__ID_instr 
                                                      >> 0x19U))) 
                                                 | ((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->top_sim__DOT__ID_instr 
                                                        >> 0x19U)))) 
                                                << 8U) 
                                               | (((((((IData)(
                                                               (0x1033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top_sim__DOT__ID_instr 
                                                           >> 0x19U))) 
                                                      | ((IData)(
                                                                 (0x1013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x19U)))) 
                                                     | ((IData)(
                                                                (0x103bU 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top_sim__DOT__ID_instr 
                                                            >> 0x19U)))) 
                                                    | ((IData)(
                                                               (0x101bU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top_sim__DOT__ID_instr 
                                                           >> 0x19U)))) 
                                                   << 7U) 
                                                  | (((((IData)(
                                                                (0x2033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top_sim__DOT__ID_instr 
                                                            >> 0x19U))) 
                                                       | (IData)(
                                                                 (0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__ID_instr)))) 
                                                      << 6U) 
                                                     | (((((IData)(
                                                                   (0x3033U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__ID_instr))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top_sim__DOT__ID_instr 
                                                               >> 0x19U))) 
                                                          | (IData)(
                                                                    (0x3013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__ID_instr)))) 
                                                         << 5U) 
                                                        | (((((IData)(
                                                                      (0x4033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__ID_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__ID_instr 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x4013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__ID_instr)))) 
                                                            << 4U) 
                                                           | (((((((IData)(
                                                                           (0x5033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->top_sim__DOT__ID_instr 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(
                                                                             (0x5013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->top_sim__DOT__ID_instr))) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->top_sim__DOT__ID_instr 
                                                                         >> 0x19U)))) 
                                                                 | ((IData)(
                                                                            (0x503bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->top_sim__DOT__ID_instr 
                                                                        >> 0x19U)))) 
                                                                | ((IData)(
                                                                           (0x501bU 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->top_sim__DOT__ID_instr 
                                                                       >> 0x19U)))) 
                                                               << 3U) 
                                                              | (((((((IData)(
                                                                              (0x5033U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                                          >> 0x19U))) 
                                                                     | ((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->top_sim__DOT__ID_instr 
                                                                            >> 0x19U)))) 
                                                                    | ((IData)(
                                                                               (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 0x19U)))) 
                                                                   | ((IData)(
                                                                              (0x501bU 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                                          >> 0x19U)))) 
                                                                  << 2U) 
                                                                 | (((((IData)(
                                                                               (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 0x19U))) 
                                                                      | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr)))) 
                                                                     << 1U) 
                                                                    | (((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->top_sim__DOT__ID_instr 
                                                                            >> 0x19U))) 
                                                                       | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr)))))))))))))),10);
        tracep->fullCData(oldp+26,((((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                     << 5U) | (((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__ID_instr))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0x7063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__ID_instr))))))))),6);
        tracep->fullSData(oldp+27,((((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr))) 
                                     << 0xaU) | (((IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr))) 
                                                  << 9U) 
                                                 | (((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__ID_instr))) 
                                                     << 8U) 
                                                    | (((IData)(
                                                                (0x3003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                                        << 7U) 
                                                       | (((IData)(
                                                                   (0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__ID_instr))) 
                                                           << 6U) 
                                                          | (((IData)(
                                                                      (0x5003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__ID_instr))) 
                                                              << 5U) 
                                                             | (((IData)(
                                                                         (0x6003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__ID_instr))) 
                                                                 << 4U) 
                                                                | (((IData)(
                                                                            (0x23U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                                                    << 3U) 
                                                                   | (((IData)(
                                                                               (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                       << 2U) 
                                                                      | (((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                                                          << 1U) 
                                                                         | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__ID_instr)))))))))))))),11);
        tracep->fullCData(oldp+28,((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                     << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))))),6);
        tracep->fullQData(oldp+29,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
        tracep->fullBit(oldp+31,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullCData(oldp+32,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+33,(vlSelf->top_sim__DOT__id_load_use));
        tracep->fullBit(oldp+34,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
        tracep->fullBit(oldp+35,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
        tracep->fullBit(oldp+36,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
        tracep->fullQData(oldp+37,(vlSelf->top_sim__DOT__EX_pc),64);
        tracep->fullBit(oldp+39,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullSData(oldp+40,(vlSelf->top_sim__DOT__EX_optype_info),12);
        tracep->fullSData(oldp+41,(vlSelf->top_sim__DOT__EX_alu_info),10);
        tracep->fullCData(oldp+42,(vlSelf->top_sim__DOT__EX_branch_info),6);
        tracep->fullSData(oldp+43,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),11);
        tracep->fullCData(oldp+44,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),6);
        tracep->fullBit(oldp+45,((((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                   >> 4U) & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullCData(oldp+46,(vlSelf->top_sim__DOT__EX_rs1_idx),5);
        tracep->fullCData(oldp+47,(vlSelf->top_sim__DOT__EX_rs2_idx),5);
        tracep->fullQData(oldp+48,(vlSelf->top_sim__DOT__EX_rs1_rdata),64);
        tracep->fullQData(oldp+50,(vlSelf->top_sim__DOT__EX_rs2_rdata),64);
        tracep->fullQData(oldp+52,((vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),64);
        tracep->fullBit(oldp+54,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullSData(oldp+55,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),12);
        tracep->fullBit(oldp+56,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullCData(oldp+57,(vlSelf->top_sim__DOT__EX_rd_idx),5);
        tracep->fullBit(oldp+58,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+59,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+60,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+61,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+62,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+63,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+64,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
        tracep->fullQData(oldp+65,(((IData)((0U != 
                                             (0x500U 
                                              & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))
                                     : vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)),64);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullBit(oldp+67,((1U & ((((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                >> 5U) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                              ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))))) 
                                              | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                  >> 4U) 
                                                 & (0U 
                                                    != 
                                                    (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                     ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))) 
                                             | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                 >> 3U) 
                                                & (((IData)(
                                                            (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                             >> 0x3fU)) 
                                                    & (~ (IData)(
                                                                 (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                  >> 0x3fU)))) 
                                                   | ((~ 
                                                       ((IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                 >> 0x3fU)) 
                                                        ^ (IData)(
                                                                  (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                   >> 0x3fU)))) 
                                                      & (IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                                 >> 0x3fU)))))) 
                                            | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                >> 2U) 
                                               & (~ 
                                                  (((IData)(
                                                            (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                             >> 0x3fU)) 
                                                    & (~ (IData)(
                                                                 (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                  >> 0x3fU)))) 
                                                   | ((~ 
                                                       ((IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                 >> 0x3fU)) 
                                                        ^ (IData)(
                                                                  (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                   >> 0x3fU)))) 
                                                      & (IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                                 >> 0x3fU))))))) 
                                           | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                               >> 1U) 
                                              & (~ 
                                                 (1U 
                                                  & __Vtemp23[2U])))) 
                                          | (1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                   & __Vtemp30[2U]))) 
                                         | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 6U)) 
                                        | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                           >> 5U)))));
        tracep->fullQData(oldp+68,((((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                      ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                      : vlSelf->top_sim__DOT__EX_pc) 
                                    + (vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid)))))),64);
        tracep->fullQData(oldp+70,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
        tracep->fullSData(oldp+72,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
        tracep->fullSData(oldp+73,(vlSelf->top_sim__DOT__MEM_ld_st_info),11);
        tracep->fullBit(oldp+74,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullSData(oldp+75,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
        tracep->fullBit(oldp+76,(vlSelf->top_sim__DOT__MEM_rd_wen));
        tracep->fullCData(oldp+77,(vlSelf->top_sim__DOT__MEM_rd_idx),5);
        tracep->fullQData(oldp+78,(vlSelf->top_sim__DOT__MEM_rs2_rdata),64);
        tracep->fullQData(oldp+80,(vlSelf->top_sim__DOT__MEM_alu_res),64);
        tracep->fullQData(oldp+82,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
        tracep->fullQData(oldp+84,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
        tracep->fullBit(oldp+86,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+87,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+88,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+89,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+90,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+91,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+92,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
        tracep->fullQData(oldp+93,(((((((((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                 >> 0xaU))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                                     >> 7U))))) 
                                              << 8U) 
                                             | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                   >> 9U))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                  >> 8U))))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                 >> 7U))))) 
                                          & vlSelf->top_sim__DOT__ram_rdata)) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                >> 6U))))) 
                                         & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                               >> 5U))))) 
                                        & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                              >> 4U))))) 
                                       & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))))),64);
        tracep->fullBit(oldp+95,((1U & ((((IData)((0U 
                                                   != 
                                                   (0x220U 
                                                    & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info)))) 
                                          & (IData)(vlSelf->top_sim__DOT__MEM_alu_res)) 
                                         | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x110U 
                                                      & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info)))) 
                                            & (0U != 
                                               (3U 
                                                & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))) 
                                        | (((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 7U) 
                                           & (0U != 
                                              (7U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))))));
        tracep->fullBit(oldp+96,((1U & (((((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                           >> 2U) & (IData)(vlSelf->top_sim__DOT__MEM_alu_res)) 
                                         | (((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                             >> 1U) 
                                            & (0U != 
                                               (3U 
                                                & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))) 
                                        | ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                           & (0U != 
                                              (7U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))))));
        tracep->fullQData(oldp+97,(vlSelf->top_sim__DOT__WB_pc),64);
        tracep->fullSData(oldp+99,(vlSelf->top_sim__DOT__WB_optype_info),12);
        tracep->fullBit(oldp+100,(vlSelf->top_sim__DOT__WB_csr_wen));
        tracep->fullSData(oldp+101,(vlSelf->top_sim__DOT__WB_csr_idx),12);
        tracep->fullQData(oldp+102,(vlSelf->top_sim__DOT__WB_csr_wdata),64);
        tracep->fullBit(oldp+104,(vlSelf->top_sim__DOT__WB_rd_wen));
        tracep->fullCData(oldp+105,(vlSelf->top_sim__DOT__WB_rd_idx),5);
        tracep->fullQData(oldp+106,(vlSelf->top_sim__DOT__WB_alu_res),64);
        tracep->fullQData(oldp+108,(vlSelf->top_sim__DOT__WB_csr_rdata),64);
        tracep->fullQData(oldp+110,(vlSelf->top_sim__DOT__WB_mem_rdata),64);
        tracep->fullBit(oldp+112,(vlSelf->top_sim__DOT__WB_pc_misalign));
        tracep->fullBit(oldp+113,(vlSelf->top_sim__DOT__WB_if_bus_err));
        tracep->fullBit(oldp+114,(vlSelf->top_sim__DOT__WB_ilegl_instr));
        tracep->fullBit(oldp+115,(vlSelf->top_sim__DOT__WB_ecall));
        tracep->fullBit(oldp+116,(vlSelf->top_sim__DOT__WB_ebreak));
        tracep->fullBit(oldp+117,(vlSelf->top_sim__DOT__WB_mret));
        tracep->fullBit(oldp+118,(vlSelf->top_sim__DOT__WB_ld_misalign));
        tracep->fullBit(oldp+119,(vlSelf->top_sim__DOT__WB_ld_bus_err));
        tracep->fullBit(oldp+120,(vlSelf->top_sim__DOT__WB_st_misalign));
        tracep->fullBit(oldp+121,(vlSelf->top_sim__DOT__WB_st_bus_err));
        tracep->fullQData(oldp+122,(vlSelf->top_sim__DOT__wb_rd_wdata),64);
        tracep->fullQData(oldp+124,((0xfffffffffffffff8ULL 
                                     & vlSelf->top_sim__DOT__MEM_alu_res)),64);
        tracep->fullBit(oldp+126,((IData)((0U != (0xfU 
                                                  & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
        tracep->fullCData(oldp+127,(vlSelf->top_sim__DOT__ram_byte_en),8);
        tracep->fullQData(oldp+128,((((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                               >> 3U))))) 
                                        & (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                        << 0x18U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                           << 0x10U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))))))))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                 >> 2U))))) 
                                          & (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata))))))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                >> 1U))))) 
                                         & (((QData)((IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top_sim__DOT__MEM_rs2_rdata))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))) 
                                        & vlSelf->top_sim__DOT__MEM_rs2_rdata))),64);
        tracep->fullBit(oldp+130,((IData)((0U != (0x7f0U 
                                                  & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
        tracep->fullQData(oldp+131,(vlSelf->top_sim__DOT__ram_rdata),64);
        tracep->fullBit(oldp+133,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+134,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+135,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 7U))));
        tracep->fullQData(oldp+136,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
        tracep->fullBit(oldp+138,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
        tracep->fullQData(oldp+139,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                      ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+141,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                      ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                          ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                      : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+143,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                      ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                      : 4ULL)),64);
        tracep->fullSData(oldp+145,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
        tracep->fullCData(oldp+146,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0xfU))),5);
        tracep->fullSData(oldp+147,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+149,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
        tracep->fullCData(oldp+150,((((IData)((0x63U 
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
        tracep->fullSData(oldp+151,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
        tracep->fullCData(oldp+152,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                      << 5U) | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
        tracep->fullBit(oldp+153,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                    | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+154,((vlSelf->top_sim__DOT__ifu_instr 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+155,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                    & (0x63U != (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x23U != (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+157,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i) 
                                   & (((((((((((0x37U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                               & (0x17U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                              & (0x6fU 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                             & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                            & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                       & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_rd_idx_i) 
                                          == (0x1fU 
                                              & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0xfU)))) 
                                      | (((((0x33U 
                                             == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                            | (0x3bU 
                                               == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                           | (0x63U 
                                              == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                         & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_rd_idx_i) 
                                            == (0x1fU 
                                                & (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x14U))))))));
        tracep->fullBit(oldp+158,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
        tracep->fullBit(oldp+159,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
        tracep->fullBit(oldp+160,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
        tracep->fullCData(oldp+161,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
        tracep->fullCData(oldp+162,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+163,((vlSelf->top_sim__DOT__ifu_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+164,((0x13U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+165,((0x1bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+166,((0x33U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+167,((0x3bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+168,((0x63U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+169,((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+170,((0x67U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+171,((3U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+172,((0x23U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+173,((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+174,((0x17U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+175,((0x73U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+176,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+177,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+178,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+179,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+180,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+181,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+182,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+183,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+184,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+185,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+186,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+187,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+188,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+189,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+190,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+191,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+192,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+193,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+194,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+195,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+196,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+197,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+198,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+199,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+200,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+201,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+202,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+203,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+204,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+205,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+206,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+207,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+208,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+209,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+210,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+211,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+212,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+213,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+214,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+215,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+216,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+217,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+218,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+219,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+220,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+221,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
        tracep->fullBit(oldp+222,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
        tracep->fullBit(oldp+223,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
        tracep->fullBit(oldp+224,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+225,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+226,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
        tracep->fullBit(oldp+227,((((((((((0x37U != 
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
        tracep->fullBit(oldp+228,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullQData(oldp+229,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+231,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__ifu_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__ifu_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+233,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+235,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+237,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__ifu_instr))))),64);
        tracep->fullBit(oldp+239,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+240,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+241,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
        tracep->fullQData(oldp+242,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
        tracep->fullIData(oldp+244,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
        tracep->fullBit(oldp+245,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
        tracep->fullBit(oldp+246,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
        tracep->fullBit(oldp+247,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
        tracep->fullCData(oldp+248,((0x7fU & vlSelf->top_sim__DOT__ID_instr)),7);
        tracep->fullCData(oldp+249,((7U & (vlSelf->top_sim__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+250,((vlSelf->top_sim__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+251,((0x13U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+252,((0x1bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+253,((0x33U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+254,((0x3bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+255,((0x63U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+256,((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+257,((0x67U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+258,((3U == (0x7fU & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+259,((0x23U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+260,((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+261,((0x17U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+262,((0x73U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+263,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+264,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+265,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+266,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+267,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+268,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+269,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+270,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+271,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+272,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+273,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+274,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+275,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+276,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+277,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+278,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+279,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+280,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+281,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+282,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+283,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+284,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+285,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+286,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+287,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+288,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+289,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+290,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+291,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+292,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+293,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+294,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+295,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+296,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+297,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+298,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+299,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+300,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+301,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+302,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+303,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+304,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+305,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+306,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+307,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+308,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
        tracep->fullBit(oldp+309,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
        tracep->fullBit(oldp+310,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
        tracep->fullBit(oldp+311,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+312,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+313,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
        tracep->fullBit(oldp+314,((((((((((0x37U != 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret)))));
        tracep->fullBit(oldp+315,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullQData(oldp+316,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__ID_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+318,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__ID_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__ID_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+320,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top_sim__DOT__ID_instr 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top_sim__DOT__ID_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top_sim__DOT__ID_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top_sim__DOT__ID_instr 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+322,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->top_sim__DOT__ID_instr 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->top_sim__DOT__ID_instr) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top_sim__DOT__ID_instr 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top_sim__DOT__ID_instr 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__ID_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__ID_instr))))),64);
        tracep->fullBit(oldp+326,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+327,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ID_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullQData(oldp+328,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0]),64);
        tracep->fullQData(oldp+330,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1]),64);
        tracep->fullQData(oldp+332,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2]),64);
        tracep->fullQData(oldp+334,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3]),64);
        tracep->fullQData(oldp+336,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4]),64);
        tracep->fullQData(oldp+338,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5]),64);
        tracep->fullQData(oldp+340,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6]),64);
        tracep->fullQData(oldp+342,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7]),64);
        tracep->fullQData(oldp+344,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8]),64);
        tracep->fullQData(oldp+346,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9]),64);
        tracep->fullQData(oldp+348,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[10]),64);
        tracep->fullQData(oldp+350,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[11]),64);
        tracep->fullQData(oldp+352,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[12]),64);
        tracep->fullQData(oldp+354,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[13]),64);
        tracep->fullQData(oldp+356,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[14]),64);
        tracep->fullQData(oldp+358,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[15]),64);
        tracep->fullQData(oldp+360,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[16]),64);
        tracep->fullQData(oldp+362,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[17]),64);
        tracep->fullQData(oldp+364,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[18]),64);
        tracep->fullQData(oldp+366,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[19]),64);
        tracep->fullQData(oldp+368,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[20]),64);
        tracep->fullQData(oldp+370,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[21]),64);
        tracep->fullQData(oldp+372,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[22]),64);
        tracep->fullQData(oldp+374,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[23]),64);
        tracep->fullQData(oldp+376,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[24]),64);
        tracep->fullQData(oldp+378,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[25]),64);
        tracep->fullQData(oldp+380,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[26]),64);
        tracep->fullQData(oldp+382,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[27]),64);
        tracep->fullQData(oldp+384,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[28]),64);
        tracep->fullQData(oldp+386,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[29]),64);
        tracep->fullQData(oldp+388,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[30]),64);
        tracep->fullQData(oldp+390,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[0]),64);
        tracep->fullQData(oldp+392,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[1]),64);
        tracep->fullQData(oldp+394,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[2]),64);
        tracep->fullQData(oldp+396,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[3]),64);
        tracep->fullQData(oldp+398,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[4]),64);
        tracep->fullQData(oldp+400,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[5]),64);
        tracep->fullQData(oldp+402,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[6]),64);
        tracep->fullQData(oldp+404,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[7]),64);
        tracep->fullQData(oldp+406,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[8]),64);
        tracep->fullQData(oldp+408,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[9]),64);
        tracep->fullQData(oldp+410,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[10]),64);
        tracep->fullQData(oldp+412,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[11]),64);
        tracep->fullQData(oldp+414,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[12]),64);
        tracep->fullQData(oldp+416,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[13]),64);
        tracep->fullQData(oldp+418,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[14]),64);
        tracep->fullQData(oldp+420,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[15]),64);
        tracep->fullQData(oldp+422,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[16]),64);
        tracep->fullQData(oldp+424,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[17]),64);
        tracep->fullQData(oldp+426,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[18]),64);
        tracep->fullQData(oldp+428,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[19]),64);
        tracep->fullQData(oldp+430,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[20]),64);
        tracep->fullQData(oldp+432,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[21]),64);
        tracep->fullQData(oldp+434,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[22]),64);
        tracep->fullQData(oldp+436,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[23]),64);
        tracep->fullQData(oldp+438,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[24]),64);
        tracep->fullQData(oldp+440,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[25]),64);
        tracep->fullQData(oldp+442,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[26]),64);
        tracep->fullQData(oldp+444,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[27]),64);
        tracep->fullQData(oldp+446,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[28]),64);
        tracep->fullQData(oldp+448,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[29]),64);
        tracep->fullQData(oldp+450,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[30]),64);
        tracep->fullBit(oldp+452,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
        tracep->fullBit(oldp+453,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
        tracep->fullBit(oldp+454,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
        tracep->fullBit(oldp+455,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
        tracep->fullQData(oldp+456,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
        tracep->fullSData(oldp+458,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
        tracep->fullSData(oldp+459,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
        tracep->fullCData(oldp+460,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
        tracep->fullSData(oldp+461,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
        tracep->fullCData(oldp+462,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
        tracep->fullCData(oldp+463,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r),5);
        tracep->fullCData(oldp+464,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r),5);
        tracep->fullQData(oldp+465,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
        tracep->fullQData(oldp+467,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
        tracep->fullQData(oldp+469,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
        tracep->fullBit(oldp+471,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
        tracep->fullSData(oldp+472,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
        tracep->fullBit(oldp+473,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r));
        tracep->fullCData(oldp+474,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r),5);
        tracep->fullBit(oldp+475,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
        tracep->fullBit(oldp+476,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
        tracep->fullBit(oldp+477,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
        tracep->fullBit(oldp+478,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
        tracep->fullBit(oldp+479,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
        tracep->fullBit(oldp+480,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
        VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
        tracep->fullBit(oldp+481,((1U & ((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                               >> 5U) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                             ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))))) 
                                             | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                 >> 4U) 
                                                & (0U 
                                                   != 
                                                   (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                    ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))) 
                                            | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                >> 3U) 
                                               & (((IData)(
                                                           (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                            >> 0x3fU)) 
                                                   & (~ (IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                 >> 0x3fU)))) 
                                                  | ((~ 
                                                      ((IData)(
                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(
                                                                 (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                  >> 0x3fU)))) 
                                                     & (IData)(
                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                                >> 0x3fU)))))) 
                                           | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                               >> 2U) 
                                              & (~ 
                                                 (((IData)(
                                                           (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                            >> 0x3fU)) 
                                                   & (~ (IData)(
                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                 >> 0x3fU)))) 
                                                  | ((~ 
                                                      ((IData)(
                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(
                                                                 (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                  >> 0x3fU)))) 
                                                     & (IData)(
                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                                >> 0x3fU))))))) 
                                          | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                              >> 1U) 
                                             & (~ (1U 
                                                   & __Vtemp37[2U])))) 
                                         | (1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                  & __Vtemp44[2U]))))));
        tracep->fullBit(oldp+482,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+483,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 5U))));
        tracep->fullQData(oldp+484,(((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                      ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                      : vlSelf->top_sim__DOT__EX_pc)),64);
        tracep->fullBit(oldp+486,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+487,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+488,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+489,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+490,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+491,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+492,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+493,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+494,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+495,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+496,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+497,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+498,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+499,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+500,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+501,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+502,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+503,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+504,((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))));
        tracep->fullBit(oldp+505,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+506,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+507,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+508,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+509,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+510,((1U & (IData)(vlSelf->top_sim__DOT__EX_branch_info))));
        tracep->fullBit(oldp+511,((1U & (IData)(((0U 
                                                  != 
                                                  (0x200U 
                                                   & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                 | (0U 
                                                    != 
                                                    (0x7eU 
                                                     & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))))));
        tracep->fullBit(oldp+512,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        tracep->fullBit(oldp+513,((1U & ((IData)(((0U 
                                                   != 
                                                   (0x200U 
                                                    & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                  | (0U 
                                                     != 
                                                     (0x7eU 
                                                      & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
        tracep->fullQData(oldp+514,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
        tracep->fullQData(oldp+516,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
        tracep->fullQData(oldp+518,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
        tracep->fullQData(oldp+520,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+522,((QData)((IData)(
                                                    (1U 
                                                     & (((IData)(
                                                                 (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                  >> 0x3fU)) 
                                                         & (~ (IData)(
                                                                      (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                       >> 0x3fU)))) 
                                                        | ((~ 
                                                            ((IData)(
                                                                     (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                                      >> 0x3fU)) 
                                                             ^ (IData)(
                                                                       (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                                        >> 0x3fU)))) 
                                                           & (IData)(
                                                                     (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                                      >> 0x3fU)))))))),64);
        VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
        VL_EXTEND_WI(65,1, __Vtemp50, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
        tracep->fullQData(oldp+524,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp51[2U])))))),64);
        tracep->fullQData(oldp+526,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+528,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+530,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+532,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+534,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+536,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
        VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        tracep->fullBit(oldp+538,((1U & __Vtemp58[2U])));
        tracep->fullCData(oldp+539,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
        tracep->fullQData(oldp+540,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
        tracep->fullQData(oldp+542,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
        tracep->fullBit(oldp+544,((0U != (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                          ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))));
        tracep->fullBit(oldp+545,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                     ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))))));
        tracep->fullBit(oldp+546,((1U & (((IData)((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                   >> 0x3fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                        >> 0x3fU)))) 
                                         | ((~ ((IData)(
                                                        (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                         >> 0x3fU)) 
                                                ^ (IData)(
                                                          (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                           >> 0x3fU)))) 
                                            & (IData)(
                                                      (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                       >> 0x3fU)))))));
        VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
        VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
        VL_EXTEND_WI(65,1, __Vtemp64, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        tracep->fullBit(oldp+547,((1U & (~ (1U & __Vtemp65[2U])))));
        tracep->fullBit(oldp+548,((1U & (~ (((IData)(
                                                     (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                      >> 0x3fU)) 
                                             & (~ (IData)(
                                                          (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                           >> 0x3fU)))) 
                                            | ((~ ((IData)(
                                                           (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(
                                                             (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                              >> 0x3fU)))) 
                                               & (IData)(
                                                         (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                                                          >> 0x3fU))))))));
        tracep->fullQData(oldp+549,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r),64);
        tracep->fullSData(oldp+551,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r),12);
        tracep->fullSData(oldp+552,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r),11);
        tracep->fullBit(oldp+553,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r));
        tracep->fullSData(oldp+554,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r),12);
        tracep->fullBit(oldp+555,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r));
        tracep->fullCData(oldp+556,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r),5);
        tracep->fullQData(oldp+557,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r),64);
        tracep->fullQData(oldp+559,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r),64);
        tracep->fullQData(oldp+561,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r),64);
        tracep->fullQData(oldp+563,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r),64);
        tracep->fullBit(oldp+565,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r));
        tracep->fullBit(oldp+566,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r));
        tracep->fullBit(oldp+567,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r));
        tracep->fullBit(oldp+568,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r));
        tracep->fullBit(oldp+569,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r));
        tracep->fullBit(oldp+570,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r));
        tracep->fullBit(oldp+571,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+572,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+573,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+574,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+575,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+576,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+577,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+578,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+579,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+580,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+581,((1U & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))));
        tracep->fullCData(oldp+582,(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata),8);
        tracep->fullSData(oldp+583,(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata),16);
        tracep->fullIData(oldp+584,(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata),32);
        tracep->fullQData(oldp+585,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                             >> 7U))))) 
                                      << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))),64);
        tracep->fullQData(oldp+587,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                             >> 0xfU))))) 
                                      << 0x10U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))),64);
        tracep->fullQData(oldp+589,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata)))),64);
        tracep->fullQData(oldp+591,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata))),64);
        tracep->fullQData(oldp+593,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))),64);
        tracep->fullQData(oldp+595,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))),64);
        tracep->fullCData(oldp+597,(((1U & (IData)(
                                                   (vlSelf->top_sim__DOT__MEM_alu_res 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                              ? 0x80U
                                              : 0x40U)
                                          : ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                              ? 0x20U
                                              : 0x10U))
                                      : ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                              ? 8U : 4U)
                                          : ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                              ? 2U : 1U)))),8);
        tracep->fullCData(oldp+598,(((1U & (IData)(
                                                   (vlSelf->top_sim__DOT__MEM_alu_res 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 1U)))
                                          ? 0xc0U : 0x30U)
                                      : ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 1U)))
                                          ? 0xcU : 3U))),8);
        tracep->fullCData(oldp+599,(((1U & (IData)(
                                                   (vlSelf->top_sim__DOT__MEM_alu_res 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 2U)))
                                          ? 0xf0U : 0U)
                                      : 0xfU)),8);
        tracep->fullSData(oldp+600,((0x3f8U & ((IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 3U)) 
                                               << 3U))),10);
        tracep->fullQData(oldp+601,(vlSelf->top_sim__DOT__u_ram__DOT__rdata),64);
        tracep->fullQData(oldp+603,(vlSelf->top_sim__DOT__u_ram__DOT__mask),64);
        tracep->fullQData(oldp+605,(vlSelf->top_sim__DOT__u_ram__DOT__wdata),64);
        tracep->fullBit(oldp+607,(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
        tracep->fullBit(oldp+608,((1U & ((IData)(vlSelf->top_sim__DOT__WB_optype_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+609,((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))));
        tracep->fullBit(oldp+610,(vlSelf->clk));
        tracep->fullBit(oldp+611,(vlSelf->rst));
        tracep->fullQData(oldp+612,(vlSelf->reg_data_o[0]),64);
        tracep->fullQData(oldp+614,(vlSelf->reg_data_o[1]),64);
        tracep->fullQData(oldp+616,(vlSelf->reg_data_o[2]),64);
        tracep->fullQData(oldp+618,(vlSelf->reg_data_o[3]),64);
        tracep->fullQData(oldp+620,(vlSelf->reg_data_o[4]),64);
        tracep->fullQData(oldp+622,(vlSelf->reg_data_o[5]),64);
        tracep->fullQData(oldp+624,(vlSelf->reg_data_o[6]),64);
        tracep->fullQData(oldp+626,(vlSelf->reg_data_o[7]),64);
        tracep->fullQData(oldp+628,(vlSelf->reg_data_o[8]),64);
        tracep->fullQData(oldp+630,(vlSelf->reg_data_o[9]),64);
        tracep->fullQData(oldp+632,(vlSelf->reg_data_o[10]),64);
        tracep->fullQData(oldp+634,(vlSelf->reg_data_o[11]),64);
        tracep->fullQData(oldp+636,(vlSelf->reg_data_o[12]),64);
        tracep->fullQData(oldp+638,(vlSelf->reg_data_o[13]),64);
        tracep->fullQData(oldp+640,(vlSelf->reg_data_o[14]),64);
        tracep->fullQData(oldp+642,(vlSelf->reg_data_o[15]),64);
        tracep->fullQData(oldp+644,(vlSelf->reg_data_o[16]),64);
        tracep->fullQData(oldp+646,(vlSelf->reg_data_o[17]),64);
        tracep->fullQData(oldp+648,(vlSelf->reg_data_o[18]),64);
        tracep->fullQData(oldp+650,(vlSelf->reg_data_o[19]),64);
        tracep->fullQData(oldp+652,(vlSelf->reg_data_o[20]),64);
        tracep->fullQData(oldp+654,(vlSelf->reg_data_o[21]),64);
        tracep->fullQData(oldp+656,(vlSelf->reg_data_o[22]),64);
        tracep->fullQData(oldp+658,(vlSelf->reg_data_o[23]),64);
        tracep->fullQData(oldp+660,(vlSelf->reg_data_o[24]),64);
        tracep->fullQData(oldp+662,(vlSelf->reg_data_o[25]),64);
        tracep->fullQData(oldp+664,(vlSelf->reg_data_o[26]),64);
        tracep->fullQData(oldp+666,(vlSelf->reg_data_o[27]),64);
        tracep->fullQData(oldp+668,(vlSelf->reg_data_o[28]),64);
        tracep->fullQData(oldp+670,(vlSelf->reg_data_o[29]),64);
        tracep->fullQData(oldp+672,(vlSelf->reg_data_o[30]),64);
        tracep->fullBit(oldp+674,(1U));
        tracep->fullBit(oldp+675,(0U));
        tracep->fullBit(oldp+676,(vlSelf->top_sim__DOT__id_ilegl_instr));
        tracep->fullQData(oldp+677,(vlSelf->top_sim__DOT__ex_csr_rdata),64);
        tracep->fullQData(oldp+679,(vlSelf->top_sim__DOT__ex_csr_wdata),64);
        tracep->fullBit(oldp+681,(vlSelf->top_sim__DOT__ex_flush));
        tracep->fullBit(oldp+682,(vlSelf->top_sim__DOT__mem_flush));
        tracep->fullQData(oldp+683,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+685,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i),64);
        tracep->fullBit(oldp+687,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i));
        tracep->fullCData(oldp+688,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_rd_idx_i),5);
        tracep->fullBit(oldp+689,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o));
        tracep->fullBit(oldp+690,(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r));
        tracep->fullSData(oldp+691,(vlSelf->top_sim__DOT__u_ex__DOT__ex_csr_idx_o),12);
        tracep->fullQData(oldp+692,(vlSelf->top_sim__DOT__u_ex__DOT__csr_rdata_i),64);
        tracep->fullIData(oldp+694,(0x400U),32);
        tracep->fullBit(oldp+695,(vlSelf->top_sim__DOT__u_wb__DOT__WB_csr_wen_i));
        tracep->fullSData(oldp+696,(vlSelf->top_sim__DOT__u_wb__DOT__WB_csr_idx_i),12);
        tracep->fullQData(oldp+697,(vlSelf->top_sim__DOT__u_wb__DOT__WB_csr_wdata_i),64);
    }
}
