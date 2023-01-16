// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vid__Syms.h"


void Vid___024root__traceChgSub0(Vid___024root* vlSelf, VerilatedVcd* tracep);

void Vid___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vid___024root* const __restrict vlSelf = static_cast<Vid___024root*>(voidSelf);
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vid___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vid___024root__traceChgSub0(Vid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->id__DOT__rv64_ecall));
            tracep->chgBit(oldp+1,(vlSelf->id__DOT__rv64_ebreak));
            tracep->chgQData(oldp+2,(vlSelf->id__DOT__rv64_i_imm),64);
            tracep->chgQData(oldp+4,(vlSelf->id__DOT__rv64_imm),64);
        }
        tracep->chgIData(oldp+6,(vlSelf->instr_i),32);
        tracep->chgBit(oldp+7,(vlSelf->id_rs1_en_o));
        tracep->chgCData(oldp+8,(vlSelf->id_rs1_idx_o),5);
        tracep->chgBit(oldp+9,(vlSelf->id_rs2_en_o));
        tracep->chgCData(oldp+10,(vlSelf->id_rs2_idx_o),5);
        tracep->chgBit(oldp+11,(vlSelf->rf_rs1_rdata_i));
        tracep->chgBit(oldp+12,(vlSelf->rf_rs2_rdata_i));
        tracep->chgBit(oldp+13,(vlSelf->id_rd_en_o));
        tracep->chgCData(oldp+14,(vlSelf->id_rd_idx_o),5);
        tracep->chgSData(oldp+15,(vlSelf->id_opcode_info_o),12);
        tracep->chgQData(oldp+16,(vlSelf->id_rs1_rdata_o),64);
        tracep->chgQData(oldp+18,(vlSelf->id_rs2_rdata_o),64);
        tracep->chgQData(oldp+20,(vlSelf->id_imm_o),64);
        tracep->chgBit(oldp+22,(vlSelf->id_ilegl_instr_o));
        tracep->chgBit(oldp+23,(vlSelf->id_ecall_o));
        tracep->chgBit(oldp+24,(vlSelf->id_ebreak_o));
        tracep->chgBit(oldp+25,(vlSelf->id_mret_o));
        tracep->chgCData(oldp+26,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+27,((0x1fU & (vlSelf->instr_i 
                                            >> 7U))),5);
        tracep->chgCData(oldp+28,((7U & (vlSelf->instr_i 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+29,((0x1fU & (vlSelf->instr_i 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+30,((0x1fU & (vlSelf->instr_i 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+31,((vlSelf->instr_i 
                                   >> 0x19U)),7);
        tracep->chgBit(oldp+32,((0x13U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+33,((0x1bU == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+34,((0x33U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+35,((0x3bU == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+36,((0x63U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+37,((0x6fU == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+38,((0x67U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+39,((3U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+40,((0x23U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+41,((0x37U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+42,((0x17U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+43,((0x73U == (0x7fU & vlSelf->instr_i))));
        tracep->chgBit(oldp+44,((IData)((0x13U == (0x707fU 
                                                   & vlSelf->instr_i)))));
        tracep->chgBit(oldp+45,((IData)((0x1bU == (0x707fU 
                                                   & vlSelf->instr_i)))));
        tracep->chgBit(oldp+46,(((IData)((0x1013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+47,(((IData)((0x101bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+48,((IData)((0x2013U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+49,((IData)((0x3013U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+50,((IData)((0x4013U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+51,(((IData)((0x5013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+52,(((IData)((0x501bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+53,(((IData)((0x5013U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+54,(((IData)((0x501bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+55,((IData)((0x6013U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+56,((IData)((0x7013U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+57,(((IData)((0x33U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+58,(((IData)((0x3bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+59,(((IData)((0x33U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+60,(((IData)((0x3bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+61,(((IData)((0x1033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+62,(((IData)((0x103bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+63,(((IData)((0x2033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+64,(((IData)((0x3033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+65,(((IData)((0x4033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+66,(((IData)((0x5033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+67,(((IData)((0x503bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+68,(((IData)((0x5033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+69,(((IData)((0x503bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x20U == (vlSelf->instr_i 
                                              >> 0x19U)))));
        tracep->chgBit(oldp+70,(((IData)((0x6033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+71,(((IData)((0x7033U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0U == (vlSelf->instr_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+72,((IData)((0x63U == (0x707fU 
                                                   & vlSelf->instr_i)))));
        tracep->chgBit(oldp+73,((IData)((0x1063U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+74,((IData)((0x4063U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+75,((IData)((0x5063U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+76,((IData)((0x6063U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+77,((IData)((0x7063U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+78,((IData)((3U == (0x707fU 
                                                & vlSelf->instr_i)))));
        tracep->chgBit(oldp+79,((IData)((0x1003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+80,((IData)((0x2003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+81,((IData)((0x3003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+82,((IData)((0x4003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+83,((IData)((0x5003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+84,((IData)((0x6003U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+85,((IData)((0x23U == (0x707fU 
                                                   & vlSelf->instr_i)))));
        tracep->chgBit(oldp+86,((IData)((0x1023U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+87,((IData)((0x2023U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+88,((IData)((0x3023U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+89,(((IData)((0x73U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 & (0x302U == (vlSelf->instr_i 
                                               >> 0x14U)))));
        tracep->chgBit(oldp+90,((IData)((0x1073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+91,((IData)((0x2073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+92,((IData)((0x3073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+93,((IData)((0x5073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+94,((IData)((0x6073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+95,((IData)((0x7073U == 
                                         (0x707fU & vlSelf->instr_i)))));
        tracep->chgBit(oldp+96,(((((((((0x37U != (0x7fU 
                                                  & vlSelf->instr_i)) 
                                       & (0x17U != 
                                          (0x7fU & vlSelf->instr_i))) 
                                      & (0x6fU != (0x7fU 
                                                   & vlSelf->instr_i))) 
                                     & (~ (IData)((0x5073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->instr_i))))) 
                                    & (~ (IData)((0x6073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->instr_i))))) 
                                   & (~ (IData)((0x7073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->instr_i))))) 
                                  & (~ (IData)(vlSelf->id__DOT__rv64_ecall))) 
                                 & (~ (IData)(vlSelf->id__DOT__rv64_ebreak)))));
        tracep->chgBit(oldp+97,(((((0x33U == (0x7fU 
                                              & vlSelf->instr_i)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->instr_i))) 
                                  | (0x63U == (0x7fU 
                                               & vlSelf->instr_i))) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->instr_i)))));
        tracep->chgBit(oldp+98,(((((~ (IData)(vlSelf->id__DOT__rv64_ecall)) 
                                   & (~ (IData)(vlSelf->id__DOT__rv64_ebreak))) 
                                  & (0x63U != (0x7fU 
                                               & vlSelf->instr_i))) 
                                 & (0x23U != (0x7fU 
                                              & vlSelf->instr_i)))));
        tracep->chgQData(oldp+99,((((- (QData)((IData)(
                                                       (vlSelf->instr_i 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0xfe0U 
                                                                 & (vlSelf->instr_i 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->instr_i 
                                                                      >> 7U))))))),64);
        tracep->chgQData(oldp+101,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+103,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+105,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->instr_i))))),64);
        tracep->chgBit(oldp+107,(((((0x13U == (0x7fU 
                                               & vlSelf->instr_i)) 
                                    | (0x1bU == (0x7fU 
                                                 & vlSelf->instr_i))) 
                                   | (3U == (0x7fU 
                                             & vlSelf->instr_i))) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->instr_i)))));
        tracep->chgBit(oldp+108,(0U));
    }
}

void Vid___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vid___024root* const __restrict vlSelf = static_cast<Vid___024root*>(voidSelf);
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
