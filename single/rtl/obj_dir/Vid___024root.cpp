// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid.h for the primary calling header

#include "Vid___024root.h"
#include "Vid__Syms.h"

//==========

VL_INLINE_OPT void Vid___024root___combo__TOP__1(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->id_rs1_idx_o = (0x1fU & (vlSelf->instr_i 
                                     >> 0xfU));
    vlSelf->id_rs2_idx_o = (0x1fU & (vlSelf->instr_i 
                                     >> 0x14U));
    vlSelf->id_rd_idx_o = (0x1fU & (vlSelf->instr_i 
                                    >> 7U));
    vlSelf->id_opcode_info_o = (((0x13U == (0x7fU & vlSelf->instr_i)) 
                                 << 0xbU) | (((0x1bU 
                                               == (0x7fU 
                                                   & vlSelf->instr_i)) 
                                              << 0xaU) 
                                             | (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instr_i)) 
                                                 << 9U) 
                                                | (((0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instr_i)) 
                                                    << 8U) 
                                                   | (((0x63U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->instr_i)) 
                                                       << 7U) 
                                                      | (((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instr_i)) 
                                                          << 6U) 
                                                         | (((0x67U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->instr_i)) 
                                                             << 5U) 
                                                            | (((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->instr_i)) 
                                                                << 4U) 
                                                               | (((0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->instr_i)) 
                                                                   << 3U) 
                                                                  | (((0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->instr_i)) 
                                                                      << 2U) 
                                                                     | (((0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->instr_i)) 
                                                                         << 1U) 
                                                                        | (0x73U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->instr_i)))))))))))));
    vlSelf->id_rs2_en_o = ((((0x33U == (0x7fU & vlSelf->instr_i)) 
                             | (0x3bU == (0x7fU & vlSelf->instr_i))) 
                            | (0x63U == (0x7fU & vlSelf->instr_i))) 
                           | (0x23U == (0x7fU & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_i_imm = (((- (QData)((IData)(
                                                       (vlSelf->instr_i 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->instr_i 
                                                                >> 0x14U))));
    vlSelf->id__DOT__rv64_ecall = ((IData)((0x73U == 
                                            (0x707fU 
                                             & vlSelf->instr_i))) 
                                   & (0U == (vlSelf->instr_i 
                                             >> 0x14U)));
    vlSelf->id__DOT__rv64_ebreak = ((IData)((0x73U 
                                             == (0x707fU 
                                                 & vlSelf->instr_i))) 
                                    & (1U == (vlSelf->instr_i 
                                              >> 0x14U)));
    vlSelf->id_imm_o = vlSelf->id__DOT__rv64_i_imm;
    vlSelf->id__DOT__rv64_imm = (((((- (QData)((IData)(
                                                       ((((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instr_i)) 
                                                          | (0x1bU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->instr_i))) 
                                                         | (3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->instr_i))) 
                                                        | (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instr_i)))))) 
                                    & vlSelf->id__DOT__rv64_i_imm) 
                                   | ((- (QData)((IData)(
                                                         (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->instr_i))))) 
                                      & (((- (QData)((IData)(
                                                             (vlSelf->instr_i 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->instr_i 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->instr_i 
                                                                  >> 7U)))))))) 
                                  | ((- (QData)((IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->instr_i))))) 
                                     & (((- (QData)((IData)(
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
                                                                                >> 7U)))))))))) 
                                 | ((- (QData)((IData)(
                                                       (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->instr_i))))) 
                                    & (((- (QData)((IData)(
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
                                                                                >> 0x14U))))))))));
    vlSelf->id_rs1_en_o = ((((((((0x37U != (0x7fU & vlSelf->instr_i)) 
                                 & (0x17U != (0x7fU 
                                              & vlSelf->instr_i))) 
                                & (0x6fU != (0x7fU 
                                             & vlSelf->instr_i))) 
                               & (~ (IData)((0x5073U 
                                             == (0x707fU 
                                                 & vlSelf->instr_i))))) 
                              & (~ (IData)((0x6073U 
                                            == (0x707fU 
                                                & vlSelf->instr_i))))) 
                             & (~ (IData)((0x7073U 
                                           == (0x707fU 
                                               & vlSelf->instr_i))))) 
                            & (~ (IData)(vlSelf->id__DOT__rv64_ecall))) 
                           & (~ (IData)(vlSelf->id__DOT__rv64_ebreak)));
    vlSelf->id_rd_en_o = ((((~ (IData)(vlSelf->id__DOT__rv64_ecall)) 
                            & (~ (IData)(vlSelf->id__DOT__rv64_ebreak))) 
                           & (0x63U != (0x7fU & vlSelf->instr_i))) 
                          & (0x23U != (0x7fU & vlSelf->instr_i)));
}

void Vid___024root___eval(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___eval\n"); );
    // Body
    Vid___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vid___024root___change_request_1(Vid___024root* vlSelf);

VL_INLINE_OPT QData Vid___024root___change_request(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___change_request\n"); );
    // Body
    return (Vid___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vid___024root___change_request_1(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vid___024root___eval_debug_assertions(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rf_rs1_rdata_i & 0xfeU))) {
        Verilated::overWidthError("rf_rs1_rdata_i");}
    if (VL_UNLIKELY((vlSelf->rf_rs2_rdata_i & 0xfeU))) {
        Verilated::overWidthError("rf_rs2_rdata_i");}
}
#endif  // VL_DEBUG
