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
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp86;
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
            tracep->chgBit(oldp+17,(((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
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
            tracep->chgCData(oldp+22,((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
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
            tracep->chgQData(oldp+30,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
            tracep->chgSData(oldp+32,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
            tracep->chgSData(oldp+33,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
            tracep->chgCData(oldp+34,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
            tracep->chgSData(oldp+35,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
            tracep->chgCData(oldp+36,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
            tracep->chgQData(oldp+37,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
            tracep->chgQData(oldp+39,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
            tracep->chgQData(oldp+41,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
            tracep->chgBit(oldp+43,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
            tracep->chgSData(oldp+44,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
            tracep->chgBit(oldp+45,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
            tracep->chgBit(oldp+46,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
            tracep->chgBit(oldp+47,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
            tracep->chgBit(oldp+48,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
            tracep->chgBit(oldp+49,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
            tracep->chgBit(oldp+50,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
            tracep->chgBit(oldp+51,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
            tracep->chgQData(oldp+52,(((IData)((0U 
                                                != 
                                                (0x500U 
                                                 & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))
                                        : vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)),64);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
            VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
            VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
            VL_EXTEND_WI(65,1, __Vtemp64, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
            tracep->chgBit(oldp+54,((1U & ((((((((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                                 >> 5U) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                               ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))))) 
                                               | (((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                                   >> 4U) 
                                                  & (0U 
                                                     != 
                                                     (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                      ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))) 
                                              | (((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
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
                                             | (((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
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
                                            | (((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                                >> 1U) 
                                               & (~ 
                                                  (1U 
                                                   & __Vtemp58[2U])))) 
                                           | (1U & 
                                              ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                               & __Vtemp65[2U]))))));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 6U))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 5U))));
            tracep->chgBit(oldp+57,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                           >> 7U))));
            tracep->chgQData(oldp+58,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+60,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
            tracep->chgQData(oldp+61,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                        ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+63,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                        ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                            ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                        : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+65,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                        ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                        : 4ULL)),64);
            tracep->chgSData(oldp+67,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
            tracep->chgCData(oldp+68,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0xfU))),5);
            tracep->chgSData(oldp+69,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
            tracep->chgCData(oldp+70,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+71,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+72,((((IData)((0x63U 
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
            tracep->chgSData(oldp+73,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+74,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+75,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+76,((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+77,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+78,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+79,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+80,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+81,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+82,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+83,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+84,((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+85,((0x13U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+86,((0x1bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+87,((0x33U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+88,((0x3bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+89,((0x63U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+90,((0x6fU == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+91,((0x67U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+92,((3U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+93,((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+94,((0x37U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+95,((0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+96,((0x73U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+97,((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+98,((IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+99,(((IData)((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+100,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+101,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+102,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+103,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+104,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+105,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+106,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+107,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+108,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+109,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+110,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+111,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+112,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+113,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+114,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+115,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+116,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+117,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+118,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+119,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+120,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+121,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+122,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+123,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+124,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+125,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+126,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+127,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+128,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+129,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+130,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+131,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+132,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+133,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+134,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+135,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+136,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+137,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+138,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+139,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+140,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+141,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+142,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+143,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+144,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+145,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+146,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+147,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+148,((((((((((0x37U 
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
            tracep->chgBit(oldp+149,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgQData(oldp+150,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+152,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ifu_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+154,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+156,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ifu_instr))))),64);
            tracep->chgBit(oldp+160,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+161,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+162,((0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)),7);
            tracep->chgCData(oldp+163,((7U & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+164,((vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+165,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+166,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+167,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+168,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+169,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+170,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+171,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+172,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+173,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+174,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+175,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+176,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))));
            tracep->chgBit(oldp+177,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+178,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+179,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+180,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+181,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+182,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+183,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+184,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+185,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+186,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+187,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+188,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+189,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+190,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+191,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+192,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+193,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+194,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+195,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+196,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+197,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+198,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+199,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+200,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+201,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+202,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+203,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+204,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+205,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+206,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+207,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+208,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+209,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+210,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+211,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+212,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+213,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+214,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+215,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+216,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+217,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+218,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+219,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+220,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+221,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+222,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
            tracep->chgBit(oldp+223,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
            tracep->chgBit(oldp+224,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
            tracep->chgBit(oldp+225,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+226,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+227,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
            tracep->chgBit(oldp+228,((((((((((0x37U 
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
            tracep->chgBit(oldp+229,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgQData(oldp+230,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+232,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+234,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+236,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+238,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))),64);
            tracep->chgBit(oldp+240,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+241,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+244,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 9U))));
            tracep->chgBit(oldp+245,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 8U))));
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 7U))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 6U))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 5U))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 4U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 3U))));
            tracep->chgBit(oldp+251,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 2U))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            >> 1U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 9U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 8U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 7U))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 6U))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 5U))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 4U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 3U))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 2U))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 1U))));
            tracep->chgBit(oldp+262,((1U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            >> 5U))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            >> 4U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            >> 3U))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            >> 2U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            >> 1U))));
            tracep->chgBit(oldp+268,((1U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r))));
            tracep->chgBit(oldp+269,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r))) 
                                                    | (0U 
                                                       != 
                                                       (0x7eU 
                                                        & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))))));
            tracep->chgBit(oldp+270,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+271,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r))) 
                                                     | (0U 
                                                        != 
                                                        (0x7eU 
                                                         & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))) 
                                            | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+272,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+274,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+276,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgQData(oldp+278,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+280,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp68, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp69, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp70, __Vtemp68, __Vtemp69);
            VL_EXTEND_WI(65,1, __Vtemp71, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp72, __Vtemp70, __Vtemp71);
            tracep->chgQData(oldp+282,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp72[2U])))))),64);
            tracep->chgQData(oldp+284,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+286,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+288,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+290,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+292,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+294,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
            VL_EXTEND_WQ(65,64, __Vtemp75, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp76, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp77, __Vtemp75, __Vtemp76);
            VL_EXTEND_WI(65,1, __Vtemp78, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp79, __Vtemp77, __Vtemp78);
            tracep->chgBit(oldp+296,((1U & __Vtemp79[2U])));
            tracep->chgCData(oldp+297,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+298,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+302,((0U != (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                             ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))));
            tracep->chgBit(oldp+303,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                        ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))))));
            tracep->chgBit(oldp+304,((1U & (((IData)(
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
                                                          >> 0x3fU)))))));
            VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp83, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp84, __Vtemp82, __Vtemp83);
            VL_EXTEND_WI(65,1, __Vtemp85, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp86, __Vtemp84, __Vtemp85);
            tracep->chgBit(oldp+305,((1U & (~ (1U & 
                                               __Vtemp86[2U])))));
            tracep->chgBit(oldp+306,((1U & (~ (((IData)(
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
                                                             >> 0x3fU))))))));
        }
        tracep->chgBit(oldp+307,(vlSelf->clk));
        tracep->chgBit(oldp+308,(vlSelf->rst));
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
