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
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp98;
    VlWide<3>/*95:0*/ __Vtemp99;
    VlWide<3>/*95:0*/ __Vtemp100;
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp106;
    VlWide<3>/*95:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
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
            tracep->chgQData(oldp+7,((vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r 
                                      & (- (QData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))))),64);
            tracep->chgIData(oldp+9,(vlSelf->top_sim__DOT__ID_instr),32);
            tracep->chgBit(oldp+10,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+12,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))));
            tracep->chgBit(oldp+14,(vlSelf->top_sim__DOT__ID_valid));
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+16,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+17,(((0U == (0x1fU 
                                               & (vlSelf->top_sim__DOT__ID_instr 
                                                  >> 0xfU)))
                                        ? 0ULL : (((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                   & ((0x1fU 
                                                       & (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                                   ? vlSelf->top_sim__DOT__wb_rd_wdata
                                                   : 
                                                  ((0x1eU 
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
            tracep->chgQData(oldp+19,(((0U == (0x1fU 
                                               & (vlSelf->top_sim__DOT__ID_instr 
                                                  >> 0x14U)))
                                        ? 0ULL : (((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                   & ((0x1fU 
                                                       & (vlSelf->top_sim__DOT__ID_instr 
                                                          >> 0x14U)) 
                                                      == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                                   ? vlSelf->top_sim__DOT__wb_rd_wdata
                                                   : 
                                                  ((0x1eU 
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
            tracep->chgSData(oldp+21,((vlSelf->top_sim__DOT__ID_instr 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+22,(((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+23,((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        << 0xbU) | 
                                       (((0x1bU == 
                                          (0x7fU & vlSelf->top_sim__DOT__ID_instr)) 
                                         << 0xaU) | 
                                        (((0x33U == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr)) 
                                          << 9U) | 
                                         (((0x3bU == 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr)) 
                                           << 8U) | 
                                          (((0x63U 
                                             == (0x7fU 
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
            tracep->chgSData(oldp+24,((((((((IData)(
                                                    (0x33U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__ID_instr))) 
                                            & (0U == 
                                               (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U))) 
                                           | (IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__ID_instr)))) 
                                          | ((IData)(
                                                     (0x3bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__ID_instr))) 
                                             & (0U 
                                                == 
                                                (vlSelf->top_sim__DOT__ID_instr 
                                                 >> 0x19U)))) 
                                         | (IData)(
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top_sim__DOT__ID_instr)))) 
                                        << 9U) | ((
                                                   (((IData)(
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
            tracep->chgCData(oldp+25,((((IData)((0x63U 
                                                 == 
                                                 (0x707fU 
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
            tracep->chgSData(oldp+26,((((IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                        << 0xaU) | 
                                       (((IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                         << 9U) | (
                                                   ((IData)(
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
            tracep->chgCData(oldp+27,((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))))),6);
            tracep->chgQData(oldp+28,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
            tracep->chgBit(oldp+30,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+32,(vlSelf->top_sim__DOT__id_load_use));
            tracep->chgBit(oldp+33,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
            tracep->chgBit(oldp+34,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
            tracep->chgBit(oldp+35,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
            tracep->chgQData(oldp+36,(vlSelf->top_sim__DOT__EX_pc),64);
            tracep->chgBit(oldp+38,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgSData(oldp+39,(vlSelf->top_sim__DOT__EX_optype_info),12);
            tracep->chgSData(oldp+40,(vlSelf->top_sim__DOT__EX_alu_info),10);
            tracep->chgCData(oldp+41,(vlSelf->top_sim__DOT__EX_branch_info),6);
            tracep->chgSData(oldp+42,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),11);
            tracep->chgCData(oldp+43,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),6);
            tracep->chgBit(oldp+44,((((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                      >> 4U) & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgCData(oldp+45,(vlSelf->top_sim__DOT__EX_rs1_idx),5);
            tracep->chgCData(oldp+46,(vlSelf->top_sim__DOT__EX_rs2_idx),5);
            tracep->chgQData(oldp+47,(vlSelf->top_sim__DOT__EX_rs1_rdata),64);
            tracep->chgQData(oldp+49,(vlSelf->top_sim__DOT__EX_rs2_rdata),64);
            tracep->chgQData(oldp+51,((vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),64);
            tracep->chgBit(oldp+53,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgSData(oldp+54,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),12);
            tracep->chgBit(oldp+55,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgCData(oldp+56,(vlSelf->top_sim__DOT__EX_rd_idx),5);
            tracep->chgBit(oldp+57,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+58,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+59,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+60,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+61,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+62,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+63,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
            tracep->chgQData(oldp+64,(((IData)((0U 
                                                != 
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
            VL_EXTEND_WQ(65,64, __Vtemp68, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp69, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp70, __Vtemp68, __Vtemp69);
            VL_EXTEND_WI(65,1, __Vtemp71, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp72, __Vtemp70, __Vtemp71);
            VL_EXTEND_WQ(65,64, __Vtemp75, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp76, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp77, __Vtemp75, __Vtemp76);
            VL_EXTEND_WI(65,1, __Vtemp78, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp79, __Vtemp77, __Vtemp78);
            tracep->chgBit(oldp+66,((1U & ((((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
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
                                                     & __Vtemp72[2U])))) 
                                             | (1U 
                                                & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                   & __Vtemp79[2U]))) 
                                            | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                               >> 6U)) 
                                           | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                              >> 5U)))));
            tracep->chgQData(oldp+67,((((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                         ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                         : vlSelf->top_sim__DOT__EX_pc) 
                                       + (vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r 
                                          & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid)))))),64);
            tracep->chgQData(oldp+69,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgSData(oldp+71,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
            tracep->chgSData(oldp+72,(vlSelf->top_sim__DOT__MEM_ld_st_info),11);
            tracep->chgBit(oldp+73,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgSData(oldp+74,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
            tracep->chgBit(oldp+75,(vlSelf->top_sim__DOT__MEM_rd_wen));
            tracep->chgCData(oldp+76,(vlSelf->top_sim__DOT__MEM_rd_idx),5);
            tracep->chgQData(oldp+77,(vlSelf->top_sim__DOT__MEM_rs2_rdata),64);
            tracep->chgQData(oldp+79,(vlSelf->top_sim__DOT__MEM_alu_res),64);
            tracep->chgQData(oldp+81,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgQData(oldp+83,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgBit(oldp+85,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+86,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+87,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+88,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+89,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+90,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+91,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
            tracep->chgQData(oldp+92,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+94,((1U & ((((IData)(
                                                     (0U 
                                                      != 
                                                      (0x220U 
                                                       & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info)))) 
                                             & (IData)(vlSelf->top_sim__DOT__MEM_alu_res)) 
                                            | ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x110U 
                                                         & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info)))) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))) 
                                           | (((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                               >> 7U) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))))));
            tracep->chgBit(oldp+95,((1U & (((((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                              >> 2U) 
                                             & (IData)(vlSelf->top_sim__DOT__MEM_alu_res)) 
                                            | (((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                >> 1U) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))) 
                                           | ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))))));
            tracep->chgQData(oldp+96,(vlSelf->top_sim__DOT__WB_pc),64);
            tracep->chgSData(oldp+98,(vlSelf->top_sim__DOT__WB_optype_info),12);
            tracep->chgBit(oldp+99,(vlSelf->top_sim__DOT__WB_csr_wen));
            tracep->chgSData(oldp+100,(vlSelf->top_sim__DOT__WB_csr_idx),12);
            tracep->chgQData(oldp+101,(vlSelf->top_sim__DOT__WB_csr_wdata),64);
            tracep->chgBit(oldp+103,(vlSelf->top_sim__DOT__WB_rd_wen));
            tracep->chgCData(oldp+104,(vlSelf->top_sim__DOT__WB_rd_idx),5);
            tracep->chgQData(oldp+105,(vlSelf->top_sim__DOT__WB_alu_res),64);
            tracep->chgQData(oldp+107,(vlSelf->top_sim__DOT__WB_csr_rdata),64);
            tracep->chgQData(oldp+109,(vlSelf->top_sim__DOT__WB_mem_rdata),64);
            tracep->chgBit(oldp+111,(vlSelf->top_sim__DOT__WB_pc_misalign));
            tracep->chgBit(oldp+112,(vlSelf->top_sim__DOT__WB_if_bus_err));
            tracep->chgBit(oldp+113,(vlSelf->top_sim__DOT__WB_ilegl_instr));
            tracep->chgBit(oldp+114,(vlSelf->top_sim__DOT__WB_ecall));
            tracep->chgBit(oldp+115,(vlSelf->top_sim__DOT__WB_ebreak));
            tracep->chgBit(oldp+116,(vlSelf->top_sim__DOT__WB_mret));
            tracep->chgBit(oldp+117,(vlSelf->top_sim__DOT__WB_ld_misalign));
            tracep->chgBit(oldp+118,(vlSelf->top_sim__DOT__WB_ld_bus_err));
            tracep->chgBit(oldp+119,(vlSelf->top_sim__DOT__WB_st_misalign));
            tracep->chgBit(oldp+120,(vlSelf->top_sim__DOT__WB_st_bus_err));
            tracep->chgQData(oldp+121,(vlSelf->top_sim__DOT__wb_rd_wdata),64);
            tracep->chgQData(oldp+123,((0xfffffffffffffff8ULL 
                                        & vlSelf->top_sim__DOT__MEM_alu_res)),64);
            tracep->chgBit(oldp+125,((IData)((0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
            tracep->chgCData(oldp+126,(vlSelf->top_sim__DOT__ram_byte_en),8);
            tracep->chgQData(oldp+127,((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+129,((IData)((0U != 
                                              (0x7f0U 
                                               & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
            tracep->chgQData(oldp+130,(vlSelf->top_sim__DOT__ram_rdata),64);
            tracep->chgBit(oldp+132,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 7U))));
            tracep->chgQData(oldp+135,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+137,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
            tracep->chgQData(oldp+138,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                         ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+140,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                             ? 0ULL
                                             : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                         : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+142,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                         : 4ULL)),64);
            tracep->chgSData(oldp+144,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
            tracep->chgCData(oldp+145,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0xfU))),5);
            tracep->chgSData(oldp+146,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+148,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+149,((((IData)((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                         << 5U) | (
                                                   ((IData)(
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
            tracep->chgSData(oldp+150,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+151,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+152,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                          | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+153,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+154,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                       & (0x63U != 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x23U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+155,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+156,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i) 
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
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                               | (0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                              | (0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                             | (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                            & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_rd_idx_i) 
                                               == (0x1fU 
                                                   & (vlSelf->top_sim__DOT__ifu_instr 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+157,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+158,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+159,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+160,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+161,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+162,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+163,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+164,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+165,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+166,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+167,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+168,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+169,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+170,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+171,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+172,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+173,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+174,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+175,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+176,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+177,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+178,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+179,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+180,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+181,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+182,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+183,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+184,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+185,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+186,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+187,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+188,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+189,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+190,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+191,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+192,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+193,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+194,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+195,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+196,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+197,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+198,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+199,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+200,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+201,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+202,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+203,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+204,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+205,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+206,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+207,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+208,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+209,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+210,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+211,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+212,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+213,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+214,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+215,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+216,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+217,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+218,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+219,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+220,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+221,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+222,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+223,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+224,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+225,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+226,((((((((((0x37U 
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
            tracep->chgBit(oldp+227,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgQData(oldp+228,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+230,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ifu_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+232,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+234,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+236,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ifu_instr))))),64);
            tracep->chgBit(oldp+238,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+239,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+240,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
            tracep->chgQData(oldp+241,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
            tracep->chgIData(oldp+243,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
            tracep->chgBit(oldp+244,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
            tracep->chgBit(oldp+245,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
            tracep->chgBit(oldp+246,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
            tracep->chgCData(oldp+247,((0x7fU & vlSelf->top_sim__DOT__ID_instr)),7);
            tracep->chgCData(oldp+248,((7U & (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+249,((vlSelf->top_sim__DOT__ID_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+250,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+251,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+252,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+253,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+254,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+255,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+256,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+257,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+258,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+259,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+260,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+261,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+262,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+263,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+264,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+265,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+266,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+267,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+268,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+269,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+270,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+271,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+272,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+273,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+274,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+275,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+276,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+277,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+278,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+279,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+280,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+281,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+282,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+283,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+284,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+285,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+286,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+287,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+288,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+289,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+290,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+291,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+292,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+293,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+294,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+295,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+296,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+297,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+298,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+299,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+300,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+301,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+302,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+303,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+304,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+305,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+306,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+307,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
            tracep->chgBit(oldp+308,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
            tracep->chgBit(oldp+309,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
            tracep->chgBit(oldp+310,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+311,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+312,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
            tracep->chgBit(oldp+313,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret)))));
            tracep->chgBit(oldp+314,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+315,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+317,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+319,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+321,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
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
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ID_instr))))),64);
            tracep->chgBit(oldp+325,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+326,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+327,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0]),64);
            tracep->chgQData(oldp+329,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1]),64);
            tracep->chgQData(oldp+331,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2]),64);
            tracep->chgQData(oldp+333,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3]),64);
            tracep->chgQData(oldp+335,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4]),64);
            tracep->chgQData(oldp+337,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5]),64);
            tracep->chgQData(oldp+339,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6]),64);
            tracep->chgQData(oldp+341,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7]),64);
            tracep->chgQData(oldp+343,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8]),64);
            tracep->chgQData(oldp+345,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9]),64);
            tracep->chgQData(oldp+347,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[10]),64);
            tracep->chgQData(oldp+349,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[11]),64);
            tracep->chgQData(oldp+351,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[12]),64);
            tracep->chgQData(oldp+353,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[13]),64);
            tracep->chgQData(oldp+355,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[14]),64);
            tracep->chgQData(oldp+357,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[15]),64);
            tracep->chgQData(oldp+359,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[16]),64);
            tracep->chgQData(oldp+361,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[17]),64);
            tracep->chgQData(oldp+363,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[18]),64);
            tracep->chgQData(oldp+365,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[19]),64);
            tracep->chgQData(oldp+367,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[20]),64);
            tracep->chgQData(oldp+369,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[21]),64);
            tracep->chgQData(oldp+371,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[22]),64);
            tracep->chgQData(oldp+373,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[23]),64);
            tracep->chgQData(oldp+375,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[24]),64);
            tracep->chgQData(oldp+377,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[25]),64);
            tracep->chgQData(oldp+379,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[26]),64);
            tracep->chgQData(oldp+381,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[27]),64);
            tracep->chgQData(oldp+383,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[28]),64);
            tracep->chgQData(oldp+385,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[29]),64);
            tracep->chgQData(oldp+387,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[30]),64);
            tracep->chgQData(oldp+389,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+391,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+393,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+395,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+397,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+399,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+401,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+403,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+405,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+407,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+409,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+411,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+413,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+415,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+417,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+419,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+421,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+423,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+425,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+427,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+429,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+431,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+433,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+435,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+437,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+439,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+441,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+443,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+445,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+447,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+449,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[30]),64);
            tracep->chgBit(oldp+451,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+452,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+453,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgBit(oldp+454,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgQData(oldp+455,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
            tracep->chgSData(oldp+457,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
            tracep->chgSData(oldp+458,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
            tracep->chgCData(oldp+459,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
            tracep->chgSData(oldp+460,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
            tracep->chgCData(oldp+461,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
            tracep->chgCData(oldp+462,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r),5);
            tracep->chgCData(oldp+463,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r),5);
            tracep->chgQData(oldp+464,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
            tracep->chgQData(oldp+466,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
            tracep->chgQData(oldp+468,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
            tracep->chgBit(oldp+470,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
            tracep->chgSData(oldp+471,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
            tracep->chgBit(oldp+472,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r));
            tracep->chgCData(oldp+473,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r),5);
            tracep->chgBit(oldp+474,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
            tracep->chgBit(oldp+475,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
            tracep->chgBit(oldp+476,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
            tracep->chgBit(oldp+477,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
            tracep->chgBit(oldp+478,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
            tracep->chgBit(oldp+479,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
            VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp83, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp84, __Vtemp82, __Vtemp83);
            VL_EXTEND_WI(65,1, __Vtemp85, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp86, __Vtemp84, __Vtemp85);
            VL_EXTEND_WQ(65,64, __Vtemp89, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp90, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp91, __Vtemp89, __Vtemp90);
            VL_EXTEND_WI(65,1, __Vtemp92, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp93, __Vtemp91, __Vtemp92);
            tracep->chgBit(oldp+480,((1U & ((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
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
                                                    & __Vtemp86[2U])))) 
                                            | (1U & 
                                               ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                                & __Vtemp93[2U]))))));
            tracep->chgBit(oldp+481,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+482,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 5U))));
            tracep->chgQData(oldp+483,(((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                         ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                         : vlSelf->top_sim__DOT__EX_pc)),64);
            tracep->chgBit(oldp+485,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+486,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+487,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+488,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+489,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+490,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+491,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+492,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+494,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+495,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+496,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+497,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+498,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+499,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+500,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+503,((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))));
            tracep->chgBit(oldp+504,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+505,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+509,((1U & (IData)(vlSelf->top_sim__DOT__EX_branch_info))));
            tracep->chgBit(oldp+510,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x7eU 
                                                        & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))))));
            tracep->chgBit(oldp+511,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+512,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x7eU 
                                                         & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                            | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+513,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+515,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+517,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgQData(oldp+519,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+521,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp96, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp97, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp98, __Vtemp96, __Vtemp97);
            VL_EXTEND_WI(65,1, __Vtemp99, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp100, __Vtemp98, __Vtemp99);
            tracep->chgQData(oldp+523,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp100[2U])))))),64);
            tracep->chgQData(oldp+525,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+527,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+529,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+531,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+533,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+535,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
            VL_EXTEND_WQ(65,64, __Vtemp103, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp104, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp105, __Vtemp103, __Vtemp104);
            VL_EXTEND_WI(65,1, __Vtemp106, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp107, __Vtemp105, __Vtemp106);
            tracep->chgBit(oldp+537,((1U & __Vtemp107[2U])));
            tracep->chgCData(oldp+538,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+539,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
            tracep->chgQData(oldp+541,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+543,((0U != (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                             ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))));
            tracep->chgBit(oldp+544,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                                        ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)))))));
            tracep->chgBit(oldp+545,((1U & (((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp111, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
            VL_ADD_W(3, __Vtemp112, __Vtemp110, __Vtemp111);
            VL_EXTEND_WI(65,1, __Vtemp113, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            VL_ADD_W(3, __Vtemp114, __Vtemp112, __Vtemp113);
            tracep->chgBit(oldp+546,((1U & (~ (1U & 
                                               __Vtemp114[2U])))));
            tracep->chgBit(oldp+547,((1U & (~ (((IData)(
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
            tracep->chgQData(oldp+548,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r),64);
            tracep->chgSData(oldp+550,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r),12);
            tracep->chgSData(oldp+551,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r),11);
            tracep->chgBit(oldp+552,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r));
            tracep->chgSData(oldp+553,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r),12);
            tracep->chgBit(oldp+554,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r));
            tracep->chgCData(oldp+555,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r),5);
            tracep->chgQData(oldp+556,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r),64);
            tracep->chgQData(oldp+558,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r),64);
            tracep->chgQData(oldp+560,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r),64);
            tracep->chgQData(oldp+562,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r),64);
            tracep->chgBit(oldp+564,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r));
            tracep->chgBit(oldp+565,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r));
            tracep->chgBit(oldp+566,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r));
            tracep->chgBit(oldp+567,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r));
            tracep->chgBit(oldp+568,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r));
            tracep->chgBit(oldp+569,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r));
            tracep->chgBit(oldp+570,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+573,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+574,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+575,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+576,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+577,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+578,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+579,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+580,((1U & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))));
            tracep->chgCData(oldp+581,(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata),8);
            tracep->chgSData(oldp+582,(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata),16);
            tracep->chgIData(oldp+583,(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata),32);
            tracep->chgQData(oldp+584,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))),64);
            tracep->chgQData(oldp+586,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                                >> 0xfU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))),64);
            tracep->chgQData(oldp+588,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata)))),64);
            tracep->chgQData(oldp+590,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata))),64);
            tracep->chgQData(oldp+592,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))),64);
            tracep->chgQData(oldp+594,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))),64);
            tracep->chgCData(oldp+596,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                 ? 0x80U
                                                 : 0x40U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                 ? 0x20U
                                                 : 0x10U))
                                         : ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                 ? 2U
                                                 : 1U)))),8);
            tracep->chgCData(oldp+597,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 1U)))
                                             ? 0xc0U
                                             : 0x30U)
                                         : ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 1U)))
                                             ? 0xcU
                                             : 3U))),8);
            tracep->chgCData(oldp+598,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0U) : 0xfU)),8);
            tracep->chgSData(oldp+599,((0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))),10);
            tracep->chgQData(oldp+600,(vlSelf->top_sim__DOT__u_ram__DOT__rdata),64);
            tracep->chgQData(oldp+602,(vlSelf->top_sim__DOT__u_ram__DOT__mask),64);
            tracep->chgQData(oldp+604,(vlSelf->top_sim__DOT__u_ram__DOT__wdata),64);
            tracep->chgBit(oldp+606,(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSelf->top_sim__DOT__WB_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+608,((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))));
        }
        tracep->chgBit(oldp+609,(vlSelf->clk));
        tracep->chgBit(oldp+610,(vlSelf->rst));
        tracep->chgQData(oldp+611,(vlSelf->reg_data_o[0]),64);
        tracep->chgQData(oldp+613,(vlSelf->reg_data_o[1]),64);
        tracep->chgQData(oldp+615,(vlSelf->reg_data_o[2]),64);
        tracep->chgQData(oldp+617,(vlSelf->reg_data_o[3]),64);
        tracep->chgQData(oldp+619,(vlSelf->reg_data_o[4]),64);
        tracep->chgQData(oldp+621,(vlSelf->reg_data_o[5]),64);
        tracep->chgQData(oldp+623,(vlSelf->reg_data_o[6]),64);
        tracep->chgQData(oldp+625,(vlSelf->reg_data_o[7]),64);
        tracep->chgQData(oldp+627,(vlSelf->reg_data_o[8]),64);
        tracep->chgQData(oldp+629,(vlSelf->reg_data_o[9]),64);
        tracep->chgQData(oldp+631,(vlSelf->reg_data_o[10]),64);
        tracep->chgQData(oldp+633,(vlSelf->reg_data_o[11]),64);
        tracep->chgQData(oldp+635,(vlSelf->reg_data_o[12]),64);
        tracep->chgQData(oldp+637,(vlSelf->reg_data_o[13]),64);
        tracep->chgQData(oldp+639,(vlSelf->reg_data_o[14]),64);
        tracep->chgQData(oldp+641,(vlSelf->reg_data_o[15]),64);
        tracep->chgQData(oldp+643,(vlSelf->reg_data_o[16]),64);
        tracep->chgQData(oldp+645,(vlSelf->reg_data_o[17]),64);
        tracep->chgQData(oldp+647,(vlSelf->reg_data_o[18]),64);
        tracep->chgQData(oldp+649,(vlSelf->reg_data_o[19]),64);
        tracep->chgQData(oldp+651,(vlSelf->reg_data_o[20]),64);
        tracep->chgQData(oldp+653,(vlSelf->reg_data_o[21]),64);
        tracep->chgQData(oldp+655,(vlSelf->reg_data_o[22]),64);
        tracep->chgQData(oldp+657,(vlSelf->reg_data_o[23]),64);
        tracep->chgQData(oldp+659,(vlSelf->reg_data_o[24]),64);
        tracep->chgQData(oldp+661,(vlSelf->reg_data_o[25]),64);
        tracep->chgQData(oldp+663,(vlSelf->reg_data_o[26]),64);
        tracep->chgQData(oldp+665,(vlSelf->reg_data_o[27]),64);
        tracep->chgQData(oldp+667,(vlSelf->reg_data_o[28]),64);
        tracep->chgQData(oldp+669,(vlSelf->reg_data_o[29]),64);
        tracep->chgQData(oldp+671,(vlSelf->reg_data_o[30]),64);
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
