// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vid__Syms.h"


void Vid___024root__traceInitSub0(Vid___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vid___024root__traceInitTop(Vid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vid___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vid___024root__traceInitSub0(Vid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+13,"instr_i", false,-1, 31,0);
        tracep->declBus(c+14,"id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+15,"id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+16,"rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+18,"rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+20,"id_csr_wen_o", false,-1);
        tracep->declBus(c+21,"id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+22,"csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+24,"id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+25,"id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+26,"id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+27,"id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+28,"id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+29,"id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+31,"id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+33,"id_imm_o", false,-1, 63,0);
        tracep->declBit(c+35,"id_rd_wen_o", false,-1);
        tracep->declBus(c+36,"id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+37,"id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+39,"id_ilegl_instr_o", false,-1);
        tracep->declBit(c+40,"id_ecall_o", false,-1);
        tracep->declBit(c+41,"id_ebreak_o", false,-1);
        tracep->declBit(c+42,"id_mret_o", false,-1);
        tracep->declBus(c+13,"id instr_i", false,-1, 31,0);
        tracep->declBus(c+14,"id id_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+15,"id id_rs2_idx_o", false,-1, 4,0);
        tracep->declQuad(c+16,"id rf_rs1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+18,"id rf_rs2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+20,"id id_csr_wen_o", false,-1);
        tracep->declBus(c+21,"id id_csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+22,"id csr_rdata_i", false,-1, 63,0);
        tracep->declBus(c+24,"id id_opcode_info_o", false,-1, 11,0);
        tracep->declBus(c+25,"id id_alu_info_o", false,-1, 9,0);
        tracep->declBus(c+26,"id id_branch_info_o", false,-1, 5,0);
        tracep->declBus(c+27,"id id_ld_st_info_o", false,-1, 10,0);
        tracep->declBus(c+28,"id id_csr_info_o", false,-1, 5,0);
        tracep->declQuad(c+29,"id id_rs1_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+31,"id id_rs2_rdata_o", false,-1, 63,0);
        tracep->declQuad(c+33,"id id_imm_o", false,-1, 63,0);
        tracep->declBit(c+35,"id id_rd_wen_o", false,-1);
        tracep->declBus(c+36,"id id_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+37,"id id_csr_rdata_o", false,-1, 63,0);
        tracep->declBit(c+39,"id id_ilegl_instr_o", false,-1);
        tracep->declBit(c+40,"id id_ecall_o", false,-1);
        tracep->declBit(c+41,"id id_ebreak_o", false,-1);
        tracep->declBit(c+42,"id id_mret_o", false,-1);
        tracep->declBus(c+43,"id opcode", false,-1, 6,0);
        tracep->declBus(c+44,"id rd", false,-1, 4,0);
        tracep->declBus(c+45,"id fun3", false,-1, 2,0);
        tracep->declBus(c+46,"id rs1", false,-1, 4,0);
        tracep->declBus(c+47,"id rs2", false,-1, 4,0);
        tracep->declBus(c+48,"id fun7", false,-1, 6,0);
        tracep->declBit(c+49,"id rv64_alu_imm", false,-1);
        tracep->declBit(c+50,"id rv64_alu_imm_w", false,-1);
        tracep->declBit(c+51,"id rv64_alu", false,-1);
        tracep->declBit(c+52,"id rv64_alu_w", false,-1);
        tracep->declBit(c+53,"id rv64_branch", false,-1);
        tracep->declBit(c+54,"id rv64_jal", false,-1);
        tracep->declBit(c+55,"id rv64_jalr", false,-1);
        tracep->declBit(c+56,"id rv64_load", false,-1);
        tracep->declBit(c+57,"id rv64_store", false,-1);
        tracep->declBit(c+58,"id rv64_lui", false,-1);
        tracep->declBit(c+59,"id rv64_auipc", false,-1);
        tracep->declBit(c+60,"id rv64_system", false,-1);
        tracep->declBit(c+61,"id rv64_addi", false,-1);
        tracep->declBit(c+62,"id rv64_addiw", false,-1);
        tracep->declBit(c+63,"id rv64_slli", false,-1);
        tracep->declBit(c+64,"id rv64_slliw", false,-1);
        tracep->declBit(c+65,"id rv64_slti", false,-1);
        tracep->declBit(c+66,"id rv64_sltui", false,-1);
        tracep->declBit(c+67,"id rv64_xori", false,-1);
        tracep->declBit(c+68,"id rv64_srli", false,-1);
        tracep->declBit(c+69,"id rv64_srliw", false,-1);
        tracep->declBit(c+70,"id rv64_srai", false,-1);
        tracep->declBit(c+71,"id rv64_sraiw", false,-1);
        tracep->declBit(c+72,"id rv64_ori", false,-1);
        tracep->declBit(c+73,"id rv64_andi", false,-1);
        tracep->declBit(c+74,"id rv64_add", false,-1);
        tracep->declBit(c+75,"id rv64_addw", false,-1);
        tracep->declBit(c+76,"id rv64_sub", false,-1);
        tracep->declBit(c+77,"id rv64_subw", false,-1);
        tracep->declBit(c+78,"id rv64_sll", false,-1);
        tracep->declBit(c+79,"id rv64_sllw", false,-1);
        tracep->declBit(c+80,"id rv64_slt", false,-1);
        tracep->declBit(c+81,"id rv64_sltu", false,-1);
        tracep->declBit(c+82,"id rv64_xor", false,-1);
        tracep->declBit(c+83,"id rv64_srl", false,-1);
        tracep->declBit(c+84,"id rv64_srlw", false,-1);
        tracep->declBit(c+85,"id rv64_sra", false,-1);
        tracep->declBit(c+86,"id rv64_sraw", false,-1);
        tracep->declBit(c+87,"id rv64_or", false,-1);
        tracep->declBit(c+88,"id rv64_and", false,-1);
        tracep->declBit(c+89,"id rv64_beq", false,-1);
        tracep->declBit(c+90,"id rv64_bne", false,-1);
        tracep->declBit(c+91,"id rv64_blt", false,-1);
        tracep->declBit(c+92,"id rv64_bge", false,-1);
        tracep->declBit(c+93,"id rv64_bltu", false,-1);
        tracep->declBit(c+94,"id rv64_bgeu", false,-1);
        tracep->declBit(c+95,"id rv64_lb", false,-1);
        tracep->declBit(c+96,"id rv64_lh", false,-1);
        tracep->declBit(c+97,"id rv64_lw", false,-1);
        tracep->declBit(c+98,"id rv64_ld", false,-1);
        tracep->declBit(c+99,"id rv64_lbu", false,-1);
        tracep->declBit(c+100,"id rv64_lhu", false,-1);
        tracep->declBit(c+101,"id rv64_lwu", false,-1);
        tracep->declBit(c+102,"id rv64_sb", false,-1);
        tracep->declBit(c+103,"id rv64_sh", false,-1);
        tracep->declBit(c+104,"id rv64_sw", false,-1);
        tracep->declBit(c+105,"id rv64_sd", false,-1);
        tracep->declBit(c+1,"id rv64_ecall", false,-1);
        tracep->declBit(c+2,"id rv64_ebreak", false,-1);
        tracep->declBit(c+3,"id rv64_mret", false,-1);
        tracep->declBit(c+4,"id rv64_csrrw", false,-1);
        tracep->declBit(c+5,"id rv64_csrrs", false,-1);
        tracep->declBit(c+6,"id rv64_csrrc", false,-1);
        tracep->declBit(c+7,"id rv64_csrrwi", false,-1);
        tracep->declBit(c+8,"id rv64_csrrsi", false,-1);
        tracep->declBit(c+9,"id rv64_csrrci", false,-1);
        tracep->declBit(c+106,"id rv64_need_rs1", false,-1);
        tracep->declBit(c+107,"id rv64_need_rs2", false,-1);
        tracep->declBit(c+108,"id rv64_need_rd", false,-1);
        tracep->declBit(c+10,"id rv64_need_csr", false,-1);
        tracep->declQuad(c+109,"id rv64_i_imm", false,-1, 63,0);
        tracep->declQuad(c+111,"id rv64_s_imm", false,-1, 63,0);
        tracep->declQuad(c+113,"id rv64_b_imm", false,-1, 63,0);
        tracep->declQuad(c+115,"id rv64_j_imm", false,-1, 63,0);
        tracep->declQuad(c+117,"id rv64_u_imm", false,-1, 63,0);
        tracep->declBit(c+119,"id rv64_imm_sel_i", false,-1);
        tracep->declBit(c+57,"id rv64_imm_sel_s", false,-1);
        tracep->declBit(c+53,"id rv64_imm_sel_b", false,-1);
        tracep->declBit(c+54,"id rv64_imm_sel_j", false,-1);
        tracep->declBit(c+120,"id rv64_imm_sel_u", false,-1);
        tracep->declQuad(c+11,"id rv64_imm", false,-1, 63,0);
    }
}

void Vid___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vid___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vid___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vid___024root__traceRegister(Vid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vid___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vid___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vid___024root__traceCleanup, vlSelf);
    }
}

void Vid___024root__traceFullSub0(Vid___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vid___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vid___024root* const __restrict vlSelf = static_cast<Vid___024root*>(voidSelf);
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vid___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vid___024root__traceFullSub0(Vid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->id__DOT__rv64_ecall));
        tracep->fullBit(oldp+2,(vlSelf->id__DOT__rv64_ebreak));
        tracep->fullBit(oldp+3,(vlSelf->id__DOT__rv64_mret));
        tracep->fullBit(oldp+4,(vlSelf->id__DOT__rv64_csrrw));
        tracep->fullBit(oldp+5,(vlSelf->id__DOT__rv64_csrrs));
        tracep->fullBit(oldp+6,(vlSelf->id__DOT__rv64_csrrc));
        tracep->fullBit(oldp+7,(vlSelf->id__DOT__rv64_csrrwi));
        tracep->fullBit(oldp+8,(vlSelf->id__DOT__rv64_csrrsi));
        tracep->fullBit(oldp+9,(vlSelf->id__DOT__rv64_csrrci));
        tracep->fullBit(oldp+10,(((((((IData)(vlSelf->id__DOT__rv64_csrrw) 
                                      | (IData)(vlSelf->id__DOT__rv64_csrrs)) 
                                     | (IData)(vlSelf->id__DOT__rv64_csrrc)) 
                                    | (IData)(vlSelf->id__DOT__rv64_csrrwi)) 
                                   | (IData)(vlSelf->id__DOT__rv64_csrrsi)) 
                                  | (IData)(vlSelf->id__DOT__rv64_csrrci))));
        tracep->fullQData(oldp+11,(vlSelf->id__DOT__rv64_imm),64);
        tracep->fullIData(oldp+13,(vlSelf->instr_i),32);
        tracep->fullCData(oldp+14,(vlSelf->id_rs1_idx_o),5);
        tracep->fullCData(oldp+15,(vlSelf->id_rs2_idx_o),5);
        tracep->fullQData(oldp+16,(vlSelf->rf_rs1_rdata_i),64);
        tracep->fullQData(oldp+18,(vlSelf->rf_rs2_rdata_i),64);
        tracep->fullBit(oldp+20,(vlSelf->id_csr_wen_o));
        tracep->fullSData(oldp+21,(vlSelf->id_csr_idx_o),12);
        tracep->fullQData(oldp+22,(vlSelf->csr_rdata_i),64);
        tracep->fullSData(oldp+24,(vlSelf->id_opcode_info_o),12);
        tracep->fullSData(oldp+25,(vlSelf->id_alu_info_o),10);
        tracep->fullCData(oldp+26,(vlSelf->id_branch_info_o),6);
        tracep->fullSData(oldp+27,(vlSelf->id_ld_st_info_o),11);
        tracep->fullCData(oldp+28,(vlSelf->id_csr_info_o),6);
        tracep->fullQData(oldp+29,(vlSelf->id_rs1_rdata_o),64);
        tracep->fullQData(oldp+31,(vlSelf->id_rs2_rdata_o),64);
        tracep->fullQData(oldp+33,(vlSelf->id_imm_o),64);
        tracep->fullBit(oldp+35,(vlSelf->id_rd_wen_o));
        tracep->fullCData(oldp+36,(vlSelf->id_rd_idx_o),5);
        tracep->fullQData(oldp+37,(vlSelf->id_csr_rdata_o),64);
        tracep->fullBit(oldp+39,(vlSelf->id_ilegl_instr_o));
        tracep->fullBit(oldp+40,(vlSelf->id_ecall_o));
        tracep->fullBit(oldp+41,(vlSelf->id_ebreak_o));
        tracep->fullBit(oldp+42,(vlSelf->id_mret_o));
        tracep->fullCData(oldp+43,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+44,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->fullCData(oldp+45,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+46,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+47,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+48,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->fullBit(oldp+49,((0x13U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+50,((0x1bU == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+51,((0x33U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+52,((0x3bU == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+53,((0x63U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+54,((0x6fU == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+55,((0x67U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+56,((3U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+57,((0x23U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+58,((0x37U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+59,((0x17U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+60,((0x73U == (0x7fU & vlSelf->instr_i))));
        tracep->fullBit(oldp+61,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+62,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+63,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+64,(((IData)((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+65,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+66,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+67,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+68,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+69,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+70,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+71,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+72,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+73,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+74,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+75,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+76,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+77,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+78,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+79,(((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+80,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+81,(((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+82,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+83,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+84,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+85,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+86,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0x20U == (vlSelf->instr_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+87,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+88,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U)))));
        tracep->fullBit(oldp+89,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+90,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+91,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+92,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+93,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+94,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+95,((IData)((3U == (0x707fU 
                                                 & vlSelf->instr_i)))));
        tracep->fullBit(oldp+96,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+97,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+98,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+99,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))));
        tracep->fullBit(oldp+100,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)))));
        tracep->fullBit(oldp+101,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)))));
        tracep->fullBit(oldp+102,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->instr_i)))));
        tracep->fullBit(oldp+103,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)))));
        tracep->fullBit(oldp+104,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)))));
        tracep->fullBit(oldp+105,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)))));
        tracep->fullBit(oldp+106,((((((((((0x37U != 
                                           (0x7fU & vlSelf->instr_i)) 
                                          & (0x17U 
                                             != (0x7fU 
                                                 & vlSelf->instr_i))) 
                                         & (0x6fU != 
                                            (0x7fU 
                                             & vlSelf->instr_i))) 
                                        & (~ (IData)(vlSelf->id__DOT__rv64_csrrwi))) 
                                       & (~ (IData)(vlSelf->id__DOT__rv64_csrrsi))) 
                                      & (~ (IData)(vlSelf->id__DOT__rv64_csrrci))) 
                                     & (~ (IData)(vlSelf->id__DOT__rv64_ecall))) 
                                    & (~ (IData)(vlSelf->id__DOT__rv64_ebreak))) 
                                   & (~ (IData)(vlSelf->id__DOT__rv64_mret)))));
        tracep->fullBit(oldp+107,(((((0x33U == (0x7fU 
                                                & vlSelf->instr_i)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->instr_i))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->instr_i))) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->instr_i)))));
        tracep->fullBit(oldp+108,((((((~ (IData)(vlSelf->id__DOT__rv64_ecall)) 
                                      & (~ (IData)(vlSelf->id__DOT__rv64_ebreak))) 
                                     & (~ (IData)(vlSelf->id__DOT__rv64_mret))) 
                                    & (0x63U != (0x7fU 
                                                 & vlSelf->instr_i))) 
                                   & (0x23U != (0x7fU 
                                                & vlSelf->instr_i)))));
        tracep->fullQData(oldp+109,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+111,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->instr_i 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->instr_i 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+113,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->instr_i 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->instr_i 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->instr_i 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->instr_i 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+115,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->instr_i 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->instr_i) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->instr_i 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->instr_i 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->instr_i))))),64);
        tracep->fullBit(oldp+119,(((((0x13U == (0x7fU 
                                                & vlSelf->instr_i)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->instr_i))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->instr_i))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->instr_i)))));
        tracep->fullBit(oldp+120,(((0x37U == (0x7fU 
                                              & vlSelf->instr_i)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->instr_i)))));
    }
}
