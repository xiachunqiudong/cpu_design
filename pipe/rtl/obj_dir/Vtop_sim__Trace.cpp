// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_sim__Syms.h"


void Vtop_sim___024root__traceChgSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_sim___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop_sim___024root* const __restrict vlSelf = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop_sim___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop_sim___024root__traceChgSub0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top_sim__DOT__u_IF__DOT__pc_r),64);
            tracep->chgQData(oldp+2,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                        ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                            ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                        : vlSelf->top_sim__DOT__u_IF__DOT__pc_r) 
                                      + ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                          ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                          : 4ULL))),64);
            tracep->chgIData(oldp+4,(vlSelf->top_sim__DOT__ifu_instr),32);
            tracep->chgBit(oldp+5,(vlSelf->top_sim__DOT__ifu_prdt_taken));
            tracep->chgBit(oldp+6,((0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))));
            tracep->chgQData(oldp+7,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
            tracep->chgIData(oldp+9,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
            tracep->chgBit(oldp+10,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
            tracep->chgBit(oldp+11,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
            tracep->chgBit(oldp+12,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
            tracep->chgBit(oldp+13,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
            tracep->chgCData(oldp+14,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+16,((vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+17,(((((((IData)((0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                         | (IData)(
                                                   (0x2073U 
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
            tracep->chgSData(oldp+18,((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                        << 0xbU) | 
                                       (((0x1bU == 
                                          (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                         << 0xaU) | 
                                        (((0x33U == 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                          << 9U) | 
                                         (((0x3bU == 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                           << 8U) | 
                                          (((0x63U 
                                             == (0x7fU 
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
            tracep->chgSData(oldp+19,((((((((IData)(
                                                    (0x33U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                            & (0U == 
                                               (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U))) 
                                           | (IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                          | ((IData)(
                                                     (0x3bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                             & (0U 
                                                == 
                                                (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                 >> 0x19U)))) 
                                         | (IData)(
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                                        << 9U) | ((
                                                   (((IData)(
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
            tracep->chgCData(oldp+20,((((IData)((0x63U 
                                                 == 
                                                 (0x707fU 
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
            tracep->chgSData(oldp+21,((((IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                        << 0xaU) | 
                                       (((IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                         << 9U) | (
                                                   ((IData)(
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
            tracep->chgCData(oldp+22,((((IData)((0x1073U 
                                                 == 
                                                 (0x707fU 
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
            tracep->chgQData(oldp+23,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
            tracep->chgBit(oldp+25,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+27,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
            tracep->chgBit(oldp+28,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
            tracep->chgBit(oldp+29,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 6U))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 5U))));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 7U))));
            tracep->chgQData(oldp+33,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+35,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
            tracep->chgQData(oldp+36,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                        ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+38,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                        ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                            ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                        : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+40,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                        ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                        : 4ULL)),64);
            tracep->chgSData(oldp+42,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
            tracep->chgCData(oldp+43,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0xfU))),5);
            tracep->chgSData(oldp+44,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
            tracep->chgCData(oldp+45,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+46,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+47,((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x14U)),12);
            tracep->chgSData(oldp+48,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+49,((((IData)((0x63U 
                                                 == 
                                                 (0x707fU 
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
            tracep->chgSData(oldp+50,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+51,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+52,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+53,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+54,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+55,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+56,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+57,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+58,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+59,((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+60,((0x13U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+61,((0x1bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+62,((0x33U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+63,((0x3bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+64,((0x63U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+65,((0x6fU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+66,((0x67U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+67,((3U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+68,((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+69,((0x37U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+70,((0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+71,((0x73U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+72,((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+73,((IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+74,(((IData)((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+75,(((IData)((0x101bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+76,((IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+77,((IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+78,((IData)((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+79,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+80,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+81,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+82,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+83,((IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+84,((IData)((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+85,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+86,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+87,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+88,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+89,(((IData)((0x1033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+90,(((IData)((0x103bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+91,(((IData)((0x2033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+92,(((IData)((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+93,(((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+94,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+95,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+96,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+97,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+98,(((IData)((0x6033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+99,(((IData)((0x7033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+100,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+101,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+102,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+103,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+104,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+105,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+106,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+107,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+108,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+109,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+110,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+111,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+112,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+113,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+114,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+115,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+116,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+117,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+118,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+119,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+120,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+121,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+122,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+123,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
            tracep->chgBit(oldp+124,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgQData(oldp+125,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+127,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ifu_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+129,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+131,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
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
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ifu_instr))))),64);
            tracep->chgBit(oldp+135,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+136,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+137,((0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)),7);
            tracep->chgCData(oldp+138,((7U & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+139,((vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+140,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+141,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+142,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+143,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+144,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+145,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+146,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+147,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+148,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+149,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+150,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+151,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+152,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+153,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+154,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+155,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+156,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+157,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+158,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+159,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+160,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+161,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+162,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+163,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+164,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+165,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+166,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+167,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+168,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+169,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+170,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+171,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+172,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+173,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+174,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+175,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+176,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+177,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+178,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+179,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+180,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+181,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+182,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+183,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+184,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+185,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+186,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+187,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+188,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+189,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+190,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+191,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+192,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+193,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+194,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+195,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+196,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+197,((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+198,((IData)((0x2073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+199,((IData)((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+200,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+201,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+202,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
            tracep->chgBit(oldp+203,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret)))));
            tracep->chgBit(oldp+204,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgQData(oldp+205,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+207,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+209,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+211,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
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
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))),64);
            tracep->chgBit(oldp+215,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+216,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
        }
        tracep->chgBit(oldp+217,(vlSelf->clk));
        tracep->chgBit(oldp+218,(vlSelf->rst));
    }
}

void Vtop_sim___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop_sim___024root* const __restrict vlSelf = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
