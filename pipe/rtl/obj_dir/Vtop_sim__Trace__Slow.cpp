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
        tracep->declBit(c+683,"clk", false,-1);
        tracep->declBit(c+684,"rst", false,-1);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+685+i*2,"reg_data_o", true,(i+1), 63,0);}}
        tracep->declBit(c+683,"top_sim clk", false,-1);
        tracep->declBit(c+684,"top_sim rst", false,-1);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+685+i*2,"top_sim reg_data_o", true,(i+1), 63,0);}}
        tracep->declQuad(c+1,"top_sim IF_pc", false,-1, 63,0);
        tracep->declBit(c+3,"top_sim IF_valid", false,-1);
        tracep->declQuad(c+4,"top_sim ifu_pc_next", false,-1, 63,0);
        tracep->declBus(c+6,"top_sim ifu_instr", false,-1, 31,0);
        tracep->declBit(c+7,"top_sim ifu_prdt_taken", false,-1);
        tracep->declBit(c+8,"top_sim ifu_pc_misalign", false,-1);
        tracep->declBit(c+747,"top_sim ifu_bus_err", false,-1);
        tracep->declQuad(c+9,"top_sim ID_pc", false,-1, 63,0);
        tracep->declBus(c+11,"top_sim ID_instr", false,-1, 31,0);
        tracep->declBit(c+12,"top_sim ID_prdt_taken", false,-1);
        tracep->declBit(c+13,"top_sim ID_pc_misalign", false,-1);
        tracep->declBit(c+14,"top_sim ID_if_bus_err", false,-1);
        tracep->declBit(c+15,"top_sim ID_ready", false,-1);
        tracep->declBit(c+16,"top_sim ID_valid", false,-1);
        tracep->declBus(c+17,"top_sim id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+18,"top_sim id_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+19,"top_sim rf_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim rf_rs2_rdata", false,-1, 63,0);
        tracep->declBus(c+23,"top_sim id_csr_idx", false,-1, 11,0);
        tracep->declBit(c+24,"top_sim id_csr_wen", false,-1);
        tracep->declBus(c+25,"top_sim id_optype_info", false,-1, 11,0);
        tracep->declBus(c+26,"top_sim id_alu_info", false,-1, 9,0);
        tracep->declBus(c+27,"top_sim id_branch_info", false,-1, 5,0);
        tracep->declBus(c+28,"top_sim id_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+29,"top_sim id_csr_info", false,-1, 5,0);
        tracep->declQuad(c+19,"top_sim id_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim id_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim id_imm", false,-1, 63,0);
        tracep->declBit(c+32,"top_sim id_rd_wen", false,-1);
        tracep->declBus(c+33,"top_sim id_rd_idx", false,-1, 4,0);
        tracep->declBit(c+34,"top_sim id_load_use", false,-1);
        tracep->declBit(c+747,"top_sim id_ilegl_instr", false,-1);
        tracep->declBit(c+35,"top_sim id_ecall", false,-1);
        tracep->declBit(c+36,"top_sim id_ebreak", false,-1);
        tracep->declBit(c+37,"top_sim id_mret", false,-1);
        tracep->declQuad(c+38,"top_sim EX_pc", false,-1, 63,0);
        tracep->declBit(c+40,"top_sim EX_prdt_taken", false,-1);
        tracep->declBus(c+41,"top_sim EX_optype_info", false,-1, 11,0);
        tracep->declBus(c+42,"top_sim EX_alu_info", false,-1, 9,0);
        tracep->declBus(c+43,"top_sim EX_branch_info", false,-1, 5,0);
        tracep->declBus(c+44,"top_sim EX_ld_st_info", false,-1, 10,0);
        tracep->declBus(c+45,"top_sim EX_csr_info", false,-1, 5,0);
        tracep->declBit(c+46,"top_sim EX_op_load", false,-1);
        tracep->declBus(c+47,"top_sim EX_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+48,"top_sim EX_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+49,"top_sim EX_rs1_rdata", false,-1, 63,0);
        tracep->declQuad(c+51,"top_sim EX_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+53,"top_sim EX_imm", false,-1, 63,0);
        tracep->declBit(c+55,"top_sim EX_csr_wen", false,-1);
        tracep->declBus(c+56,"top_sim EX_csr_idx", false,-1, 11,0);
        tracep->declBit(c+57,"top_sim EX_rd_wen", false,-1);
        tracep->declBus(c+58,"top_sim EX_rd_idx", false,-1, 4,0);
        tracep->declBit(c+59,"top_sim EX_pc_misalign", false,-1);
        tracep->declBit(c+60,"top_sim EX_if_bus_err", false,-1);
        tracep->declBit(c+61,"top_sim EX_ilegl_instr", false,-1);
        tracep->declBit(c+62,"top_sim EX_ecall", false,-1);
        tracep->declBit(c+63,"top_sim EX_ebreak", false,-1);
        tracep->declBit(c+64,"top_sim EX_mret", false,-1);
        tracep->declBit(c+65,"top_sim EX_valid", false,-1);
        tracep->declBit(c+748,"top_sim EX_ready", false,-1);
        tracep->declQuad(c+66,"top_sim csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+68,"top_sim ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+749,"top_sim ex_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim ex_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+70,"top_sim ex_jump", false,-1);
        tracep->declQuad(c+71,"top_sim ex_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+73,"top_sim MEM_pc", false,-1, 63,0);
        tracep->declBus(c+75,"top_sim MEM_optype_info", false,-1, 11,0);
        tracep->declBus(c+76,"top_sim MEM_ld_st_info", false,-1, 10,0);
        tracep->declBit(c+77,"top_sim MEM_csr_wen", false,-1);
        tracep->declBus(c+78,"top_sim MEM_csr_idx", false,-1, 11,0);
        tracep->declBit(c+79,"top_sim MEM_rd_wen", false,-1);
        tracep->declBus(c+80,"top_sim MEM_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+81,"top_sim MEM_fwd_data", false,-1, 63,0);
        tracep->declQuad(c+83,"top_sim MEM_rs2_rdata", false,-1, 63,0);
        tracep->declQuad(c+85,"top_sim MEM_alu_res", false,-1, 63,0);
        tracep->declQuad(c+87,"top_sim MEM_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+89,"top_sim MEM_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+91,"top_sim MEM_pc_misalign", false,-1);
        tracep->declBit(c+92,"top_sim MEM_if_bus_err", false,-1);
        tracep->declBit(c+93,"top_sim MEM_ilegl_instr", false,-1);
        tracep->declBit(c+94,"top_sim MEM_ecall", false,-1);
        tracep->declBit(c+95,"top_sim MEM_ebreak", false,-1);
        tracep->declBit(c+96,"top_sim MEM_mret", false,-1);
        tracep->declBit(c+748,"top_sim MEM_ready", false,-1);
        tracep->declBit(c+97,"top_sim MEM_valid", false,-1);
        tracep->declQuad(c+98,"top_sim mem_rdata", false,-1, 63,0);
        tracep->declBit(c+100,"top_sim mem_ld_misalign", false,-1);
        tracep->declBit(c+747,"top_sim mem_ld_bus_err", false,-1);
        tracep->declBit(c+101,"top_sim mem_st_misalign", false,-1);
        tracep->declBit(c+747,"top_sim mem_st_bus_err", false,-1);
        tracep->declBit(c+748,"top_sim WB_ready", false,-1);
        tracep->declQuad(c+102,"top_sim WB_pc", false,-1, 63,0);
        tracep->declBus(c+104,"top_sim WB_optype_info", false,-1, 11,0);
        tracep->declBit(c+105,"top_sim WB_csr_wen", false,-1);
        tracep->declBus(c+106,"top_sim WB_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+107,"top_sim WB_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+109,"top_sim WB_rd_wen", false,-1);
        tracep->declBus(c+110,"top_sim WB_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+111,"top_sim WB_alu_res", false,-1, 63,0);
        tracep->declQuad(c+113,"top_sim WB_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"top_sim WB_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"top_sim WB_pc_misalign", false,-1);
        tracep->declBit(c+118,"top_sim WB_if_bus_err", false,-1);
        tracep->declBit(c+119,"top_sim WB_ilegl_instr", false,-1);
        tracep->declBit(c+120,"top_sim WB_ecall", false,-1);
        tracep->declBit(c+121,"top_sim WB_ebreak", false,-1);
        tracep->declBit(c+122,"top_sim WB_mret", false,-1);
        tracep->declBit(c+123,"top_sim WB_ld_misalign", false,-1);
        tracep->declBit(c+124,"top_sim WB_ld_bus_err", false,-1);
        tracep->declBit(c+125,"top_sim WB_st_misalign", false,-1);
        tracep->declBit(c+126,"top_sim WB_st_bus_err", false,-1);
        tracep->declBit(c+127,"top_sim wb_rd_wen", false,-1);
        tracep->declBus(c+110,"top_sim wb_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+128,"top_sim wb_rd_wdata", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim wb_trap", false,-1);
        tracep->declQuad(c+131,"top_sim wb_trap_handle_pc", false,-1, 63,0);
        tracep->declBit(c+133,"top_sim if_flush", false,-1);
        tracep->declBit(c+134,"top_sim id_flush", false,-1);
        tracep->declBit(c+130,"top_sim ex_flush", false,-1);
        tracep->declBit(c+130,"top_sim mem_flush", false,-1);
        tracep->declQuad(c+135,"top_sim flush_pc", false,-1, 63,0);
        tracep->declQuad(c+137,"top_sim ram_addr", false,-1, 63,0);
        tracep->declBit(c+139,"top_sim ram_wen", false,-1);
        tracep->declBus(c+140,"top_sim ram_byte_en", false,-1, 7,0);
        tracep->declQuad(c+141,"top_sim ram_wdata", false,-1, 63,0);
        tracep->declBit(c+143,"top_sim ram_ren", false,-1);
        tracep->declQuad(c+144,"top_sim ram_rdata", false,-1, 63,0);
        tracep->declBit(c+146,"top_sim wb_csr_wen", false,-1);
        tracep->declBus(c+106,"top_sim wb_csr_idx", false,-1, 11,0);
        tracep->declQuad(c+107,"top_sim wb_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim mcause_wen", false,-1);
        tracep->declQuad(c+147,"top_sim mcause_wdata", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim mtval_wen", false,-1);
        tracep->declQuad(c+149,"top_sim mtval_wdata", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim mepc_wen", false,-1);
        tracep->declQuad(c+151,"top_sim mepc_wdata", false,-1, 63,0);
        tracep->declBit(c+153,"top_sim mstatus_ie_set", false,-1);
        tracep->declBit(c+122,"top_sim mstatus_ie_clear", false,-1);
        tracep->declQuad(c+154,"top_sim mtvec_rdata", false,-1, 63,0);
        tracep->declQuad(c+156,"top_sim mepc_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top_sim u_controller ex_jump_i", false,-1);
        tracep->declQuad(c+71,"top_sim u_controller ex_jump_pc_i", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_controller wb_trap_i", false,-1);
        tracep->declQuad(c+131,"top_sim u_controller wb_trap_handle_pc_i", false,-1, 63,0);
        tracep->declBit(c+133,"top_sim u_controller if_flush_o", false,-1);
        tracep->declBit(c+134,"top_sim u_controller id_flush_o", false,-1);
        tracep->declBit(c+130,"top_sim u_controller ex_flush_o", false,-1);
        tracep->declBit(c+130,"top_sim u_controller mem_flush_o", false,-1);
        tracep->declQuad(c+135,"top_sim u_controller flush_pc_o", false,-1, 63,0);
        tracep->declBit(c+683,"top_sim u_IF clk", false,-1);
        tracep->declBit(c+684,"top_sim u_IF rst", false,-1);
        tracep->declBit(c+133,"top_sim u_IF if_flush_i", false,-1);
        tracep->declQuad(c+4,"top_sim u_IF ifu_pc_next_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_IF IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+15,"top_sim u_IF ID_ready_i", false,-1);
        tracep->declBit(c+3,"top_sim u_IF IF_valid_o", false,-1);
        tracep->declBit(c+748,"top_sim u_IF run", false,-1);
        tracep->declQuad(c+1,"top_sim u_IF pc_r", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu IF_pc_i", false,-1, 63,0);
        tracep->declBit(c+133,"top_sim u_ifu if_flush_i", false,-1);
        tracep->declQuad(c+135,"top_sim u_ifu flush_pc_i", false,-1, 63,0);
        tracep->declQuad(c+4,"top_sim u_ifu ifu_pc_next_o", false,-1, 63,0);
        tracep->declBus(c+6,"top_sim u_ifu ifu_instr_o", false,-1, 31,0);
        tracep->declBit(c+7,"top_sim u_ifu ifu_prdt_taken_o", false,-1);
        tracep->declBit(c+8,"top_sim u_ifu ifu_pc_misalign_o", false,-1);
        tracep->declBit(c+747,"top_sim u_ifu ifu_bus_err_o", false,-1);
        tracep->declBit(c+158,"top_sim u_ifu jal", false,-1);
        tracep->declBit(c+159,"top_sim u_ifu jalr", false,-1);
        tracep->declBit(c+160,"top_sim u_ifu branch", false,-1);
        tracep->declQuad(c+161,"top_sim u_ifu imm", false,-1, 63,0);
        tracep->declBit(c+163,"top_sim u_ifu jump", false,-1);
        tracep->declQuad(c+164,"top_sim u_ifu jump_pc_op1", false,-1, 63,0);
        tracep->declQuad(c+161,"top_sim u_ifu jump_pc_op2", false,-1, 63,0);
        tracep->declQuad(c+166,"top_sim u_ifu pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+168,"top_sim u_ifu pc_add_op2", false,-1, 63,0);
        tracep->declQuad(c+170,"top_sim u_ifu pc_add4", false,-1, 63,0);
        tracep->declQuad(c+1,"top_sim u_ifu u_if_bus pc_i", false,-1, 63,0);
        tracep->declBus(c+6,"top_sim u_ifu u_if_bus if_bus_instr_o", false,-1, 31,0);
        tracep->declBit(c+8,"top_sim u_ifu u_if_bus if_bus_pc_misalign_o", false,-1);
        tracep->declBit(c+747,"top_sim u_ifu u_if_bus if_bus_bus_err_o", false,-1);
        tracep->declBus(c+172,"top_sim u_ifu u_if_bus pc", false,-1, 9,0);
        tracep->declBus(c+6,"top_sim u_ifu u_if_mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+158,"top_sim u_ifu u_if_mini_dec_u mini_dec_jal_o", false,-1);
        tracep->declBit(c+159,"top_sim u_ifu u_if_mini_dec_u mini_dec_jalr_o", false,-1);
        tracep->declBit(c+160,"top_sim u_ifu u_if_mini_dec_u mini_dec_branch_o", false,-1);
        tracep->declBus(c+173,"top_sim u_ifu u_if_mini_dec_u mini_dec_rs1_idx_o", false,-1, 4,0);
        tracep->declQuad(c+161,"top_sim u_ifu u_if_mini_dec_u mini_dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+174,"top_sim u_ifu u_if_mini_dec_u optype_info", false,-1, 11,0);
        tracep->declBit(c+751,"top_sim u_ifu u_if_mini_dec_u idu id_flush_i", false,-1);
        tracep->declBus(c+6,"top_sim u_ifu u_if_mini_dec_u idu instr_i", false,-1, 31,0);
        tracep->declBus(c+173,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+175,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+752,"top_sim u_ifu u_if_mini_dec_u idu rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+754,"top_sim u_ifu u_if_mini_dec_u idu rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+756,"top_sim u_ifu u_if_mini_dec_u idu EX_op_load_i", false,-1);
        tracep->declBus(c+757,"top_sim u_ifu u_if_mini_dec_u idu EX_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+174,"top_sim u_ifu u_if_mini_dec_u idu id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+176,"top_sim u_ifu u_if_mini_dec_u idu id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+177,"top_sim u_ifu u_if_mini_dec_u idu id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+178,"top_sim u_ifu u_if_mini_dec_u idu id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+179,"top_sim u_ifu u_if_mini_dec_u idu id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+752,"top_sim u_ifu u_if_mini_dec_u idu id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+754,"top_sim u_ifu u_if_mini_dec_u idu id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+161,"top_sim u_ifu u_if_mini_dec_u idu id_imm_o", false,-1, 63,0);
        tracep->declBit(c+180,"top_sim u_ifu u_if_mini_dec_u idu id_csr_wen_o", false,-1);
        tracep->declBus(c+181,"top_sim u_ifu u_if_mini_dec_u idu id_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+182,"top_sim u_ifu u_if_mini_dec_u idu id_rd_wen_o", false,-1);
        tracep->declBus(c+183,"top_sim u_ifu u_if_mini_dec_u idu id_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+184,"top_sim u_ifu u_if_mini_dec_u idu id_load_use_o", false,-1);
        tracep->declBit(c+747,"top_sim u_ifu u_if_mini_dec_u idu id_ilegl_instr_o", false,-1);
        tracep->declBit(c+185,"top_sim u_ifu u_if_mini_dec_u idu id_ecall_o", false,-1);
        tracep->declBit(c+186,"top_sim u_ifu u_if_mini_dec_u idu id_ebreak_o", false,-1);
        tracep->declBit(c+187,"top_sim u_ifu u_if_mini_dec_u idu id_mret_o", false,-1);
        tracep->declBus(c+188,"top_sim u_ifu u_if_mini_dec_u idu opcode", false,-1, 6,0);
        tracep->declBus(c+183,"top_sim u_ifu u_if_mini_dec_u idu rd", false,-1, 4,0);
        tracep->declBus(c+189,"top_sim u_ifu u_if_mini_dec_u idu fun3", false,-1, 2,0);
        tracep->declBus(c+173,"top_sim u_ifu u_if_mini_dec_u idu rs1", false,-1, 4,0);
        tracep->declBus(c+175,"top_sim u_ifu u_if_mini_dec_u idu rs2", false,-1, 4,0);
        tracep->declBus(c+190,"top_sim u_ifu u_if_mini_dec_u idu fun7", false,-1, 6,0);
        tracep->declBit(c+191,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm", false,-1);
        tracep->declBit(c+192,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_imm_w", false,-1);
        tracep->declBit(c+193,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu", false,-1);
        tracep->declBit(c+194,"top_sim u_ifu u_if_mini_dec_u idu rv64_alu_w", false,-1);
        tracep->declBit(c+195,"top_sim u_ifu u_if_mini_dec_u idu rv64_branch", false,-1);
        tracep->declBit(c+196,"top_sim u_ifu u_if_mini_dec_u idu rv64_jal", false,-1);
        tracep->declBit(c+197,"top_sim u_ifu u_if_mini_dec_u idu rv64_jalr", false,-1);
        tracep->declBit(c+198,"top_sim u_ifu u_if_mini_dec_u idu rv64_load", false,-1);
        tracep->declBit(c+199,"top_sim u_ifu u_if_mini_dec_u idu rv64_store", false,-1);
        tracep->declBit(c+200,"top_sim u_ifu u_if_mini_dec_u idu rv64_lui", false,-1);
        tracep->declBit(c+201,"top_sim u_ifu u_if_mini_dec_u idu rv64_auipc", false,-1);
        tracep->declBit(c+202,"top_sim u_ifu u_if_mini_dec_u idu rv64_system", false,-1);
        tracep->declBit(c+203,"top_sim u_ifu u_if_mini_dec_u idu rv64_addi", false,-1);
        tracep->declBit(c+204,"top_sim u_ifu u_if_mini_dec_u idu rv64_addiw", false,-1);
        tracep->declBit(c+205,"top_sim u_ifu u_if_mini_dec_u idu rv64_slli", false,-1);
        tracep->declBit(c+206,"top_sim u_ifu u_if_mini_dec_u idu rv64_slliw", false,-1);
        tracep->declBit(c+207,"top_sim u_ifu u_if_mini_dec_u idu rv64_slti", false,-1);
        tracep->declBit(c+208,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltui", false,-1);
        tracep->declBit(c+209,"top_sim u_ifu u_if_mini_dec_u idu rv64_xori", false,-1);
        tracep->declBit(c+210,"top_sim u_ifu u_if_mini_dec_u idu rv64_srli", false,-1);
        tracep->declBit(c+211,"top_sim u_ifu u_if_mini_dec_u idu rv64_srliw", false,-1);
        tracep->declBit(c+212,"top_sim u_ifu u_if_mini_dec_u idu rv64_srai", false,-1);
        tracep->declBit(c+213,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraiw", false,-1);
        tracep->declBit(c+214,"top_sim u_ifu u_if_mini_dec_u idu rv64_ori", false,-1);
        tracep->declBit(c+215,"top_sim u_ifu u_if_mini_dec_u idu rv64_andi", false,-1);
        tracep->declBit(c+216,"top_sim u_ifu u_if_mini_dec_u idu rv64_add", false,-1);
        tracep->declBit(c+217,"top_sim u_ifu u_if_mini_dec_u idu rv64_addw", false,-1);
        tracep->declBit(c+218,"top_sim u_ifu u_if_mini_dec_u idu rv64_sub", false,-1);
        tracep->declBit(c+219,"top_sim u_ifu u_if_mini_dec_u idu rv64_subw", false,-1);
        tracep->declBit(c+220,"top_sim u_ifu u_if_mini_dec_u idu rv64_sll", false,-1);
        tracep->declBit(c+221,"top_sim u_ifu u_if_mini_dec_u idu rv64_sllw", false,-1);
        tracep->declBit(c+222,"top_sim u_ifu u_if_mini_dec_u idu rv64_slt", false,-1);
        tracep->declBit(c+223,"top_sim u_ifu u_if_mini_dec_u idu rv64_sltu", false,-1);
        tracep->declBit(c+224,"top_sim u_ifu u_if_mini_dec_u idu rv64_xor", false,-1);
        tracep->declBit(c+225,"top_sim u_ifu u_if_mini_dec_u idu rv64_srl", false,-1);
        tracep->declBit(c+226,"top_sim u_ifu u_if_mini_dec_u idu rv64_srlw", false,-1);
        tracep->declBit(c+227,"top_sim u_ifu u_if_mini_dec_u idu rv64_sra", false,-1);
        tracep->declBit(c+228,"top_sim u_ifu u_if_mini_dec_u idu rv64_sraw", false,-1);
        tracep->declBit(c+229,"top_sim u_ifu u_if_mini_dec_u idu rv64_or", false,-1);
        tracep->declBit(c+230,"top_sim u_ifu u_if_mini_dec_u idu rv64_and", false,-1);
        tracep->declBit(c+231,"top_sim u_ifu u_if_mini_dec_u idu rv64_beq", false,-1);
        tracep->declBit(c+232,"top_sim u_ifu u_if_mini_dec_u idu rv64_bne", false,-1);
        tracep->declBit(c+233,"top_sim u_ifu u_if_mini_dec_u idu rv64_blt", false,-1);
        tracep->declBit(c+234,"top_sim u_ifu u_if_mini_dec_u idu rv64_bge", false,-1);
        tracep->declBit(c+235,"top_sim u_ifu u_if_mini_dec_u idu rv64_bltu", false,-1);
        tracep->declBit(c+236,"top_sim u_ifu u_if_mini_dec_u idu rv64_bgeu", false,-1);
        tracep->declBit(c+237,"top_sim u_ifu u_if_mini_dec_u idu rv64_lb", false,-1);
        tracep->declBit(c+238,"top_sim u_ifu u_if_mini_dec_u idu rv64_lh", false,-1);
        tracep->declBit(c+239,"top_sim u_ifu u_if_mini_dec_u idu rv64_lw", false,-1);
        tracep->declBit(c+240,"top_sim u_ifu u_if_mini_dec_u idu rv64_ld", false,-1);
        tracep->declBit(c+241,"top_sim u_ifu u_if_mini_dec_u idu rv64_lbu", false,-1);
        tracep->declBit(c+242,"top_sim u_ifu u_if_mini_dec_u idu rv64_lhu", false,-1);
        tracep->declBit(c+243,"top_sim u_ifu u_if_mini_dec_u idu rv64_lwu", false,-1);
        tracep->declBit(c+244,"top_sim u_ifu u_if_mini_dec_u idu rv64_sb", false,-1);
        tracep->declBit(c+245,"top_sim u_ifu u_if_mini_dec_u idu rv64_sh", false,-1);
        tracep->declBit(c+246,"top_sim u_ifu u_if_mini_dec_u idu rv64_sw", false,-1);
        tracep->declBit(c+247,"top_sim u_ifu u_if_mini_dec_u idu rv64_sd", false,-1);
        tracep->declBit(c+185,"top_sim u_ifu u_if_mini_dec_u idu rv64_ecall", false,-1);
        tracep->declBit(c+186,"top_sim u_ifu u_if_mini_dec_u idu rv64_ebreak", false,-1);
        tracep->declBit(c+187,"top_sim u_ifu u_if_mini_dec_u idu rv64_mret", false,-1);
        tracep->declBit(c+248,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrw", false,-1);
        tracep->declBit(c+249,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrs", false,-1);
        tracep->declBit(c+250,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrc", false,-1);
        tracep->declBit(c+251,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrwi", false,-1);
        tracep->declBit(c+252,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrsi", false,-1);
        tracep->declBit(c+253,"top_sim u_ifu u_if_mini_dec_u idu rv64_csrrci", false,-1);
        tracep->declBit(c+254,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs1", false,-1);
        tracep->declBit(c+255,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rs2", false,-1);
        tracep->declBit(c+182,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_rd", false,-1);
        tracep->declBit(c+180,"top_sim u_ifu u_if_mini_dec_u idu rv64_need_csr", false,-1);
        tracep->declBit(c+254,"top_sim u_ifu u_if_mini_dec_u idu need_rs1", false,-1);
        tracep->declBit(c+255,"top_sim u_ifu u_if_mini_dec_u idu need_rs2", false,-1);
        tracep->declQuad(c+256,"top_sim u_ifu u_if_mini_dec_u idu rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+258,"top_sim u_ifu u_if_mini_dec_u idu rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+260,"top_sim u_ifu u_if_mini_dec_u idu rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+262,"top_sim u_ifu u_if_mini_dec_u idu rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+264,"top_sim u_ifu u_if_mini_dec_u idu rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+266,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_i", false,-1);
        tracep->declBit(c+199,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_s", false,-1);
        tracep->declBit(c+195,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_b", false,-1);
        tracep->declBit(c+196,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_j", false,-1);
        tracep->declBit(c+267,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+161,"top_sim u_ifu u_if_mini_dec_u idu rv64_imm", false,-1, 63,0);
        tracep->declBit(c+683,"top_sim u_ID clk", false,-1);
        tracep->declBit(c+684,"top_sim u_ID rst", false,-1);
        tracep->declBit(c+134,"top_sim u_ID id_flush_i", false,-1);
        tracep->declQuad(c+1,"top_sim u_ID IF_pc_i", false,-1, 63,0);
        tracep->declBus(c+6,"top_sim u_ID ifu_instr_i", false,-1, 31,0);
        tracep->declBit(c+7,"top_sim u_ID ifu_prdt_taken_i", false,-1);
        tracep->declBit(c+8,"top_sim u_ID ifu_pc_misalign_i", false,-1);
        tracep->declBit(c+747,"top_sim u_ID ifu_bus_err_i", false,-1);
        tracep->declBit(c+34,"top_sim u_ID id_load_use_i", false,-1);
        tracep->declQuad(c+9,"top_sim u_ID ID_pc_o", false,-1, 63,0);
        tracep->declBus(c+11,"top_sim u_ID ID_instr_o", false,-1, 31,0);
        tracep->declBit(c+12,"top_sim u_ID ID_prdt_taken_o", false,-1);
        tracep->declBit(c+13,"top_sim u_ID ID_pc_misalign_o", false,-1);
        tracep->declBit(c+14,"top_sim u_ID ID_if_bus_err_o", false,-1);
        tracep->declBit(c+3,"top_sim u_ID IF_valid_i", false,-1);
        tracep->declBit(c+748,"top_sim u_ID EX_ready_i", false,-1);
        tracep->declBit(c+16,"top_sim u_ID ID_valid_o", false,-1);
        tracep->declBit(c+15,"top_sim u_ID ID_ready_o", false,-1);
        tracep->declBit(c+15,"top_sim u_ID run", false,-1);
        tracep->declBit(c+268,"top_sim u_ID ID_data_valid", false,-1);
        tracep->declQuad(c+269,"top_sim u_ID ID_pc_r", false,-1, 63,0);
        tracep->declBus(c+271,"top_sim u_ID ID_instr_r", false,-1, 31,0);
        tracep->declBit(c+272,"top_sim u_ID ID_prdt_taken_r", false,-1);
        tracep->declBit(c+273,"top_sim u_ID ID_pc_misalign_r", false,-1);
        tracep->declBit(c+274,"top_sim u_ID ID_if_bus_err_r", false,-1);
        tracep->declBit(c+134,"top_sim u_id id_flush_i", false,-1);
        tracep->declBus(c+11,"top_sim u_id instr_i", false,-1, 31,0);
        tracep->declBus(c+17,"top_sim u_id id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+18,"top_sim u_id id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+19,"top_sim u_id rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim u_id rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+46,"top_sim u_id EX_op_load_i", false,-1);
        tracep->declBus(c+58,"top_sim u_id EX_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+25,"top_sim u_id id_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+26,"top_sim u_id id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+27,"top_sim u_id id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+28,"top_sim u_id id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+29,"top_sim u_id id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+19,"top_sim u_id id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim u_id id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim u_id id_imm_o", false,-1, 63,0);
        tracep->declBit(c+24,"top_sim u_id id_csr_wen_o", false,-1);
        tracep->declBus(c+23,"top_sim u_id id_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+32,"top_sim u_id id_rd_wen_o", false,-1);
        tracep->declBus(c+33,"top_sim u_id id_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+34,"top_sim u_id id_load_use_o", false,-1);
        tracep->declBit(c+747,"top_sim u_id id_ilegl_instr_o", false,-1);
        tracep->declBit(c+35,"top_sim u_id id_ecall_o", false,-1);
        tracep->declBit(c+36,"top_sim u_id id_ebreak_o", false,-1);
        tracep->declBit(c+37,"top_sim u_id id_mret_o", false,-1);
        tracep->declBus(c+275,"top_sim u_id opcode", false,-1, 6,0);
        tracep->declBus(c+33,"top_sim u_id rd", false,-1, 4,0);
        tracep->declBus(c+276,"top_sim u_id fun3", false,-1, 2,0);
        tracep->declBus(c+17,"top_sim u_id rs1", false,-1, 4,0);
        tracep->declBus(c+18,"top_sim u_id rs2", false,-1, 4,0);
        tracep->declBus(c+277,"top_sim u_id fun7", false,-1, 6,0);
        tracep->declBit(c+278,"top_sim u_id rv64_alu_imm", false,-1);
        tracep->declBit(c+279,"top_sim u_id rv64_alu_imm_w", false,-1);
        tracep->declBit(c+280,"top_sim u_id rv64_alu", false,-1);
        tracep->declBit(c+281,"top_sim u_id rv64_alu_w", false,-1);
        tracep->declBit(c+282,"top_sim u_id rv64_branch", false,-1);
        tracep->declBit(c+283,"top_sim u_id rv64_jal", false,-1);
        tracep->declBit(c+284,"top_sim u_id rv64_jalr", false,-1);
        tracep->declBit(c+285,"top_sim u_id rv64_load", false,-1);
        tracep->declBit(c+286,"top_sim u_id rv64_store", false,-1);
        tracep->declBit(c+287,"top_sim u_id rv64_lui", false,-1);
        tracep->declBit(c+288,"top_sim u_id rv64_auipc", false,-1);
        tracep->declBit(c+289,"top_sim u_id rv64_system", false,-1);
        tracep->declBit(c+290,"top_sim u_id rv64_addi", false,-1);
        tracep->declBit(c+291,"top_sim u_id rv64_addiw", false,-1);
        tracep->declBit(c+292,"top_sim u_id rv64_slli", false,-1);
        tracep->declBit(c+293,"top_sim u_id rv64_slliw", false,-1);
        tracep->declBit(c+294,"top_sim u_id rv64_slti", false,-1);
        tracep->declBit(c+295,"top_sim u_id rv64_sltui", false,-1);
        tracep->declBit(c+296,"top_sim u_id rv64_xori", false,-1);
        tracep->declBit(c+297,"top_sim u_id rv64_srli", false,-1);
        tracep->declBit(c+298,"top_sim u_id rv64_srliw", false,-1);
        tracep->declBit(c+299,"top_sim u_id rv64_srai", false,-1);
        tracep->declBit(c+300,"top_sim u_id rv64_sraiw", false,-1);
        tracep->declBit(c+301,"top_sim u_id rv64_ori", false,-1);
        tracep->declBit(c+302,"top_sim u_id rv64_andi", false,-1);
        tracep->declBit(c+303,"top_sim u_id rv64_add", false,-1);
        tracep->declBit(c+304,"top_sim u_id rv64_addw", false,-1);
        tracep->declBit(c+305,"top_sim u_id rv64_sub", false,-1);
        tracep->declBit(c+306,"top_sim u_id rv64_subw", false,-1);
        tracep->declBit(c+307,"top_sim u_id rv64_sll", false,-1);
        tracep->declBit(c+308,"top_sim u_id rv64_sllw", false,-1);
        tracep->declBit(c+309,"top_sim u_id rv64_slt", false,-1);
        tracep->declBit(c+310,"top_sim u_id rv64_sltu", false,-1);
        tracep->declBit(c+311,"top_sim u_id rv64_xor", false,-1);
        tracep->declBit(c+312,"top_sim u_id rv64_srl", false,-1);
        tracep->declBit(c+313,"top_sim u_id rv64_srlw", false,-1);
        tracep->declBit(c+314,"top_sim u_id rv64_sra", false,-1);
        tracep->declBit(c+315,"top_sim u_id rv64_sraw", false,-1);
        tracep->declBit(c+316,"top_sim u_id rv64_or", false,-1);
        tracep->declBit(c+317,"top_sim u_id rv64_and", false,-1);
        tracep->declBit(c+318,"top_sim u_id rv64_beq", false,-1);
        tracep->declBit(c+319,"top_sim u_id rv64_bne", false,-1);
        tracep->declBit(c+320,"top_sim u_id rv64_blt", false,-1);
        tracep->declBit(c+321,"top_sim u_id rv64_bge", false,-1);
        tracep->declBit(c+322,"top_sim u_id rv64_bltu", false,-1);
        tracep->declBit(c+323,"top_sim u_id rv64_bgeu", false,-1);
        tracep->declBit(c+324,"top_sim u_id rv64_lb", false,-1);
        tracep->declBit(c+325,"top_sim u_id rv64_lh", false,-1);
        tracep->declBit(c+326,"top_sim u_id rv64_lw", false,-1);
        tracep->declBit(c+327,"top_sim u_id rv64_ld", false,-1);
        tracep->declBit(c+328,"top_sim u_id rv64_lbu", false,-1);
        tracep->declBit(c+329,"top_sim u_id rv64_lhu", false,-1);
        tracep->declBit(c+330,"top_sim u_id rv64_lwu", false,-1);
        tracep->declBit(c+331,"top_sim u_id rv64_sb", false,-1);
        tracep->declBit(c+332,"top_sim u_id rv64_sh", false,-1);
        tracep->declBit(c+333,"top_sim u_id rv64_sw", false,-1);
        tracep->declBit(c+334,"top_sim u_id rv64_sd", false,-1);
        tracep->declBit(c+35,"top_sim u_id rv64_ecall", false,-1);
        tracep->declBit(c+36,"top_sim u_id rv64_ebreak", false,-1);
        tracep->declBit(c+37,"top_sim u_id rv64_mret", false,-1);
        tracep->declBit(c+335,"top_sim u_id rv64_csrrw", false,-1);
        tracep->declBit(c+336,"top_sim u_id rv64_csrrs", false,-1);
        tracep->declBit(c+337,"top_sim u_id rv64_csrrc", false,-1);
        tracep->declBit(c+338,"top_sim u_id rv64_csrrwi", false,-1);
        tracep->declBit(c+339,"top_sim u_id rv64_csrrsi", false,-1);
        tracep->declBit(c+340,"top_sim u_id rv64_csrrci", false,-1);
        tracep->declBit(c+341,"top_sim u_id rv64_need_rs1", false,-1);
        tracep->declBit(c+342,"top_sim u_id rv64_need_rs2", false,-1);
        tracep->declBit(c+32,"top_sim u_id rv64_need_rd", false,-1);
        tracep->declBit(c+24,"top_sim u_id rv64_need_csr", false,-1);
        tracep->declBit(c+341,"top_sim u_id need_rs1", false,-1);
        tracep->declBit(c+342,"top_sim u_id need_rs2", false,-1);
        tracep->declQuad(c+343,"top_sim u_id rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+345,"top_sim u_id rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+347,"top_sim u_id rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+349,"top_sim u_id rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+351,"top_sim u_id rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+353,"top_sim u_id rv64_imm_sel_i", false,-1);
        tracep->declBit(c+286,"top_sim u_id rv64_imm_sel_s", false,-1);
        tracep->declBit(c+282,"top_sim u_id rv64_imm_sel_b", false,-1);
        tracep->declBit(c+283,"top_sim u_id rv64_imm_sel_j", false,-1);
        tracep->declBit(c+354,"top_sim u_id rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+30,"top_sim u_id rv64_imm", false,-1, 63,0);
        tracep->declBit(c+683,"top_sim u_regfile clk", false,-1);
        tracep->declBit(c+127,"top_sim u_regfile rd_wen_i", false,-1);
        tracep->declBus(c+110,"top_sim u_regfile rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+128,"top_sim u_regfile rd_wdata_i", false,-1, 63,0);
        tracep->declBus(c+17,"top_sim u_regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+18,"top_sim u_regfile rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+19,"top_sim u_regfile rf_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim u_regfile rf_rs2_rdata_o", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+355+i*2,"top_sim u_regfile reg_data_o", true,(i+1), 63,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+417+i*2,"top_sim u_regfile reg_data", true,(i+1), 63,0);}}
        tracep->declBit(c+683,"top_sim u_EX clk", false,-1);
        tracep->declBit(c+684,"top_sim u_EX rst", false,-1);
        tracep->declBit(c+130,"top_sim u_EX ex_flush_i", false,-1);
        tracep->declQuad(c+9,"top_sim u_EX ID_pc_i", false,-1, 63,0);
        tracep->declBit(c+12,"top_sim u_EX ID_prdt_taken_i", false,-1);
        tracep->declBus(c+25,"top_sim u_EX id_optype_info_i", false,-1, 11,0);
        tracep->declBus(c+26,"top_sim u_EX id_alu_info_i", false,-1, 9,0);
        tracep->declBus(c+27,"top_sim u_EX id_branch_info_i", false,-1, 5,0);
        tracep->declBus(c+28,"top_sim u_EX id_ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+29,"top_sim u_EX id_csr_info_i", false,-1, 5,0);
        tracep->declBus(c+17,"top_sim u_EX id_rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+18,"top_sim u_EX id_rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+19,"top_sim u_EX id_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top_sim u_EX id_rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+30,"top_sim u_EX id_imm_i", false,-1, 63,0);
        tracep->declBit(c+79,"top_sim u_EX MEM_rd_wen_i", false,-1);
        tracep->declBus(c+80,"top_sim u_EX MEM_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+81,"top_sim u_EX MEM_fwd_data_i", false,-1, 63,0);
        tracep->declBit(c+109,"top_sim u_EX WB_rd_wen_i", false,-1);
        tracep->declBus(c+110,"top_sim u_EX WB_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+128,"top_sim u_EX wb_rd_wdata_i", false,-1, 63,0);
        tracep->declBit(c+24,"top_sim u_EX id_csr_wen_i", false,-1);
        tracep->declBus(c+23,"top_sim u_EX id_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+32,"top_sim u_EX id_rd_wen_i", false,-1);
        tracep->declBus(c+33,"top_sim u_EX id_rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+13,"top_sim u_EX ID_pc_misalign_i", false,-1);
        tracep->declBit(c+14,"top_sim u_EX ID_if_bus_err_i", false,-1);
        tracep->declBit(c+747,"top_sim u_EX id_ilegl_instr_i", false,-1);
        tracep->declBit(c+35,"top_sim u_EX id_ecall_i", false,-1);
        tracep->declBit(c+36,"top_sim u_EX id_ebreak_i", false,-1);
        tracep->declBit(c+37,"top_sim u_EX id_mret_i", false,-1);
        tracep->declQuad(c+38,"top_sim u_EX EX_pc_o", false,-1, 63,0);
        tracep->declBit(c+40,"top_sim u_EX EX_prdt_taken_o", false,-1);
        tracep->declBus(c+41,"top_sim u_EX EX_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+42,"top_sim u_EX EX_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+43,"top_sim u_EX EX_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+44,"top_sim u_EX EX_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+45,"top_sim u_EX EX_csr_info_o", false,-1, 5,0);
        tracep->declBit(c+46,"top_sim u_EX EX_op_load_o", false,-1);
        tracep->declBus(c+47,"top_sim u_EX EX_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+48,"top_sim u_EX EX_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+49,"top_sim u_EX EX_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+51,"top_sim u_EX EX_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+53,"top_sim u_EX EX_imm_o", false,-1, 63,0);
        tracep->declBit(c+55,"top_sim u_EX EX_csr_wen_o", false,-1);
        tracep->declBus(c+56,"top_sim u_EX EX_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+57,"top_sim u_EX EX_rd_wen_o", false,-1);
        tracep->declBus(c+58,"top_sim u_EX EX_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+59,"top_sim u_EX EX_pc_misalign_o", false,-1);
        tracep->declBit(c+60,"top_sim u_EX EX_if_bus_err_o", false,-1);
        tracep->declBit(c+61,"top_sim u_EX EX_ilegl_instr_o", false,-1);
        tracep->declBit(c+62,"top_sim u_EX EX_ecall_o", false,-1);
        tracep->declBit(c+63,"top_sim u_EX EX_ebreak_o", false,-1);
        tracep->declBit(c+64,"top_sim u_EX EX_mret_o", false,-1);
        tracep->declBit(c+16,"top_sim u_EX ID_valid_i", false,-1);
        tracep->declBit(c+748,"top_sim u_EX MEM_ready_i", false,-1);
        tracep->declBit(c+65,"top_sim u_EX EX_valid_o", false,-1);
        tracep->declBit(c+748,"top_sim u_EX EX_ready_o", false,-1);
        tracep->declBit(c+479,"top_sim u_EX EX_data_valid", false,-1);
        tracep->declBit(c+748,"top_sim u_EX run", false,-1);
        tracep->declBit(c+480,"top_sim u_EX rs1_MEM_fwd", false,-1);
        tracep->declBit(c+481,"top_sim u_EX rs2_MEM_fwd", false,-1);
        tracep->declBit(c+482,"top_sim u_EX rs1_WB_fwd", false,-1);
        tracep->declBit(c+483,"top_sim u_EX rs2_WB_fwd", false,-1);
        tracep->declQuad(c+484,"top_sim u_EX EX_pc_r", false,-1, 63,0);
        tracep->declBit(c+758,"top_sim u_EX EX_prdt_taken_r", false,-1);
        tracep->declBus(c+486,"top_sim u_EX EX_optype_info_r", false,-1, 11,0);
        tracep->declBus(c+487,"top_sim u_EX EX_alu_info_r", false,-1, 9,0);
        tracep->declBus(c+488,"top_sim u_EX EX_branch_info_r", false,-1, 5,0);
        tracep->declBus(c+489,"top_sim u_EX EX_ld_st_info_r", false,-1, 10,0);
        tracep->declBus(c+490,"top_sim u_EX EX_csr_info_r", false,-1, 5,0);
        tracep->declBus(c+491,"top_sim u_EX EX_rs1_idx_r", false,-1, 4,0);
        tracep->declBus(c+492,"top_sim u_EX EX_rs2_idx_r", false,-1, 4,0);
        tracep->declQuad(c+493,"top_sim u_EX EX_rs1_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+495,"top_sim u_EX EX_rs2_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+497,"top_sim u_EX EX_imm_r", false,-1, 63,0);
        tracep->declBit(c+499,"top_sim u_EX EX_csr_wen_r", false,-1);
        tracep->declBus(c+500,"top_sim u_EX EX_csr_idx_r", false,-1, 11,0);
        tracep->declBit(c+501,"top_sim u_EX EX_rd_wen_r", false,-1);
        tracep->declBus(c+502,"top_sim u_EX EX_rd_idx_r", false,-1, 4,0);
        tracep->declBit(c+503,"top_sim u_EX EX_pc_misalign_r", false,-1);
        tracep->declBit(c+504,"top_sim u_EX EX_if_bus_err_r", false,-1);
        tracep->declBit(c+505,"top_sim u_EX EX_ilegl_instr_r", false,-1);
        tracep->declBit(c+506,"top_sim u_EX EX_ecall_r", false,-1);
        tracep->declBit(c+507,"top_sim u_EX EX_ebreak_r", false,-1);
        tracep->declBit(c+508,"top_sim u_EX EX_mret_r", false,-1);
        tracep->declBus(c+41,"top_sim u_ex optype_info_i", false,-1, 11,0);
        tracep->declBus(c+42,"top_sim u_ex alu_info_i", false,-1, 9,0);
        tracep->declBus(c+43,"top_sim u_ex branch_info_i", false,-1, 5,0);
        tracep->declBus(c+44,"top_sim u_ex ld_st_info_i", false,-1, 10,0);
        tracep->declBus(c+45,"top_sim u_ex csr_info_i", false,-1, 5,0);
        tracep->declBus(c+47,"top_sim u_ex EX_rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+48,"top_sim u_ex EX_rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+38,"top_sim u_ex pc_i", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim u_ex rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+51,"top_sim u_ex rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top_sim u_ex imm_i", false,-1, 63,0);
        tracep->declQuad(c+68,"top_sim u_ex ex_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim u_ex ex_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+70,"top_sim u_ex ex_jump_o", false,-1);
        tracep->declQuad(c+71,"top_sim u_ex ex_jump_pc_o", false,-1, 63,0);
        tracep->declBit(c+509,"top_sim u_ex branch_jump", false,-1);
        tracep->declBit(c+510,"top_sim u_ex op_jal", false,-1);
        tracep->declBit(c+511,"top_sim u_ex op_jalr", false,-1);
        tracep->declQuad(c+512,"top_sim u_ex jump_pc_src1", false,-1, 63,0);
        tracep->declQuad(c+53,"top_sim u_ex jump_pc_src2", false,-1, 63,0);
        tracep->declBus(c+41,"top_sim u_ex alu_u optype_info_i", false,-1, 11,0);
        tracep->declBus(c+42,"top_sim u_ex alu_u alu_info_i", false,-1, 9,0);
        tracep->declBus(c+43,"top_sim u_ex alu_u branch_info_i", false,-1, 5,0);
        tracep->declQuad(c+38,"top_sim u_ex alu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim u_ex alu_u rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+51,"top_sim u_ex alu_u rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top_sim u_ex alu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+68,"top_sim u_ex alu_u alu_res_o", false,-1, 63,0);
        tracep->declBit(c+509,"top_sim u_ex alu_u alu_branch_jump_o", false,-1);
        tracep->declBit(c+514,"top_sim u_ex alu_u op_alu_imm", false,-1);
        tracep->declBit(c+515,"top_sim u_ex alu_u op_alu_imm_w", false,-1);
        tracep->declBit(c+516,"top_sim u_ex alu_u op_alu", false,-1);
        tracep->declBit(c+517,"top_sim u_ex alu_u op_alu_w", false,-1);
        tracep->declBit(c+518,"top_sim u_ex alu_u op_branch", false,-1);
        tracep->declBit(c+510,"top_sim u_ex alu_u op_jal", false,-1);
        tracep->declBit(c+511,"top_sim u_ex alu_u op_jalr", false,-1);
        tracep->declBit(c+519,"top_sim u_ex alu_u op_load", false,-1);
        tracep->declBit(c+520,"top_sim u_ex alu_u op_store", false,-1);
        tracep->declBit(c+521,"top_sim u_ex alu_u op_lui", false,-1);
        tracep->declBit(c+522,"top_sim u_ex alu_u op_auipc", false,-1);
        tracep->declBit(c+523,"top_sim u_ex alu_u alu_add", false,-1);
        tracep->declBit(c+524,"top_sim u_ex alu_u alu_sub", false,-1);
        tracep->declBit(c+525,"top_sim u_ex alu_u alu_sll", false,-1);
        tracep->declBit(c+526,"top_sim u_ex alu_u alu_slt", false,-1);
        tracep->declBit(c+527,"top_sim u_ex alu_u alu_sltu", false,-1);
        tracep->declBit(c+528,"top_sim u_ex alu_u alu_xor", false,-1);
        tracep->declBit(c+529,"top_sim u_ex alu_u alu_srl", false,-1);
        tracep->declBit(c+530,"top_sim u_ex alu_u alu_sra", false,-1);
        tracep->declBit(c+531,"top_sim u_ex alu_u alu_or", false,-1);
        tracep->declBit(c+532,"top_sim u_ex alu_u alu_and", false,-1);
        tracep->declBit(c+533,"top_sim u_ex alu_u branch_beq", false,-1);
        tracep->declBit(c+534,"top_sim u_ex alu_u branch_bne", false,-1);
        tracep->declBit(c+535,"top_sim u_ex alu_u branch_blt", false,-1);
        tracep->declBit(c+536,"top_sim u_ex alu_u branch_bge", false,-1);
        tracep->declBit(c+537,"top_sim u_ex alu_u branch_bltu", false,-1);
        tracep->declBit(c+538,"top_sim u_ex alu_u branch_bgeu", false,-1);
        tracep->declBit(c+539,"top_sim u_ex alu_u res_sel_add", false,-1);
        tracep->declBit(c+540,"top_sim u_ex alu_u res_sel_sub", false,-1);
        tracep->declBit(c+541,"top_sim u_ex alu_u res_sel_add_sub", false,-1);
        tracep->declBit(c+525,"top_sim u_ex alu_u res_sel_sll", false,-1);
        tracep->declBit(c+526,"top_sim u_ex alu_u res_sel_slt", false,-1);
        tracep->declBit(c+527,"top_sim u_ex alu_u res_sel_sltu", false,-1);
        tracep->declBit(c+528,"top_sim u_ex alu_u res_sel_xor", false,-1);
        tracep->declBit(c+529,"top_sim u_ex alu_u res_sel_srl", false,-1);
        tracep->declBit(c+530,"top_sim u_ex alu_u res_sel_sra", false,-1);
        tracep->declBit(c+531,"top_sim u_ex alu_u res_sel_or", false,-1);
        tracep->declBit(c+532,"top_sim u_ex alu_u res_sel_and", false,-1);
        tracep->declQuad(c+542,"top_sim u_ex alu_u alu_op1", false,-1, 63,0);
        tracep->declQuad(c+544,"top_sim u_ex alu_u alu_op2", false,-1, 63,0);
        tracep->declQuad(c+546,"top_sim u_ex alu_u alu_add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+548,"top_sim u_ex alu_u alu_sll_res", false,-1, 63,0);
        tracep->declQuad(c+550,"top_sim u_ex alu_u alu_slt_res", false,-1, 63,0);
        tracep->declQuad(c+552,"top_sim u_ex alu_u alu_sltu_res", false,-1, 63,0);
        tracep->declQuad(c+554,"top_sim u_ex alu_u alu_xor_res", false,-1, 63,0);
        tracep->declQuad(c+556,"top_sim u_ex alu_u alu_srl_res", false,-1, 63,0);
        tracep->declQuad(c+558,"top_sim u_ex alu_u alu_sra_res", false,-1, 63,0);
        tracep->declQuad(c+560,"top_sim u_ex alu_u alu_or_res", false,-1, 63,0);
        tracep->declQuad(c+562,"top_sim u_ex alu_u alu_and_res", false,-1, 63,0);
        tracep->declQuad(c+542,"top_sim u_ex alu_u adder_op1", false,-1, 63,0);
        tracep->declQuad(c+564,"top_sim u_ex alu_u adder_op2", false,-1, 63,0);
        tracep->declBit(c+540,"top_sim u_ex alu_u adder_cin", false,-1);
        tracep->declBit(c+566,"top_sim u_ex alu_u adder_cout", false,-1);
        tracep->declBus(c+567,"top_sim u_ex alu_u shift_op2", false,-1, 5,0);
        tracep->declQuad(c+568,"top_sim u_ex alu_u alu_res", false,-1, 63,0);
        tracep->declQuad(c+570,"top_sim u_ex alu_u alu_res_w", false,-1, 63,0);
        tracep->declBit(c+572,"top_sim u_ex alu_u ne", false,-1);
        tracep->declBit(c+573,"top_sim u_ex alu_u eq", false,-1);
        tracep->declBit(c+574,"top_sim u_ex alu_u lt", false,-1);
        tracep->declBit(c+575,"top_sim u_ex alu_u ltu", false,-1);
        tracep->declBit(c+576,"top_sim u_ex alu_u ge", false,-1);
        tracep->declBit(c+566,"top_sim u_ex alu_u geu", false,-1);
        tracep->declBit(c+683,"top_sim u_MEM clk", false,-1);
        tracep->declBit(c+684,"top_sim u_MEM rst", false,-1);
        tracep->declBit(c+130,"top_sim u_MEM mem_flush_i", false,-1);
        tracep->declQuad(c+38,"top_sim u_MEM EX_pc_i", false,-1, 63,0);
        tracep->declBus(c+41,"top_sim u_MEM EX_optype_info_i", false,-1, 11,0);
        tracep->declBus(c+44,"top_sim u_MEM EX_ld_st_info_i", false,-1, 10,0);
        tracep->declBit(c+55,"top_sim u_MEM EX_csr_wen_i", false,-1);
        tracep->declBus(c+56,"top_sim u_MEM EX_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+57,"top_sim u_MEM EX_rd_wen_i", false,-1);
        tracep->declBus(c+58,"top_sim u_MEM EX_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+51,"top_sim u_MEM EX_rs2_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+68,"top_sim u_MEM ex_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+66,"top_sim u_MEM ex_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+49,"top_sim u_MEM ex_csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+59,"top_sim u_MEM EX_pc_misalign_i", false,-1);
        tracep->declBit(c+60,"top_sim u_MEM EX_if_bus_err_i", false,-1);
        tracep->declBit(c+61,"top_sim u_MEM EX_ilegl_instr_i", false,-1);
        tracep->declBit(c+62,"top_sim u_MEM EX_ecall_i", false,-1);
        tracep->declBit(c+63,"top_sim u_MEM EX_ebreak_i", false,-1);
        tracep->declBit(c+64,"top_sim u_MEM EX_mret_i", false,-1);
        tracep->declQuad(c+73,"top_sim u_MEM MEM_pc_o", false,-1, 63,0);
        tracep->declBus(c+75,"top_sim u_MEM MEM_optype_info_o", false,-1, 11,0);
        tracep->declBus(c+76,"top_sim u_MEM MEM_ld_st_info_o", false,-1, 10,0);
        tracep->declBit(c+77,"top_sim u_MEM MEM_csr_wen_o", false,-1);
        tracep->declBus(c+78,"top_sim u_MEM MEM_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+79,"top_sim u_MEM MEM_rd_wen_o", false,-1);
        tracep->declBus(c+80,"top_sim u_MEM MEM_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+81,"top_sim u_MEM MEM_fwd_data_o", false,-1, 63,0);
        tracep->declQuad(c+83,"top_sim u_MEM MEM_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+85,"top_sim u_MEM MEM_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+87,"top_sim u_MEM MEM_csr_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+89,"top_sim u_MEM MEM_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+91,"top_sim u_MEM MEM_pc_misalign_o", false,-1);
        tracep->declBit(c+92,"top_sim u_MEM MEM_if_bus_err_o", false,-1);
        tracep->declBit(c+93,"top_sim u_MEM MEM_ilegl_instr_o", false,-1);
        tracep->declBit(c+94,"top_sim u_MEM MEM_ecall_o", false,-1);
        tracep->declBit(c+95,"top_sim u_MEM MEM_ebreak_o", false,-1);
        tracep->declBit(c+96,"top_sim u_MEM MEM_mret_o", false,-1);
        tracep->declBit(c+65,"top_sim u_MEM EX_valid_i", false,-1);
        tracep->declBit(c+748,"top_sim u_MEM WB_ready_i", false,-1);
        tracep->declBit(c+97,"top_sim u_MEM MEM_valid_o", false,-1);
        tracep->declBit(c+748,"top_sim u_MEM MEM_ready_o", false,-1);
        tracep->declBit(c+577,"top_sim u_MEM MEM_data_valid", false,-1);
        tracep->declBit(c+748,"top_sim u_MEM run", false,-1);
        tracep->declQuad(c+578,"top_sim u_MEM MEM_pc_r", false,-1, 63,0);
        tracep->declBus(c+580,"top_sim u_MEM MEM_optype_info_r", false,-1, 11,0);
        tracep->declBus(c+581,"top_sim u_MEM MEM_ld_st_info_r", false,-1, 10,0);
        tracep->declBit(c+582,"top_sim u_MEM MEM_csr_wen_r", false,-1);
        tracep->declBus(c+583,"top_sim u_MEM MEM_csr_idx_r", false,-1, 11,0);
        tracep->declBit(c+584,"top_sim u_MEM MEM_rd_wen_r", false,-1);
        tracep->declBus(c+585,"top_sim u_MEM MEM_rd_idx_r", false,-1, 4,0);
        tracep->declQuad(c+586,"top_sim u_MEM MEM_rs2_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+588,"top_sim u_MEM MEM_alu_res_r", false,-1, 63,0);
        tracep->declQuad(c+590,"top_sim u_MEM MEM_csr_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+592,"top_sim u_MEM MEM_csr_wdata_r", false,-1, 63,0);
        tracep->declBit(c+594,"top_sim u_MEM MEM_pc_misalign_r", false,-1);
        tracep->declBit(c+595,"top_sim u_MEM MEM_if_bus_err_r", false,-1);
        tracep->declBit(c+596,"top_sim u_MEM MEM_ilegl_instr_r", false,-1);
        tracep->declBit(c+597,"top_sim u_MEM MEM_ecall_r", false,-1);
        tracep->declBit(c+598,"top_sim u_MEM MEM_ebreak_r", false,-1);
        tracep->declBit(c+599,"top_sim u_MEM MEM_mret_r", false,-1);
        tracep->declBit(c+600,"top_sim u_MEM op_system", false,-1);
        tracep->declBit(c+130,"top_sim u_mem mem_flush_i", false,-1);
        tracep->declBus(c+76,"top_sim u_mem ld_st_info_i", false,-1, 10,0);
        tracep->declQuad(c+85,"top_sim u_mem mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+83,"top_sim u_mem mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top_sim u_mem mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+91,"top_sim u_mem MEM_pc_misalign_i", false,-1);
        tracep->declBit(c+92,"top_sim u_mem MEM_if_bus_err_i", false,-1);
        tracep->declBit(c+93,"top_sim u_mem MEM_ilegl_instr_i", false,-1);
        tracep->declBit(c+94,"top_sim u_mem MEM_ecall_i", false,-1);
        tracep->declBit(c+95,"top_sim u_mem MEM_ebreak_i", false,-1);
        tracep->declBit(c+96,"top_sim u_mem MEM_mret_i", false,-1);
        tracep->declBit(c+100,"top_sim u_mem mem_ld_misalign_o", false,-1);
        tracep->declBit(c+747,"top_sim u_mem mem_ld_bus_err_o", false,-1);
        tracep->declBit(c+101,"top_sim u_mem mem_st_misalign_o", false,-1);
        tracep->declBit(c+747,"top_sim u_mem mem_st_bus_err_o", false,-1);
        tracep->declQuad(c+137,"top_sim u_mem ram_addr_o", false,-1, 63,0);
        tracep->declBit(c+139,"top_sim u_mem ram_wen_o", false,-1);
        tracep->declBus(c+140,"top_sim u_mem ram_byte_en_o", false,-1, 7,0);
        tracep->declQuad(c+141,"top_sim u_mem ram_wdata_o", false,-1, 63,0);
        tracep->declBit(c+143,"top_sim u_mem ram_ren_o", false,-1);
        tracep->declQuad(c+144,"top_sim u_mem ram_rdata_i", false,-1, 63,0);
        tracep->declBit(c+601,"top_sim u_mem lb", false,-1);
        tracep->declBit(c+602,"top_sim u_mem lh", false,-1);
        tracep->declBit(c+603,"top_sim u_mem lw", false,-1);
        tracep->declBit(c+604,"top_sim u_mem ld", false,-1);
        tracep->declBit(c+605,"top_sim u_mem lbu", false,-1);
        tracep->declBit(c+606,"top_sim u_mem lhu", false,-1);
        tracep->declBit(c+607,"top_sim u_mem lwu", false,-1);
        tracep->declBit(c+608,"top_sim u_mem sb", false,-1);
        tracep->declBit(c+609,"top_sim u_mem sh", false,-1);
        tracep->declBit(c+610,"top_sim u_mem sw", false,-1);
        tracep->declBit(c+611,"top_sim u_mem sd", false,-1);
        tracep->declBit(c+612,"top_sim u_mem mem_excp", false,-1);
        tracep->declBus(c+613,"top_sim u_mem lb_rdata", false,-1, 7,0);
        tracep->declBus(c+614,"top_sim u_mem lh_rdata", false,-1, 15,0);
        tracep->declBus(c+615,"top_sim u_mem lw_rdata", false,-1, 31,0);
        tracep->declQuad(c+616,"top_sim u_mem mem_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+618,"top_sim u_mem mem_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+620,"top_sim u_mem mem_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+144,"top_sim u_mem mem_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+622,"top_sim u_mem mem_rdata_lbu", false,-1, 63,0);
        tracep->declQuad(c+624,"top_sim u_mem mem_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+626,"top_sim u_mem mem_rdata_lwu", false,-1, 63,0);
        tracep->declBus(c+628,"top_sim u_mem sb_byte_en", false,-1, 7,0);
        tracep->declBus(c+629,"top_sim u_mem sh_byte_en", false,-1, 7,0);
        tracep->declBus(c+630,"top_sim u_mem sw_byte_en", false,-1, 7,0);
        tracep->declBus(c+759,"top_sim u_ram SIZE", false,-1, 31,0);
        tracep->declBit(c+683,"top_sim u_ram clk", false,-1);
        tracep->declQuad(c+137,"top_sim u_ram addr_i", false,-1, 63,0);
        tracep->declBit(c+139,"top_sim u_ram wen_i", false,-1);
        tracep->declBus(c+140,"top_sim u_ram byte_en_i", false,-1, 7,0);
        tracep->declQuad(c+141,"top_sim u_ram wdata_i", false,-1, 63,0);
        tracep->declBit(c+143,"top_sim u_ram ren_i", false,-1);
        tracep->declQuad(c+144,"top_sim u_ram rdata_o", false,-1, 63,0);
        tracep->declBus(c+631,"top_sim u_ram addr", false,-1, 9,0);
        tracep->declQuad(c+632,"top_sim u_ram rdata", false,-1, 63,0);
        tracep->declQuad(c+634,"top_sim u_ram mask", false,-1, 63,0);
        tracep->declQuad(c+636,"top_sim u_ram wdata", false,-1, 63,0);
        tracep->declBit(c+683,"top_sim u_WB clk", false,-1);
        tracep->declBit(c+684,"top_sim u_WB rst", false,-1);
        tracep->declQuad(c+73,"top_sim u_WB MEM_pc_i", false,-1, 63,0);
        tracep->declBus(c+75,"top_sim u_WB MEM_optype_info_i", false,-1, 11,0);
        tracep->declBit(c+77,"top_sim u_WB MEM_csr_wen_i", false,-1);
        tracep->declBus(c+78,"top_sim u_WB MEM_csr_idx_i", false,-1, 11,0);
        tracep->declBit(c+79,"top_sim u_WB MEM_rd_wen_i", false,-1);
        tracep->declBus(c+80,"top_sim u_WB MEM_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+85,"top_sim u_WB MEM_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+87,"top_sim u_WB MEM_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+89,"top_sim u_WB MEM_csr_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top_sim u_WB mem_rdata_i", false,-1, 63,0);
        tracep->declBit(c+91,"top_sim u_WB MEM_pc_misalign_i", false,-1);
        tracep->declBit(c+92,"top_sim u_WB MEM_if_bus_err_i", false,-1);
        tracep->declBit(c+93,"top_sim u_WB MEM_ilegl_instr_i", false,-1);
        tracep->declBit(c+94,"top_sim u_WB MEM_ecall_i", false,-1);
        tracep->declBit(c+95,"top_sim u_WB MEM_ebreak_i", false,-1);
        tracep->declBit(c+96,"top_sim u_WB MEM_mret_i", false,-1);
        tracep->declBit(c+100,"top_sim u_WB mem_ld_misalign_i", false,-1);
        tracep->declBit(c+747,"top_sim u_WB mem_ld_bus_err_i", false,-1);
        tracep->declBit(c+101,"top_sim u_WB mem_st_misalign_i", false,-1);
        tracep->declBit(c+747,"top_sim u_WB mem_st_bus_err_i", false,-1);
        tracep->declQuad(c+102,"top_sim u_WB WB_pc_o", false,-1, 63,0);
        tracep->declBus(c+104,"top_sim u_WB WB_optype_info_o", false,-1, 11,0);
        tracep->declBit(c+105,"top_sim u_WB WB_csr_wen_o", false,-1);
        tracep->declBus(c+106,"top_sim u_WB WB_csr_idx_o", false,-1, 11,0);
        tracep->declBit(c+109,"top_sim u_WB WB_rd_wen_o", false,-1);
        tracep->declBus(c+110,"top_sim u_WB WB_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+111,"top_sim u_WB WB_alu_res_o", false,-1, 63,0);
        tracep->declQuad(c+113,"top_sim u_WB WB_csr_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+107,"top_sim u_WB WB_csr_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+115,"top_sim u_WB WB_mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+117,"top_sim u_WB WB_pc_misalign_o", false,-1);
        tracep->declBit(c+118,"top_sim u_WB WB_if_bus_err_o", false,-1);
        tracep->declBit(c+119,"top_sim u_WB WB_ilegl_instr_o", false,-1);
        tracep->declBit(c+120,"top_sim u_WB WB_ecall_o", false,-1);
        tracep->declBit(c+121,"top_sim u_WB WB_ebreak_o", false,-1);
        tracep->declBit(c+122,"top_sim u_WB WB_mret_o", false,-1);
        tracep->declBit(c+123,"top_sim u_WB WB_ld_misalign_o", false,-1);
        tracep->declBit(c+124,"top_sim u_WB WB_ld_bus_err_o", false,-1);
        tracep->declBit(c+125,"top_sim u_WB WB_st_misalign_o", false,-1);
        tracep->declBit(c+126,"top_sim u_WB WB_st_bus_err_o", false,-1);
        tracep->declBit(c+97,"top_sim u_WB MEM_valid_i", false,-1);
        tracep->declBit(c+748,"top_sim u_WB WB_ready_o", false,-1);
        tracep->declBit(c+638,"top_sim u_WB WB_data_valid", false,-1);
        tracep->declBit(c+748,"top_sim u_WB run", false,-1);
        tracep->declQuad(c+639,"top_sim u_WB WB_pc_r", false,-1, 63,0);
        tracep->declBus(c+641,"top_sim u_WB WB_optype_info_r", false,-1, 11,0);
        tracep->declBit(c+642,"top_sim u_WB WB_csr_wen_r", false,-1);
        tracep->declBus(c+643,"top_sim u_WB WB_csr_idx_r", false,-1, 11,0);
        tracep->declBit(c+644,"top_sim u_WB WB_rd_wen_r", false,-1);
        tracep->declBus(c+645,"top_sim u_WB WB_rd_idx_r", false,-1, 4,0);
        tracep->declQuad(c+646,"top_sim u_WB WB_alu_res_r", false,-1, 63,0);
        tracep->declQuad(c+648,"top_sim u_WB WB_csr_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+650,"top_sim u_WB WB_csr_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+652,"top_sim u_WB WB_mem_rdata_r", false,-1, 63,0);
        tracep->declBit(c+654,"top_sim u_WB WB_pc_misalign_r", false,-1);
        tracep->declBit(c+655,"top_sim u_WB WB_if_bus_err_r", false,-1);
        tracep->declBit(c+656,"top_sim u_WB WB_ilegl_instr_r", false,-1);
        tracep->declBit(c+657,"top_sim u_WB WB_ecall_r", false,-1);
        tracep->declBit(c+658,"top_sim u_WB WB_ebreak_r", false,-1);
        tracep->declBit(c+659,"top_sim u_WB WB_mret_r", false,-1);
        tracep->declBit(c+660,"top_sim u_WB WB_ld_misalign_r", false,-1);
        tracep->declBit(c+661,"top_sim u_WB WB_ld_bus_err_r", false,-1);
        tracep->declBit(c+662,"top_sim u_WB WB_st_misalign_r", false,-1);
        tracep->declBit(c+663,"top_sim u_WB WB_st_bus_err_r", false,-1);
        tracep->declQuad(c+102,"top_sim u_wb WB_pc_i", false,-1, 63,0);
        tracep->declBus(c+760,"top_sim u_wb WB_instr_i", false,-1, 31,0);
        tracep->declBus(c+104,"top_sim u_wb WB_optype_info_i", false,-1, 11,0);
        tracep->declBit(c+105,"top_sim u_wb WB_csr_wen_i", false,-1);
        tracep->declBus(c+106,"top_sim u_wb WB_csr_idx_i", false,-1, 11,0);
        tracep->declQuad(c+107,"top_sim u_wb WB_csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+109,"top_sim u_wb WB_rd_wen_i", false,-1);
        tracep->declBus(c+110,"top_sim u_wb WB_rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+111,"top_sim u_wb WB_alu_res_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top_sim u_wb WB_csr_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+115,"top_sim u_wb WB_mem_rdata_i", false,-1, 63,0);
        tracep->declBit(c+127,"top_sim u_wb wb_rd_wen_o", false,-1);
        tracep->declBus(c+110,"top_sim u_wb wb_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+128,"top_sim u_wb wb_rd_wdata_o", false,-1, 63,0);
        tracep->declBit(c+117,"top_sim u_wb WB_pc_misalign_i", false,-1);
        tracep->declBit(c+118,"top_sim u_wb WB_if_bus_err_i", false,-1);
        tracep->declBit(c+119,"top_sim u_wb WB_ilegl_instr_i", false,-1);
        tracep->declBit(c+120,"top_sim u_wb WB_ecall_i", false,-1);
        tracep->declBit(c+121,"top_sim u_wb WB_ebreak_i", false,-1);
        tracep->declBit(c+122,"top_sim u_wb WB_mret_i", false,-1);
        tracep->declBit(c+123,"top_sim u_wb WB_ld_misalign_i", false,-1);
        tracep->declBit(c+124,"top_sim u_wb WB_ld_bus_err_i", false,-1);
        tracep->declBit(c+125,"top_sim u_wb WB_st_misalign_i", false,-1);
        tracep->declBit(c+126,"top_sim u_wb WB_st_bus_err_i", false,-1);
        tracep->declQuad(c+154,"top_sim u_wb mtvec_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+156,"top_sim u_wb mepc_rdata_i", false,-1, 63,0);
        tracep->declBit(c+146,"top_sim u_wb wb_csr_wen_o", false,-1);
        tracep->declBus(c+106,"top_sim u_wb wb_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+107,"top_sim u_wb wb_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_wb mcause_wen_o", false,-1);
        tracep->declQuad(c+147,"top_sim u_wb mcause_wdata_o", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_wb mtval_wen_o", false,-1);
        tracep->declQuad(c+149,"top_sim u_wb mtval_wdata_o", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_wb mepc_wen_o", false,-1);
        tracep->declQuad(c+151,"top_sim u_wb mepc_wdata_o", false,-1, 63,0);
        tracep->declBit(c+153,"top_sim u_wb mstatus_ie_set_o", false,-1);
        tracep->declBit(c+122,"top_sim u_wb mstatus_ie_clear_o", false,-1);
        tracep->declBit(c+130,"top_sim u_wb wb_trap_o", false,-1);
        tracep->declQuad(c+131,"top_sim u_wb wb_trap_handle_pc_o", false,-1, 63,0);
        tracep->declBit(c+664,"top_sim u_wb op_load", false,-1);
        tracep->declBit(c+665,"top_sim u_wb op_system", false,-1);
        tracep->declBit(c+130,"top_sim u_wb wb_excp", false,-1);
        tracep->declBit(c+761,"top_sim u_wb wb_int", false,-1);
        tracep->declBus(c+666,"top_sim u_wb excp_code", false,-1, 3,0);
        tracep->declBus(c+762,"top_sim u_wb int_code", false,-1, 3,0);
        tracep->declBit(c+683,"top_sim u_csr clk", false,-1);
        tracep->declBus(c+56,"top_sim u_csr EX_csr_idx_i", false,-1, 11,0);
        tracep->declQuad(c+66,"top_sim u_csr csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+146,"top_sim u_csr wb_csr_wen_i", false,-1);
        tracep->declBus(c+106,"top_sim u_csr wb_csr_idx_i", false,-1, 11,0);
        tracep->declQuad(c+107,"top_sim u_csr wb_csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+763,"top_sim u_csr int_soft_i", false,-1);
        tracep->declBit(c+764,"top_sim u_csr int_timer_i", false,-1);
        tracep->declBit(c+765,"top_sim u_csr int_exter_i", false,-1);
        tracep->declBit(c+130,"top_sim u_csr mcause_wen_i", false,-1);
        tracep->declQuad(c+147,"top_sim u_csr mcause_wdata_i", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_csr mtval_wen_i", false,-1);
        tracep->declQuad(c+149,"top_sim u_csr mtval_wdata_i", false,-1, 63,0);
        tracep->declBit(c+130,"top_sim u_csr mepc_wen_i", false,-1);
        tracep->declQuad(c+151,"top_sim u_csr mepc_wdata_i", false,-1, 63,0);
        tracep->declBit(c+153,"top_sim u_csr mstatus_ie_set_i", false,-1);
        tracep->declBit(c+122,"top_sim u_csr mstatus_ie_clear_i", false,-1);
        tracep->declBit(c+667,"top_sim u_csr mstatus_ie_o", false,-1);
        tracep->declBit(c+766,"top_sim u_csr mie_soft_o", false,-1);
        tracep->declBit(c+767,"top_sim u_csr mie_timer_o", false,-1);
        tracep->declBit(c+768,"top_sim u_csr mie_exter_o", false,-1);
        tracep->declBit(c+769,"top_sim u_csr mip_soft_o", false,-1);
        tracep->declBit(c+770,"top_sim u_csr mip_timer_o", false,-1);
        tracep->declBit(c+771,"top_sim u_csr mip_exter_o", false,-1);
        tracep->declQuad(c+154,"top_sim u_csr mtvec_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+156,"top_sim u_csr mepc_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+668,"top_sim u_csr mstatus", false,-1, 63,0);
        tracep->declBit(c+667,"top_sim u_csr mstatus_mie", false,-1);
        tracep->declBit(c+670,"top_sim u_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+154,"top_sim u_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+671,"top_sim u_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+673,"top_sim u_csr mtval", false,-1, 63,0);
        tracep->declQuad(c+156,"top_sim u_csr mepc", false,-1, 63,0);
        tracep->declBit(c+675,"top_sim u_csr read_mstatus", false,-1);
        tracep->declBit(c+676,"top_sim u_csr read_mie", false,-1);
        tracep->declBit(c+677,"top_sim u_csr read_mtvec", false,-1);
        tracep->declBit(c+678,"top_sim u_csr read_mscratch", false,-1);
        tracep->declBit(c+679,"top_sim u_csr read_mepc", false,-1);
        tracep->declBit(c+680,"top_sim u_csr read_mcause", false,-1);
        tracep->declBit(c+681,"top_sim u_csr read_mtval", false,-1);
        tracep->declBit(c+682,"top_sim u_csr read_mip", false,-1);
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
        tracep->fullBit(oldp+3,((1U & (~ (IData)(vlSelf->top_sim__DOT__if_flush)))));
        tracep->fullQData(oldp+4,(((IData)(vlSelf->top_sim__DOT__if_flush)
                                    ? ((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                        ? ((IData)(vlSelf->top_sim__DOT__WB_mret)
                                            ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                            : vlSelf->top_sim__DOT__u_csr__DOT__mtvec)
                                        : (((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                             ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                             : vlSelf->top_sim__DOT__EX_pc) 
                                           + vlSelf->top_sim__DOT__EX_imm))
                                    : (4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),64);
        tracep->fullIData(oldp+6,(vlSelf->top_sim__DOT__ifu_instr),32);
        tracep->fullBit(oldp+7,(vlSelf->top_sim__DOT__ifu_prdt_taken));
        tracep->fullBit(oldp+8,((0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))));
        tracep->fullQData(oldp+9,((vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r 
                                   & (- (QData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))))),64);
        tracep->fullIData(oldp+11,(vlSelf->top_sim__DOT__ID_instr),32);
        tracep->fullBit(oldp+12,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+13,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+14,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
        tracep->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))));
        tracep->fullBit(oldp+16,(vlSelf->top_sim__DOT__ID_valid));
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+18,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+19,(((0U == (0x1fU & 
                                            (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0xfU)))
                                     ? 0ULL : (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
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
        tracep->fullQData(oldp+21,(((0U == (0x1fU & 
                                            (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x14U)))
                                     ? 0ULL : (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
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
        tracep->fullSData(oldp+23,((vlSelf->top_sim__DOT__ID_instr 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+24,(((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+25,((((0x13U == (0x7fU 
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
        tracep->fullSData(oldp+26,((((((((IData)((0x33U 
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
        tracep->fullCData(oldp+27,((((IData)((0x63U 
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
        tracep->fullSData(oldp+28,((((IData)((3U == 
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
        tracep->fullCData(oldp+29,((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                     << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))))),6);
        tracep->fullQData(oldp+30,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
        tracep->fullBit(oldp+32,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                    & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullCData(oldp+33,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+34,(vlSelf->top_sim__DOT__id_load_use));
        tracep->fullBit(oldp+35,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
        tracep->fullBit(oldp+36,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
        tracep->fullBit(oldp+37,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
        tracep->fullQData(oldp+38,(vlSelf->top_sim__DOT__EX_pc),64);
        tracep->fullBit(oldp+40,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullSData(oldp+41,(vlSelf->top_sim__DOT__EX_optype_info),12);
        tracep->fullSData(oldp+42,(vlSelf->top_sim__DOT__EX_alu_info),10);
        tracep->fullCData(oldp+43,(vlSelf->top_sim__DOT__EX_branch_info),6);
        tracep->fullSData(oldp+44,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),11);
        tracep->fullCData(oldp+45,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),6);
        tracep->fullBit(oldp+46,((((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                   >> 4U) & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullCData(oldp+47,(vlSelf->top_sim__DOT__EX_rs1_idx),5);
        tracep->fullCData(oldp+48,(vlSelf->top_sim__DOT__EX_rs2_idx),5);
        tracep->fullQData(oldp+49,(vlSelf->top_sim__DOT__EX_rs1_rdata),64);
        tracep->fullQData(oldp+51,(vlSelf->top_sim__DOT__EX_rs2_rdata),64);
        tracep->fullQData(oldp+53,(vlSelf->top_sim__DOT__EX_imm),64);
        tracep->fullBit(oldp+55,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullSData(oldp+56,(vlSelf->top_sim__DOT__EX_csr_idx),12);
        tracep->fullBit(oldp+57,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullCData(oldp+58,(vlSelf->top_sim__DOT__EX_rd_idx),5);
        tracep->fullBit(oldp+59,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+60,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+61,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+62,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+63,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+64,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
        tracep->fullBit(oldp+65,(vlSelf->top_sim__DOT__EX_valid));
        tracep->fullQData(oldp+66,(((((((- (QData)((IData)(
                                                           (0x300U 
                                                            == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))))) 
                                        & (((QData)((IData)(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mpie)) 
                                            << 7U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mie) 
                                                              << 3U))))) 
                                       | ((- (QData)((IData)(
                                                             (0x305U 
                                                              == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))))) 
                                          & vlSelf->top_sim__DOT__u_csr__DOT__mtvec)) 
                                      | ((- (QData)((IData)(
                                                            (0x341U 
                                                             == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))))) 
                                         & vlSelf->top_sim__DOT__u_csr__DOT__mepc)) 
                                     | ((- (QData)((IData)(
                                                           (0x342U 
                                                            == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))))) 
                                        & vlSelf->top_sim__DOT__u_csr__DOT__mcause)) 
                                    | ((- (QData)((IData)(
                                                          (0x343U 
                                                           == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))))) 
                                       & vlSelf->top_sim__DOT__u_csr__DOT__mtval))),64);
        tracep->fullQData(oldp+68,(((IData)((0U != 
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
        tracep->fullBit(oldp+70,(vlSelf->top_sim__DOT__ex_jump));
        tracep->fullQData(oldp+71,((((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                      ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                      : vlSelf->top_sim__DOT__EX_pc) 
                                    + vlSelf->top_sim__DOT__EX_imm)),64);
        tracep->fullQData(oldp+73,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
        tracep->fullSData(oldp+75,(vlSelf->top_sim__DOT__MEM_optype_info),12);
        tracep->fullSData(oldp+76,(vlSelf->top_sim__DOT__MEM_ld_st_info),11);
        tracep->fullBit(oldp+77,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullSData(oldp+78,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r) 
                                    & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
        tracep->fullBit(oldp+79,(vlSelf->top_sim__DOT__MEM_rd_wen));
        tracep->fullCData(oldp+80,(vlSelf->top_sim__DOT__MEM_rd_idx),5);
        tracep->fullQData(oldp+81,(vlSelf->top_sim__DOT__MEM_fwd_data),64);
        tracep->fullQData(oldp+83,(vlSelf->top_sim__DOT__MEM_rs2_rdata),64);
        tracep->fullQData(oldp+85,(vlSelf->top_sim__DOT__MEM_alu_res),64);
        tracep->fullQData(oldp+87,(vlSelf->top_sim__DOT__MEM_csr_rdata),64);
        tracep->fullQData(oldp+89,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
        tracep->fullBit(oldp+91,(vlSelf->top_sim__DOT__MEM_pc_misalign));
        tracep->fullBit(oldp+92,(vlSelf->top_sim__DOT__MEM_if_bus_err));
        tracep->fullBit(oldp+93,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
                                  & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
        tracep->fullBit(oldp+94,(vlSelf->top_sim__DOT__MEM_ecall));
        tracep->fullBit(oldp+95,(vlSelf->top_sim__DOT__MEM_ebreak));
        tracep->fullBit(oldp+96,(vlSelf->top_sim__DOT__MEM_mret));
        tracep->fullBit(oldp+97,(vlSelf->top_sim__DOT__MEM_valid));
        tracep->fullQData(oldp+98,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+100,(vlSelf->top_sim__DOT__mem_ld_misalign));
        tracep->fullBit(oldp+101,(vlSelf->top_sim__DOT__mem_st_misalign));
        tracep->fullQData(oldp+102,(vlSelf->top_sim__DOT__WB_pc),64);
        tracep->fullSData(oldp+104,(vlSelf->top_sim__DOT__WB_optype_info),12);
        tracep->fullBit(oldp+105,(((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wen_r) 
                                   & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
        tracep->fullSData(oldp+106,(vlSelf->top_sim__DOT__WB_csr_idx),12);
        tracep->fullQData(oldp+107,(vlSelf->top_sim__DOT__WB_csr_wdata),64);
        tracep->fullBit(oldp+109,(vlSelf->top_sim__DOT__WB_rd_wen));
        tracep->fullCData(oldp+110,(vlSelf->top_sim__DOT__WB_rd_idx),5);
        tracep->fullQData(oldp+111,(vlSelf->top_sim__DOT__WB_alu_res),64);
        tracep->fullQData(oldp+113,((vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r 
                                     & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),64);
        tracep->fullQData(oldp+115,((vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r 
                                     & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),64);
        tracep->fullBit(oldp+117,(((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r) 
                                   & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
        tracep->fullBit(oldp+118,(vlSelf->top_sim__DOT__WB_if_bus_err));
        tracep->fullBit(oldp+119,(vlSelf->top_sim__DOT__WB_ilegl_instr));
        tracep->fullBit(oldp+120,(vlSelf->top_sim__DOT__WB_ecall));
        tracep->fullBit(oldp+121,(vlSelf->top_sim__DOT__WB_ebreak));
        tracep->fullBit(oldp+122,(vlSelf->top_sim__DOT__WB_mret));
        tracep->fullBit(oldp+123,(vlSelf->top_sim__DOT__WB_ld_misalign));
        tracep->fullBit(oldp+124,(vlSelf->top_sim__DOT__WB_ld_bus_err));
        tracep->fullBit(oldp+125,(vlSelf->top_sim__DOT__WB_st_misalign));
        tracep->fullBit(oldp+126,(vlSelf->top_sim__DOT__WB_st_bus_err));
        tracep->fullBit(oldp+127,(vlSelf->top_sim__DOT__wb_rd_wen));
        tracep->fullQData(oldp+128,(vlSelf->top_sim__DOT__wb_rd_wdata),64);
        tracep->fullBit(oldp+130,(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp));
        tracep->fullQData(oldp+131,(((IData)(vlSelf->top_sim__DOT__WB_mret)
                                      ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                      : vlSelf->top_sim__DOT__u_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+133,(vlSelf->top_sim__DOT__if_flush));
        tracep->fullBit(oldp+134,(vlSelf->top_sim__DOT__id_flush));
        tracep->fullQData(oldp+135,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                      ? ((IData)(vlSelf->top_sim__DOT__WB_mret)
                                          ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                          : vlSelf->top_sim__DOT__u_csr__DOT__mtvec)
                                      : (((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                           ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                           : vlSelf->top_sim__DOT__EX_pc) 
                                         + vlSelf->top_sim__DOT__EX_imm))),64);
        tracep->fullQData(oldp+137,((0xfffffffffffffff8ULL 
                                     & vlSelf->top_sim__DOT__MEM_alu_res)),64);
        tracep->fullBit(oldp+139,((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))));
        tracep->fullCData(oldp+140,(vlSelf->top_sim__DOT__ram_byte_en),8);
        tracep->fullQData(oldp+141,((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+143,((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7f0U 
                                                     & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))));
        tracep->fullQData(oldp+144,(vlSelf->top_sim__DOT__ram_rdata),64);
        tracep->fullBit(oldp+146,(vlSelf->top_sim__DOT__wb_csr_wen));
        tracep->fullQData(oldp+147,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_int)
                                      ? (0x8000000000000000ULL 
                                         | (QData)((IData)(vlSelf->top_sim__DOT__u_wb__DOT__int_code)))
                                      : (QData)((IData)(
                                                        ((((((((1U 
                                                                & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_if_bus_err)))) 
                                                               | (2U 
                                                                  & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr))))) 
                                                              | (3U 
                                                                 & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ebreak))))) 
                                                             | (4U 
                                                                & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_misalign))))) 
                                                            | (5U 
                                                               & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_bus_err))))) 
                                                           | (6U 
                                                              & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_misalign))))) 
                                                          | (7U 
                                                             & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_bus_err))))) 
                                                         | (0xbU 
                                                            & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ecall))))))))),64);
        tracep->fullQData(oldp+149,(((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr)
                                      ? (QData)((IData)(vlSelf->top_sim__DOT__u_wb__DOT__WB_instr_i))
                                      : vlSelf->top_sim__DOT__WB_alu_res)),64);
        tracep->fullQData(oldp+151,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                      ? vlSelf->top_sim__DOT__WB_pc
                                      : (4ULL + vlSelf->top_sim__DOT__WB_pc))),64);
        tracep->fullBit(oldp+153,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp) 
                                   & (~ (IData)(vlSelf->top_sim__DOT__WB_mret)))));
        tracep->fullQData(oldp+154,(vlSelf->top_sim__DOT__u_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+156,(vlSelf->top_sim__DOT__u_csr__DOT__mepc),64);
        tracep->fullBit(oldp+158,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+159,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+160,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                         >> 7U))));
        tracep->fullQData(oldp+161,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
        tracep->fullBit(oldp+163,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
        tracep->fullQData(oldp+164,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                      ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+166,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                      ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                          ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                      : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullQData(oldp+168,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                      ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                      : 4ULL)),64);
        tracep->fullQData(oldp+170,((4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
        tracep->fullSData(oldp+172,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
        tracep->fullCData(oldp+173,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0xfU))),5);
        tracep->fullSData(oldp+174,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
        tracep->fullCData(oldp+175,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+176,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
        tracep->fullCData(oldp+177,((((IData)((0x63U 
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
        tracep->fullSData(oldp+178,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
        tracep->fullCData(oldp+179,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                      << 5U) | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
        tracep->fullBit(oldp+180,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                    | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                   | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
        tracep->fullSData(oldp+181,((vlSelf->top_sim__DOT__ifu_instr 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+182,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                     & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                    & (0x63U != (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x23U != (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullCData(oldp+183,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+184,((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_flush_i)) 
                                    & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i)) 
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
        tracep->fullBit(oldp+185,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
        tracep->fullBit(oldp+186,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
        tracep->fullBit(oldp+187,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
        tracep->fullCData(oldp+188,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
        tracep->fullCData(oldp+189,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+190,((vlSelf->top_sim__DOT__ifu_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+191,((0x13U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+192,((0x1bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+193,((0x33U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+194,((0x3bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+195,((0x63U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+196,((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+197,((0x67U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+198,((3U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+199,((0x23U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+200,((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+201,((0x17U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+202,((0x73U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
        tracep->fullBit(oldp+203,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+204,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+205,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+206,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+207,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+208,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+209,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+210,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+211,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+212,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+213,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+214,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+215,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+216,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+217,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+218,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+219,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+220,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+221,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+222,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+223,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+224,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+225,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+226,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+227,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+228,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+229,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+230,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+231,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+232,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+233,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+234,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+235,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+236,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+237,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+238,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+239,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+240,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+241,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+242,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+243,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+244,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+245,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+246,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+247,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+248,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
        tracep->fullBit(oldp+249,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
        tracep->fullBit(oldp+250,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
        tracep->fullBit(oldp+251,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+252,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+253,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
        tracep->fullBit(oldp+254,((((((((((0x37U != 
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
        tracep->fullBit(oldp+255,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullQData(oldp+256,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+258,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__ifu_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__ifu_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+260,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+262,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+264,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__ifu_instr))))),64);
        tracep->fullBit(oldp+266,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+267,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))));
        tracep->fullBit(oldp+268,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
        tracep->fullQData(oldp+269,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
        tracep->fullIData(oldp+271,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
        tracep->fullBit(oldp+272,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
        tracep->fullBit(oldp+273,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
        tracep->fullBit(oldp+274,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
        tracep->fullCData(oldp+275,((0x7fU & vlSelf->top_sim__DOT__ID_instr)),7);
        tracep->fullCData(oldp+276,((7U & (vlSelf->top_sim__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+277,((vlSelf->top_sim__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+278,((0x13U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+279,((0x1bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+280,((0x33U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+281,((0x3bU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+282,((0x63U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+283,((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+284,((0x67U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+285,((3U == (0x7fU & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+286,((0x23U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+287,((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+288,((0x17U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+289,((0x73U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
        tracep->fullBit(oldp+290,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+291,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+292,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+293,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+294,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+295,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+296,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+297,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+298,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+299,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+300,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+301,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+302,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+303,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+304,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+305,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+306,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+307,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+308,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+309,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+310,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+311,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+312,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+313,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+314,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+315,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+316,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+317,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                                   & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+318,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+319,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+320,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+321,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+322,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+323,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+324,((IData)((3U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+325,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+326,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+327,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+328,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+329,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+330,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+331,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+332,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+333,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+334,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+335,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
        tracep->fullBit(oldp+336,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
        tracep->fullBit(oldp+337,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
        tracep->fullBit(oldp+338,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+339,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+340,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
        tracep->fullBit(oldp+341,((((((((((0x37U != 
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
        tracep->fullBit(oldp+342,(((((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullQData(oldp+343,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top_sim__DOT__ID_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+345,((((- (QData)((IData)(
                                                         (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top_sim__DOT__ID_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top_sim__DOT__ID_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+347,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+349,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+351,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__ID_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top_sim__DOT__ID_instr))))),64);
        tracep->fullBit(oldp+353,(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullBit(oldp+354,(((0x37U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ID_instr)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr)))));
        tracep->fullQData(oldp+355,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0]),64);
        tracep->fullQData(oldp+357,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1]),64);
        tracep->fullQData(oldp+359,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2]),64);
        tracep->fullQData(oldp+361,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3]),64);
        tracep->fullQData(oldp+363,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4]),64);
        tracep->fullQData(oldp+365,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5]),64);
        tracep->fullQData(oldp+367,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6]),64);
        tracep->fullQData(oldp+369,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7]),64);
        tracep->fullQData(oldp+371,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8]),64);
        tracep->fullQData(oldp+373,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9]),64);
        tracep->fullQData(oldp+375,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[10]),64);
        tracep->fullQData(oldp+377,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[11]),64);
        tracep->fullQData(oldp+379,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[12]),64);
        tracep->fullQData(oldp+381,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[13]),64);
        tracep->fullQData(oldp+383,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[14]),64);
        tracep->fullQData(oldp+385,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[15]),64);
        tracep->fullQData(oldp+387,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[16]),64);
        tracep->fullQData(oldp+389,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[17]),64);
        tracep->fullQData(oldp+391,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[18]),64);
        tracep->fullQData(oldp+393,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[19]),64);
        tracep->fullQData(oldp+395,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[20]),64);
        tracep->fullQData(oldp+397,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[21]),64);
        tracep->fullQData(oldp+399,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[22]),64);
        tracep->fullQData(oldp+401,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[23]),64);
        tracep->fullQData(oldp+403,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[24]),64);
        tracep->fullQData(oldp+405,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[25]),64);
        tracep->fullQData(oldp+407,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[26]),64);
        tracep->fullQData(oldp+409,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[27]),64);
        tracep->fullQData(oldp+411,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[28]),64);
        tracep->fullQData(oldp+413,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[29]),64);
        tracep->fullQData(oldp+415,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[30]),64);
        tracep->fullQData(oldp+417,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[0]),64);
        tracep->fullQData(oldp+419,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[1]),64);
        tracep->fullQData(oldp+421,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[2]),64);
        tracep->fullQData(oldp+423,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[3]),64);
        tracep->fullQData(oldp+425,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[4]),64);
        tracep->fullQData(oldp+427,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[5]),64);
        tracep->fullQData(oldp+429,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[6]),64);
        tracep->fullQData(oldp+431,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[7]),64);
        tracep->fullQData(oldp+433,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[8]),64);
        tracep->fullQData(oldp+435,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[9]),64);
        tracep->fullQData(oldp+437,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[10]),64);
        tracep->fullQData(oldp+439,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[11]),64);
        tracep->fullQData(oldp+441,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[12]),64);
        tracep->fullQData(oldp+443,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[13]),64);
        tracep->fullQData(oldp+445,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[14]),64);
        tracep->fullQData(oldp+447,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[15]),64);
        tracep->fullQData(oldp+449,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[16]),64);
        tracep->fullQData(oldp+451,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[17]),64);
        tracep->fullQData(oldp+453,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[18]),64);
        tracep->fullQData(oldp+455,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[19]),64);
        tracep->fullQData(oldp+457,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[20]),64);
        tracep->fullQData(oldp+459,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[21]),64);
        tracep->fullQData(oldp+461,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[22]),64);
        tracep->fullQData(oldp+463,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[23]),64);
        tracep->fullQData(oldp+465,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[24]),64);
        tracep->fullQData(oldp+467,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[25]),64);
        tracep->fullQData(oldp+469,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[26]),64);
        tracep->fullQData(oldp+471,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[27]),64);
        tracep->fullQData(oldp+473,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[28]),64);
        tracep->fullQData(oldp+475,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[29]),64);
        tracep->fullQData(oldp+477,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[30]),64);
        tracep->fullBit(oldp+479,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
        tracep->fullBit(oldp+480,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
        tracep->fullBit(oldp+481,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
        tracep->fullBit(oldp+482,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
        tracep->fullBit(oldp+483,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                    & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                   & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
        tracep->fullQData(oldp+484,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
        tracep->fullSData(oldp+486,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
        tracep->fullSData(oldp+487,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
        tracep->fullCData(oldp+488,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
        tracep->fullSData(oldp+489,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
        tracep->fullCData(oldp+490,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
        tracep->fullCData(oldp+491,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r),5);
        tracep->fullCData(oldp+492,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r),5);
        tracep->fullQData(oldp+493,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
        tracep->fullQData(oldp+495,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
        tracep->fullQData(oldp+497,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
        tracep->fullBit(oldp+499,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
        tracep->fullSData(oldp+500,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
        tracep->fullBit(oldp+501,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r));
        tracep->fullCData(oldp+502,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r),5);
        tracep->fullBit(oldp+503,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
        tracep->fullBit(oldp+504,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
        tracep->fullBit(oldp+505,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
        tracep->fullBit(oldp+506,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
        tracep->fullBit(oldp+507,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
        tracep->fullBit(oldp+508,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
        tracep->fullBit(oldp+509,((1U & ((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                               >> 5U) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res)))) 
                                             | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                 >> 4U) 
                                                & (0U 
                                                   != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res))) 
                                            | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                >> 3U) 
                                               & (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt))) 
                                           | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                               >> 2U) 
                                              & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt)))) 
                                          | (((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))) 
                                         | ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            & (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout))))));
        tracep->fullBit(oldp+510,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+511,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 5U))));
        tracep->fullQData(oldp+512,(((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                      ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                      : vlSelf->top_sim__DOT__EX_pc)),64);
        tracep->fullBit(oldp+514,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+515,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+516,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+517,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+518,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+519,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+520,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+521,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+522,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+523,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+524,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+525,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+526,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+527,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+528,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+529,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+530,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+531,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+532,((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))));
        tracep->fullBit(oldp+533,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+534,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+535,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+536,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+537,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+538,((1U & (IData)(vlSelf->top_sim__DOT__EX_branch_info))));
        tracep->fullBit(oldp+539,((1U & (IData)(((0U 
                                                  != 
                                                  (0x200U 
                                                   & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                 | (0U 
                                                    != 
                                                    (0x7eU 
                                                     & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))))));
        tracep->fullBit(oldp+540,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
        tracep->fullBit(oldp+541,((1U & ((IData)(((0U 
                                                   != 
                                                   (0x200U 
                                                    & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                  | (0U 
                                                     != 
                                                     (0x7eU 
                                                      & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
        tracep->fullQData(oldp+542,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
        tracep->fullQData(oldp+544,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
        tracep->fullQData(oldp+546,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
        tracep->fullQData(oldp+548,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+550,((QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt))),64);
        tracep->fullQData(oldp+552,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+554,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res),64);
        tracep->fullQData(oldp+556,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+558,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
        tracep->fullQData(oldp+560,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+562,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                     & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
        tracep->fullQData(oldp+564,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
        tracep->fullBit(oldp+566,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout));
        tracep->fullCData(oldp+567,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
        tracep->fullQData(oldp+568,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
        tracep->fullQData(oldp+570,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
        tracep->fullBit(oldp+572,((0U != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res)));
        tracep->fullBit(oldp+573,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res))))));
        tracep->fullBit(oldp+574,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt));
        tracep->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))));
        tracep->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt)))));
        tracep->fullBit(oldp+577,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
        tracep->fullQData(oldp+578,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r),64);
        tracep->fullSData(oldp+580,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r),12);
        tracep->fullSData(oldp+581,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r),11);
        tracep->fullBit(oldp+582,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r));
        tracep->fullSData(oldp+583,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r),12);
        tracep->fullBit(oldp+584,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r));
        tracep->fullCData(oldp+585,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r),5);
        tracep->fullQData(oldp+586,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r),64);
        tracep->fullQData(oldp+588,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r),64);
        tracep->fullQData(oldp+590,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r),64);
        tracep->fullQData(oldp+592,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r),64);
        tracep->fullBit(oldp+594,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r));
        tracep->fullBit(oldp+595,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r));
        tracep->fullBit(oldp+596,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r));
        tracep->fullBit(oldp+597,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r));
        tracep->fullBit(oldp+598,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r));
        tracep->fullBit(oldp+599,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r));
        tracep->fullBit(oldp+600,((1U & (IData)(vlSelf->top_sim__DOT__MEM_optype_info))));
        tracep->fullBit(oldp+601,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+602,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+603,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 8U))));
        tracep->fullBit(oldp+604,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 7U))));
        tracep->fullBit(oldp+605,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 6U))));
        tracep->fullBit(oldp+606,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 5U))));
        tracep->fullBit(oldp+607,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+608,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 3U))));
        tracep->fullBit(oldp+609,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 2U))));
        tracep->fullBit(oldp+610,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                         >> 1U))));
        tracep->fullBit(oldp+611,((1U & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))));
        tracep->fullBit(oldp+612,(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp));
        tracep->fullCData(oldp+613,(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata),8);
        tracep->fullSData(oldp+614,(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata),16);
        tracep->fullIData(oldp+615,(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata),32);
        tracep->fullQData(oldp+616,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                             >> 7U))))) 
                                      << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))),64);
        tracep->fullQData(oldp+618,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                             >> 0xfU))))) 
                                      << 0x10U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))),64);
        tracep->fullQData(oldp+620,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata)))),64);
        tracep->fullQData(oldp+622,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata))),64);
        tracep->fullQData(oldp+624,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))),64);
        tracep->fullQData(oldp+626,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))),64);
        tracep->fullCData(oldp+628,(((1U & (IData)(
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
        tracep->fullCData(oldp+629,(((1U & (IData)(
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
        tracep->fullCData(oldp+630,(((1U & (IData)(
                                                   (vlSelf->top_sim__DOT__MEM_alu_res 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 2U)))
                                          ? 0xf0U : 0U)
                                      : 0xfU)),8);
        tracep->fullSData(oldp+631,((0x3f8U & ((IData)(
                                                       (vlSelf->top_sim__DOT__MEM_alu_res 
                                                        >> 3U)) 
                                               << 3U))),10);
        tracep->fullQData(oldp+632,(vlSelf->top_sim__DOT__u_ram__DOT__rdata),64);
        tracep->fullQData(oldp+634,(vlSelf->top_sim__DOT__u_ram__DOT__mask),64);
        tracep->fullQData(oldp+636,(vlSelf->top_sim__DOT__u_ram__DOT__wdata),64);
        tracep->fullBit(oldp+638,(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
        tracep->fullQData(oldp+639,(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_r),64);
        tracep->fullSData(oldp+641,(vlSelf->top_sim__DOT__u_WB__DOT__WB_optype_info_r),12);
        tracep->fullBit(oldp+642,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wen_r));
        tracep->fullSData(oldp+643,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_idx_r),12);
        tracep->fullBit(oldp+644,(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_wen_r));
        tracep->fullCData(oldp+645,(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_idx_r),5);
        tracep->fullQData(oldp+646,(vlSelf->top_sim__DOT__u_WB__DOT__WB_alu_res_r),64);
        tracep->fullQData(oldp+648,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r),64);
        tracep->fullQData(oldp+650,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wdata_r),64);
        tracep->fullQData(oldp+652,(vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r),64);
        tracep->fullBit(oldp+654,(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r));
        tracep->fullBit(oldp+655,(vlSelf->top_sim__DOT__u_WB__DOT__WB_if_bus_err_r));
        tracep->fullBit(oldp+656,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ilegl_instr_r));
        tracep->fullBit(oldp+657,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ecall_r));
        tracep->fullBit(oldp+658,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ebreak_r));
        tracep->fullBit(oldp+659,(vlSelf->top_sim__DOT__u_WB__DOT__WB_mret_r));
        tracep->fullBit(oldp+660,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_misalign_r));
        tracep->fullBit(oldp+661,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_bus_err_r));
        tracep->fullBit(oldp+662,(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_misalign_r));
        tracep->fullBit(oldp+663,(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_bus_err_r));
        tracep->fullBit(oldp+664,((1U & ((IData)(vlSelf->top_sim__DOT__WB_optype_info) 
                                         >> 4U))));
        tracep->fullBit(oldp+665,((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))));
        tracep->fullCData(oldp+666,(((((((((1U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_if_bus_err)))) 
                                           | (2U & 
                                              (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr))))) 
                                          | (3U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ebreak))))) 
                                         | (4U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_misalign))))) 
                                        | (5U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_bus_err))))) 
                                       | (6U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_misalign))))) 
                                      | (7U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_bus_err))))) 
                                     | (0xbU & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ecall)))))),4);
        tracep->fullBit(oldp+667,(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mie));
        tracep->fullQData(oldp+668,((((QData)((IData)(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mpie)) 
                                      << 7U) | (QData)((IData)(
                                                               ((IData)(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mie) 
                                                                << 3U))))),64);
        tracep->fullBit(oldp+670,(vlSelf->top_sim__DOT__u_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+671,(vlSelf->top_sim__DOT__u_csr__DOT__mcause),64);
        tracep->fullQData(oldp+673,(vlSelf->top_sim__DOT__u_csr__DOT__mtval),64);
        tracep->fullBit(oldp+675,((0x300U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+676,((0x304U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+677,((0x305U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+678,((0x340U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+679,((0x341U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+680,((0x342U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+681,((0x343U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+682,((0x344U == (IData)(vlSelf->top_sim__DOT__EX_csr_idx))));
        tracep->fullBit(oldp+683,(vlSelf->clk));
        tracep->fullBit(oldp+684,(vlSelf->rst));
        tracep->fullQData(oldp+685,(vlSelf->reg_data_o[0]),64);
        tracep->fullQData(oldp+687,(vlSelf->reg_data_o[1]),64);
        tracep->fullQData(oldp+689,(vlSelf->reg_data_o[2]),64);
        tracep->fullQData(oldp+691,(vlSelf->reg_data_o[3]),64);
        tracep->fullQData(oldp+693,(vlSelf->reg_data_o[4]),64);
        tracep->fullQData(oldp+695,(vlSelf->reg_data_o[5]),64);
        tracep->fullQData(oldp+697,(vlSelf->reg_data_o[6]),64);
        tracep->fullQData(oldp+699,(vlSelf->reg_data_o[7]),64);
        tracep->fullQData(oldp+701,(vlSelf->reg_data_o[8]),64);
        tracep->fullQData(oldp+703,(vlSelf->reg_data_o[9]),64);
        tracep->fullQData(oldp+705,(vlSelf->reg_data_o[10]),64);
        tracep->fullQData(oldp+707,(vlSelf->reg_data_o[11]),64);
        tracep->fullQData(oldp+709,(vlSelf->reg_data_o[12]),64);
        tracep->fullQData(oldp+711,(vlSelf->reg_data_o[13]),64);
        tracep->fullQData(oldp+713,(vlSelf->reg_data_o[14]),64);
        tracep->fullQData(oldp+715,(vlSelf->reg_data_o[15]),64);
        tracep->fullQData(oldp+717,(vlSelf->reg_data_o[16]),64);
        tracep->fullQData(oldp+719,(vlSelf->reg_data_o[17]),64);
        tracep->fullQData(oldp+721,(vlSelf->reg_data_o[18]),64);
        tracep->fullQData(oldp+723,(vlSelf->reg_data_o[19]),64);
        tracep->fullQData(oldp+725,(vlSelf->reg_data_o[20]),64);
        tracep->fullQData(oldp+727,(vlSelf->reg_data_o[21]),64);
        tracep->fullQData(oldp+729,(vlSelf->reg_data_o[22]),64);
        tracep->fullQData(oldp+731,(vlSelf->reg_data_o[23]),64);
        tracep->fullQData(oldp+733,(vlSelf->reg_data_o[24]),64);
        tracep->fullQData(oldp+735,(vlSelf->reg_data_o[25]),64);
        tracep->fullQData(oldp+737,(vlSelf->reg_data_o[26]),64);
        tracep->fullQData(oldp+739,(vlSelf->reg_data_o[27]),64);
        tracep->fullQData(oldp+741,(vlSelf->reg_data_o[28]),64);
        tracep->fullQData(oldp+743,(vlSelf->reg_data_o[29]),64);
        tracep->fullQData(oldp+745,(vlSelf->reg_data_o[30]),64);
        tracep->fullBit(oldp+747,(0U));
        tracep->fullBit(oldp+748,(1U));
        tracep->fullQData(oldp+749,(vlSelf->top_sim__DOT__ex_csr_rdata),64);
        tracep->fullBit(oldp+751,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_flush_i));
        tracep->fullQData(oldp+752,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+754,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i),64);
        tracep->fullBit(oldp+756,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i));
        tracep->fullCData(oldp+757,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_rd_idx_i),5);
        tracep->fullBit(oldp+758,(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r));
        tracep->fullIData(oldp+759,(0x400U),32);
        tracep->fullIData(oldp+760,(vlSelf->top_sim__DOT__u_wb__DOT__WB_instr_i),32);
        tracep->fullBit(oldp+761,(vlSelf->top_sim__DOT__u_wb__DOT__wb_int));
        tracep->fullCData(oldp+762,(vlSelf->top_sim__DOT__u_wb__DOT__int_code),4);
        tracep->fullBit(oldp+763,(vlSelf->top_sim__DOT__u_csr__DOT__int_soft_i));
        tracep->fullBit(oldp+764,(vlSelf->top_sim__DOT__u_csr__DOT__int_timer_i));
        tracep->fullBit(oldp+765,(vlSelf->top_sim__DOT__u_csr__DOT__int_exter_i));
        tracep->fullBit(oldp+766,(vlSelf->top_sim__DOT__u_csr__DOT__mie_soft_o));
        tracep->fullBit(oldp+767,(vlSelf->top_sim__DOT__u_csr__DOT__mie_timer_o));
        tracep->fullBit(oldp+768,(vlSelf->top_sim__DOT__u_csr__DOT__mie_exter_o));
        tracep->fullBit(oldp+769,(vlSelf->top_sim__DOT__u_csr__DOT__mip_soft_o));
        tracep->fullBit(oldp+770,(vlSelf->top_sim__DOT__u_csr__DOT__mip_timer_o));
        tracep->fullBit(oldp+771,(vlSelf->top_sim__DOT__u_csr__DOT__mip_exter_o));
    }
}
