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
    vlSelf->id_rs1_rdata_o = vlSelf->rf_rs1_rdata_i;
    vlSelf->id_rs2_rdata_o = vlSelf->rf_rs2_rdata_i;
    vlSelf->id_rs1_idx_o = (0x1fU & (vlSelf->instr_i 
                                     >> 0xfU));
    vlSelf->id_rs2_idx_o = (0x1fU & (vlSelf->instr_i 
                                     >> 0x14U));
    vlSelf->id_rd_idx_o = (0x1fU & (vlSelf->instr_i 
                                    >> 7U));
    vlSelf->id_csr_idx_o = (vlSelf->instr_i >> 0x14U);
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
    vlSelf->id_alu_info_o = (((((((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0U == (vlSelf->instr_i 
                                            >> 0x19U))) 
                                 | (IData)((0x13U == 
                                            (0x707fU 
                                             & vlSelf->instr_i)))) 
                                | ((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->instr_i))) 
                                   & (0U == (vlSelf->instr_i 
                                             >> 0x19U)))) 
                               | (IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->instr_i)))) 
                              << 9U) | (((((IData)(
                                                   (0x33U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->instr_i))) 
                                           & (0x20U 
                                              == (vlSelf->instr_i 
                                                  >> 0x19U))) 
                                          | ((IData)(
                                                     (0x3bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->instr_i))) 
                                             & (0x20U 
                                                == 
                                                (vlSelf->instr_i 
                                                 >> 0x19U)))) 
                                         << 8U) | (
                                                   ((((((IData)(
                                                                (0x1033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->instr_i))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->instr_i 
                                                            >> 0x19U))) 
                                                       | ((IData)(
                                                                  (0x1013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->instr_i))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->instr_i 
                                                              >> 0x19U)))) 
                                                      | ((IData)(
                                                                 (0x103bU 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->instr_i))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->instr_i 
                                                             >> 0x19U)))) 
                                                     | ((IData)(
                                                                (0x101bU 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->instr_i))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->instr_i 
                                                            >> 0x19U)))) 
                                                    << 7U) 
                                                   | (((((IData)(
                                                                 (0x2033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->instr_i))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->instr_i 
                                                             >> 0x19U))) 
                                                        | (IData)(
                                                                  (0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->instr_i)))) 
                                                       << 6U) 
                                                      | (((((IData)(
                                                                    (0x3033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->instr_i))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->instr_i 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     (0x3013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->instr_i)))) 
                                                          << 5U) 
                                                         | (((((IData)(
                                                                       (0x4033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->instr_i))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->instr_i 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->instr_i)))) 
                                                             << 4U) 
                                                            | (((((((IData)(
                                                                            (0x5033U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->instr_i))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->instr_i 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(
                                                                              (0x5013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->instr_i 
                                                                          >> 0x19U)))) 
                                                                  | ((IData)(
                                                                             (0x503bU 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->instr_i))) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->instr_i 
                                                                         >> 0x19U)))) 
                                                                 | ((IData)(
                                                                            (0x501bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->instr_i))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->instr_i 
                                                                        >> 0x19U)))) 
                                                                << 3U) 
                                                               | (((((((IData)(
                                                                               (0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->instr_i 
                                                                           >> 0x19U))) 
                                                                      | ((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                         & (0x20U 
                                                                            == 
                                                                            (vlSelf->instr_i 
                                                                             >> 0x19U)))) 
                                                                     | ((IData)(
                                                                                (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->instr_i 
                                                                            >> 0x19U)))) 
                                                                    | ((IData)(
                                                                               (0x501bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->instr_i 
                                                                           >> 0x19U)))) 
                                                                   << 2U) 
                                                                  | (((((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->instr_i 
                                                                            >> 0x19U))) 
                                                                       | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i)))) 
                                                                      << 1U) 
                                                                     | (((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i))) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->instr_i 
                                                                             >> 0x19U))) 
                                                                        | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr_i)))))))))))));
    vlSelf->id_branch_info_o = (((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->instr_i))) 
                                 << 5U) | (((IData)(
                                                    (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->instr_i))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->instr_i))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->instr_i))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->instr_i))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0x7063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->instr_i))))))));
    vlSelf->id_ld_st_info_o = (((IData)((3U == (0x707fU 
                                                & vlSelf->instr_i))) 
                                << 0xaU) | (((IData)(
                                                     (0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->instr_i))) 
                                             << 9U) 
                                            | (((IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->instr_i))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->instr_i))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0x4003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->instr_i))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0x5003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->instr_i))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0x6003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->instr_i))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0x23U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->instr_i))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0x1023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->instr_i))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0x2023U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->instr_i))) 
                                                                     << 1U) 
                                                                    | (IData)(
                                                                              (0x3023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->instr_i)))))))))))));
    vlSelf->id__DOT__rv64_imm = ((((((- (QData)((IData)(
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
                                     & (((- (QData)((IData)(
                                                            (vlSelf->instr_i 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->instr_i 
                                                                     >> 0x14U))))) 
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
                                          << 0xdU) 
                                         | (QData)((IData)(
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
                                         << 0x15U) 
                                        | (QData)((IData)(
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
                                                                       >> 0x14U)))))))))) 
                                 | ((- (QData)((IData)(
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->instr_i)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instr_i)))))) 
                                    & (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->instr_i 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->instr_i))))));
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
    vlSelf->id__DOT__rv64_mret = ((IData)((0x73U == 
                                           (0x707fU 
                                            & vlSelf->instr_i))) 
                                  & (0x302U == (vlSelf->instr_i 
                                                >> 0x14U)));
    vlSelf->id__DOT__rv64_csrrw = (IData)((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_csrrs = (IData)((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_csrrc = (IData)((0x3073U 
                                           == (0x707fU 
                                               & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_csrrwi = (IData)((0x5073U 
                                            == (0x707fU 
                                                & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_csrrsi = (IData)((0x6073U 
                                            == (0x707fU 
                                                & vlSelf->instr_i)));
    vlSelf->id__DOT__rv64_csrrci = (IData)((0x7073U 
                                            == (0x707fU 
                                                & vlSelf->instr_i)));
    vlSelf->id_imm_o = vlSelf->id__DOT__rv64_imm;
    vlSelf->id_ecall_o = vlSelf->id__DOT__rv64_ecall;
    vlSelf->id_ebreak_o = vlSelf->id__DOT__rv64_ebreak;
    vlSelf->id_mret_o = vlSelf->id__DOT__rv64_mret;
    vlSelf->id_rd_wen_o = (((((~ (IData)(vlSelf->id__DOT__rv64_ecall)) 
                              & (~ (IData)(vlSelf->id__DOT__rv64_ebreak))) 
                             & (~ (IData)(vlSelf->id__DOT__rv64_mret))) 
                            & (0x63U != (0x7fU & vlSelf->instr_i))) 
                           & (0x23U != (0x7fU & vlSelf->instr_i)));
    vlSelf->id_csr_info_o = (((IData)(vlSelf->id__DOT__rv64_csrrw) 
                              << 5U) | (((IData)(vlSelf->id__DOT__rv64_csrrs) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->id__DOT__rv64_csrrc) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->id__DOT__rv64_csrrwi) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->id__DOT__rv64_csrrsi) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->id__DOT__rv64_csrrci))))));
    vlSelf->id_csr_wen_o = ((((((IData)(vlSelf->id__DOT__rv64_csrrw) 
                                | (IData)(vlSelf->id__DOT__rv64_csrrs)) 
                               | (IData)(vlSelf->id__DOT__rv64_csrrc)) 
                              | (IData)(vlSelf->id__DOT__rv64_csrrwi)) 
                             | (IData)(vlSelf->id__DOT__rv64_csrrsi)) 
                            | (IData)(vlSelf->id__DOT__rv64_csrrci));
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
}
#endif  // VL_DEBUG
