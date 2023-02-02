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
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlSelf->top_sim__DOT__ex_jump)))));
            tracep->chgQData(oldp+3,(((IData)(vlSelf->top_sim__DOT__ex_jump)
                                       ? (((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                            ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                            : vlSelf->top_sim__DOT__EX_pc) 
                                          + vlSelf->top_sim__DOT__EX_imm)
                                       : (4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),64);
            tracep->chgIData(oldp+5,(vlSelf->top_sim__DOT__ifu_instr),32);
            tracep->chgBit(oldp+6,(vlSelf->top_sim__DOT__ifu_prdt_taken));
            tracep->chgBit(oldp+7,((0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))));
            tracep->chgQData(oldp+8,((vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r 
                                      & (- (QData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))))),64);
            tracep->chgIData(oldp+10,(vlSelf->top_sim__DOT__ID_instr),32);
            tracep->chgBit(oldp+11,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+12,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+13,(((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
            tracep->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))));
            tracep->chgBit(oldp+15,(vlSelf->top_sim__DOT__ID_valid));
            tracep->chgCData(oldp+16,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+18,(((0U == (0x1fU 
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
            tracep->chgQData(oldp+20,(((0U == (0x1fU 
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
            tracep->chgSData(oldp+22,((vlSelf->top_sim__DOT__ID_instr 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+23,(((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+24,((((0x13U == (0x7fU 
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
            tracep->chgSData(oldp+25,((((((((IData)(
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
            tracep->chgCData(oldp+26,((((IData)((0x63U 
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
            tracep->chgSData(oldp+27,((((IData)((3U 
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
            tracep->chgCData(oldp+28,((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))))),6);
            tracep->chgQData(oldp+29,(vlSelf->top_sim__DOT__u_id__DOT__rv64_imm),64);
            tracep->chgBit(oldp+31,((((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgCData(oldp+32,((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+33,(vlSelf->top_sim__DOT__id_load_use));
            tracep->chgBit(oldp+34,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall));
            tracep->chgBit(oldp+35,(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak));
            tracep->chgBit(oldp+36,(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret));
            tracep->chgQData(oldp+37,(vlSelf->top_sim__DOT__EX_pc),64);
            tracep->chgBit(oldp+39,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_prdt_taken_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgSData(oldp+40,(vlSelf->top_sim__DOT__EX_optype_info),12);
            tracep->chgSData(oldp+41,(vlSelf->top_sim__DOT__EX_alu_info),10);
            tracep->chgCData(oldp+42,(vlSelf->top_sim__DOT__EX_branch_info),6);
            tracep->chgSData(oldp+43,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),11);
            tracep->chgCData(oldp+44,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),6);
            tracep->chgBit(oldp+45,((((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                      >> 4U) & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgCData(oldp+46,(vlSelf->top_sim__DOT__EX_rs1_idx),5);
            tracep->chgCData(oldp+47,(vlSelf->top_sim__DOT__EX_rs2_idx),5);
            tracep->chgQData(oldp+48,(vlSelf->top_sim__DOT__EX_rs1_rdata),64);
            tracep->chgQData(oldp+50,(vlSelf->top_sim__DOT__EX_rs2_rdata),64);
            tracep->chgQData(oldp+52,(vlSelf->top_sim__DOT__EX_imm),64);
            tracep->chgBit(oldp+54,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgSData(oldp+55,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))),12);
            tracep->chgBit(oldp+56,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgCData(oldp+57,(vlSelf->top_sim__DOT__EX_rd_idx),5);
            tracep->chgBit(oldp+58,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+59,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+60,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+61,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+62,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+63,(((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
            tracep->chgBit(oldp+64,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
            tracep->chgQData(oldp+65,(((IData)((0U 
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
            tracep->chgBit(oldp+67,(vlSelf->top_sim__DOT__ex_jump));
            tracep->chgQData(oldp+68,((((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                         ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                         : vlSelf->top_sim__DOT__EX_pc) 
                                       + vlSelf->top_sim__DOT__EX_imm)),64);
            tracep->chgQData(oldp+70,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgSData(oldp+72,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
            tracep->chgSData(oldp+73,(vlSelf->top_sim__DOT__MEM_ld_st_info),11);
            tracep->chgBit(oldp+74,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgSData(oldp+75,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),12);
            tracep->chgBit(oldp+76,(vlSelf->top_sim__DOT__MEM_rd_wen));
            tracep->chgCData(oldp+77,(vlSelf->top_sim__DOT__MEM_rd_idx),5);
            tracep->chgQData(oldp+78,(vlSelf->top_sim__DOT__MEM_rs2_rdata),64);
            tracep->chgQData(oldp+80,(vlSelf->top_sim__DOT__MEM_alu_res),64);
            tracep->chgQData(oldp+82,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgQData(oldp+84,((vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
                                       & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))))),64);
            tracep->chgBit(oldp+86,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+87,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+88,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+89,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+90,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+91,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+92,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
            tracep->chgQData(oldp+93,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+95,((1U & ((((IData)(
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
            tracep->chgBit(oldp+96,((1U & (((((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
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
            tracep->chgQData(oldp+97,(vlSelf->top_sim__DOT__WB_pc),64);
            tracep->chgSData(oldp+99,(vlSelf->top_sim__DOT__WB_optype_info),12);
            tracep->chgBit(oldp+100,(vlSelf->top_sim__DOT__WB_csr_wen));
            tracep->chgSData(oldp+101,(vlSelf->top_sim__DOT__WB_csr_idx),12);
            tracep->chgQData(oldp+102,(vlSelf->top_sim__DOT__WB_csr_wdata),64);
            tracep->chgBit(oldp+104,(vlSelf->top_sim__DOT__WB_rd_wen));
            tracep->chgCData(oldp+105,(vlSelf->top_sim__DOT__WB_rd_idx),5);
            tracep->chgQData(oldp+106,(vlSelf->top_sim__DOT__WB_alu_res),64);
            tracep->chgQData(oldp+108,(vlSelf->top_sim__DOT__WB_csr_rdata),64);
            tracep->chgQData(oldp+110,(vlSelf->top_sim__DOT__WB_mem_rdata),64);
            tracep->chgBit(oldp+112,(vlSelf->top_sim__DOT__WB_pc_misalign));
            tracep->chgBit(oldp+113,(vlSelf->top_sim__DOT__WB_if_bus_err));
            tracep->chgBit(oldp+114,(vlSelf->top_sim__DOT__WB_ilegl_instr));
            tracep->chgBit(oldp+115,(vlSelf->top_sim__DOT__WB_ecall));
            tracep->chgBit(oldp+116,(vlSelf->top_sim__DOT__WB_ebreak));
            tracep->chgBit(oldp+117,(vlSelf->top_sim__DOT__WB_mret));
            tracep->chgBit(oldp+118,(vlSelf->top_sim__DOT__WB_ld_misalign));
            tracep->chgBit(oldp+119,(vlSelf->top_sim__DOT__WB_ld_bus_err));
            tracep->chgBit(oldp+120,(vlSelf->top_sim__DOT__WB_st_misalign));
            tracep->chgBit(oldp+121,(vlSelf->top_sim__DOT__WB_st_bus_err));
            tracep->chgQData(oldp+122,(vlSelf->top_sim__DOT__wb_rd_wdata),64);
            tracep->chgQData(oldp+124,((0xfffffffffffffff8ULL 
                                        & vlSelf->top_sim__DOT__MEM_alu_res)),64);
            tracep->chgBit(oldp+126,((IData)((0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
            tracep->chgCData(oldp+127,(vlSelf->top_sim__DOT__ram_byte_en),8);
            tracep->chgQData(oldp+128,((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+130,((IData)((0U != 
                                              (0x7f0U 
                                               & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
            tracep->chgQData(oldp+131,(vlSelf->top_sim__DOT__ram_rdata),64);
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 7U))));
            tracep->chgQData(oldp+136,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+138,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
            tracep->chgQData(oldp+139,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                         ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+141,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                             ? 0ULL
                                             : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                         : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+143,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                         : 4ULL)),64);
            tracep->chgQData(oldp+145,((4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgSData(oldp+147,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
            tracep->chgCData(oldp+148,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0xfU))),5);
            tracep->chgSData(oldp+149,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
            tracep->chgCData(oldp+150,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+151,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+152,((((IData)((0x63U 
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
            tracep->chgSData(oldp+153,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+154,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
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
            tracep->chgBit(oldp+155,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                          | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+156,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+157,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                       & (0x63U != 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x23U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+158,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+159,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i) 
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
            tracep->chgBit(oldp+160,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+161,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+162,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+163,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+164,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+165,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+166,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+167,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+168,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+169,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+170,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+171,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+172,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+173,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+174,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+175,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+176,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+177,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+178,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+179,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+180,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+181,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+182,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+183,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+184,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+185,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+186,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+187,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+188,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+189,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+190,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+191,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+192,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+193,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+194,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+195,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+196,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+197,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+198,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+199,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+200,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+201,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+202,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+203,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+204,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+205,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+206,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+207,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+208,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+209,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+210,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+211,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+212,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+213,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+214,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+215,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+216,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+217,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+218,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+219,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+220,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+221,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+222,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+223,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+224,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+225,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+226,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+227,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+228,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+229,((((((((((0x37U 
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
            tracep->chgBit(oldp+230,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgQData(oldp+231,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+233,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ifu_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+235,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+237,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ifu_instr))))),64);
            tracep->chgBit(oldp+241,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+242,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+243,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
            tracep->chgQData(oldp+244,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
            tracep->chgIData(oldp+246,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
            tracep->chgBit(oldp+247,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
            tracep->chgBit(oldp+248,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
            tracep->chgBit(oldp+249,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
            tracep->chgCData(oldp+250,((0x7fU & vlSelf->top_sim__DOT__ID_instr)),7);
            tracep->chgCData(oldp+251,((7U & (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+252,((vlSelf->top_sim__DOT__ID_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+253,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+254,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+255,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+256,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+257,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+258,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+259,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+260,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+261,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+262,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+263,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+264,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+265,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+266,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+267,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+268,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+269,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+270,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+271,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+272,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+273,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+274,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+275,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+276,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+277,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+278,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+279,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+280,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+281,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+282,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+283,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+284,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+285,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+286,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+287,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+288,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+289,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+290,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+291,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+292,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+293,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+294,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+295,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+296,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+297,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+298,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+299,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+300,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+301,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+302,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+303,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+304,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+305,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+306,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+307,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+308,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+309,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+310,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
            tracep->chgBit(oldp+311,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
            tracep->chgBit(oldp+312,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
            tracep->chgBit(oldp+313,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+314,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+315,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
            tracep->chgBit(oldp+316,((((((((((0x37U 
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
            tracep->chgBit(oldp+317,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+318,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+320,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+322,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+324,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ID_instr))))),64);
            tracep->chgBit(oldp+328,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+329,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+330,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0]),64);
            tracep->chgQData(oldp+332,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1]),64);
            tracep->chgQData(oldp+334,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2]),64);
            tracep->chgQData(oldp+336,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3]),64);
            tracep->chgQData(oldp+338,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4]),64);
            tracep->chgQData(oldp+340,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5]),64);
            tracep->chgQData(oldp+342,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6]),64);
            tracep->chgQData(oldp+344,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7]),64);
            tracep->chgQData(oldp+346,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8]),64);
            tracep->chgQData(oldp+348,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9]),64);
            tracep->chgQData(oldp+350,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[10]),64);
            tracep->chgQData(oldp+352,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[11]),64);
            tracep->chgQData(oldp+354,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[12]),64);
            tracep->chgQData(oldp+356,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[13]),64);
            tracep->chgQData(oldp+358,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[14]),64);
            tracep->chgQData(oldp+360,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[15]),64);
            tracep->chgQData(oldp+362,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[16]),64);
            tracep->chgQData(oldp+364,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[17]),64);
            tracep->chgQData(oldp+366,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[18]),64);
            tracep->chgQData(oldp+368,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[19]),64);
            tracep->chgQData(oldp+370,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[20]),64);
            tracep->chgQData(oldp+372,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[21]),64);
            tracep->chgQData(oldp+374,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[22]),64);
            tracep->chgQData(oldp+376,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[23]),64);
            tracep->chgQData(oldp+378,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[24]),64);
            tracep->chgQData(oldp+380,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[25]),64);
            tracep->chgQData(oldp+382,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[26]),64);
            tracep->chgQData(oldp+384,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[27]),64);
            tracep->chgQData(oldp+386,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[28]),64);
            tracep->chgQData(oldp+388,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[29]),64);
            tracep->chgQData(oldp+390,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[30]),64);
            tracep->chgQData(oldp+392,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+394,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+396,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+398,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+400,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+402,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+404,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+406,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+408,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+410,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+412,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+414,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+416,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+418,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+420,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+422,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+424,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+426,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+428,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+430,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+432,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+434,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+436,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+438,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+440,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+442,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+444,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+446,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+448,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+450,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+452,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[30]),64);
            tracep->chgBit(oldp+454,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+455,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+456,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgBit(oldp+457,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgQData(oldp+458,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
            tracep->chgSData(oldp+460,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
            tracep->chgSData(oldp+461,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
            tracep->chgCData(oldp+462,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
            tracep->chgSData(oldp+463,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
            tracep->chgCData(oldp+464,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
            tracep->chgCData(oldp+465,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r),5);
            tracep->chgCData(oldp+466,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r),5);
            tracep->chgQData(oldp+467,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
            tracep->chgQData(oldp+469,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
            tracep->chgQData(oldp+471,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
            tracep->chgBit(oldp+473,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
            tracep->chgSData(oldp+474,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
            tracep->chgBit(oldp+475,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r));
            tracep->chgCData(oldp+476,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r),5);
            tracep->chgBit(oldp+477,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
            tracep->chgBit(oldp+478,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
            tracep->chgBit(oldp+479,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
            tracep->chgBit(oldp+480,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
            tracep->chgBit(oldp+481,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
            tracep->chgBit(oldp+482,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
            tracep->chgBit(oldp+483,((1U & ((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
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
            tracep->chgBit(oldp+484,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+485,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 5U))));
            tracep->chgQData(oldp+486,(((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                         ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                         : vlSelf->top_sim__DOT__EX_pc)),64);
            tracep->chgBit(oldp+488,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+489,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+490,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+491,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+492,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+494,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+495,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+496,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+497,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+498,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+499,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+500,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+503,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+504,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+505,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+506,((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+509,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+510,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+511,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+512,((1U & (IData)(vlSelf->top_sim__DOT__EX_branch_info))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x7eU 
                                                        & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))))));
            tracep->chgBit(oldp+514,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+515,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x7eU 
                                                         & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                            | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+516,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+518,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+520,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgQData(oldp+522,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+524,((QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt))),64);
            tracep->chgQData(oldp+526,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+528,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res),64);
            tracep->chgQData(oldp+530,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+532,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+534,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+536,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+538,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
            tracep->chgBit(oldp+540,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout));
            tracep->chgCData(oldp+541,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+542,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
            tracep->chgQData(oldp+544,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+546,((0U != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res)));
            tracep->chgBit(oldp+547,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res))))));
            tracep->chgBit(oldp+548,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt));
            tracep->chgBit(oldp+549,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))));
            tracep->chgBit(oldp+550,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt)))));
            tracep->chgQData(oldp+551,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r),64);
            tracep->chgSData(oldp+553,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r),12);
            tracep->chgSData(oldp+554,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r),11);
            tracep->chgBit(oldp+555,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r));
            tracep->chgSData(oldp+556,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r),12);
            tracep->chgBit(oldp+557,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r));
            tracep->chgCData(oldp+558,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r),5);
            tracep->chgQData(oldp+559,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r),64);
            tracep->chgQData(oldp+561,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r),64);
            tracep->chgQData(oldp+563,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r),64);
            tracep->chgQData(oldp+565,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r),64);
            tracep->chgBit(oldp+567,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r));
            tracep->chgBit(oldp+568,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r));
            tracep->chgBit(oldp+569,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r));
            tracep->chgBit(oldp+570,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r));
            tracep->chgBit(oldp+571,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r));
            tracep->chgBit(oldp+572,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r));
            tracep->chgBit(oldp+573,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+574,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+575,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+576,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+577,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+578,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+579,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+580,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+581,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+582,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+583,((1U & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))));
            tracep->chgCData(oldp+584,(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata),8);
            tracep->chgSData(oldp+585,(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata),16);
            tracep->chgIData(oldp+586,(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata),32);
            tracep->chgQData(oldp+587,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))),64);
            tracep->chgQData(oldp+589,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                                >> 0xfU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))),64);
            tracep->chgQData(oldp+591,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata)))),64);
            tracep->chgQData(oldp+593,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata))),64);
            tracep->chgQData(oldp+595,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))),64);
            tracep->chgQData(oldp+597,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))),64);
            tracep->chgCData(oldp+599,(((1U & (IData)(
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
            tracep->chgCData(oldp+600,(((1U & (IData)(
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
            tracep->chgCData(oldp+601,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0U) : 0xfU)),8);
            tracep->chgSData(oldp+602,((0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))),10);
            tracep->chgQData(oldp+603,(vlSelf->top_sim__DOT__u_ram__DOT__rdata),64);
            tracep->chgQData(oldp+605,(vlSelf->top_sim__DOT__u_ram__DOT__mask),64);
            tracep->chgQData(oldp+607,(vlSelf->top_sim__DOT__u_ram__DOT__wdata),64);
            tracep->chgBit(oldp+609,(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
            tracep->chgBit(oldp+610,((1U & ((IData)(vlSelf->top_sim__DOT__WB_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+611,((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))));
        }
        tracep->chgBit(oldp+612,(vlSelf->clk));
        tracep->chgBit(oldp+613,(vlSelf->rst));
        tracep->chgQData(oldp+614,(vlSelf->reg_data_o[0]),64);
        tracep->chgQData(oldp+616,(vlSelf->reg_data_o[1]),64);
        tracep->chgQData(oldp+618,(vlSelf->reg_data_o[2]),64);
        tracep->chgQData(oldp+620,(vlSelf->reg_data_o[3]),64);
        tracep->chgQData(oldp+622,(vlSelf->reg_data_o[4]),64);
        tracep->chgQData(oldp+624,(vlSelf->reg_data_o[5]),64);
        tracep->chgQData(oldp+626,(vlSelf->reg_data_o[6]),64);
        tracep->chgQData(oldp+628,(vlSelf->reg_data_o[7]),64);
        tracep->chgQData(oldp+630,(vlSelf->reg_data_o[8]),64);
        tracep->chgQData(oldp+632,(vlSelf->reg_data_o[9]),64);
        tracep->chgQData(oldp+634,(vlSelf->reg_data_o[10]),64);
        tracep->chgQData(oldp+636,(vlSelf->reg_data_o[11]),64);
        tracep->chgQData(oldp+638,(vlSelf->reg_data_o[12]),64);
        tracep->chgQData(oldp+640,(vlSelf->reg_data_o[13]),64);
        tracep->chgQData(oldp+642,(vlSelf->reg_data_o[14]),64);
        tracep->chgQData(oldp+644,(vlSelf->reg_data_o[15]),64);
        tracep->chgQData(oldp+646,(vlSelf->reg_data_o[16]),64);
        tracep->chgQData(oldp+648,(vlSelf->reg_data_o[17]),64);
        tracep->chgQData(oldp+650,(vlSelf->reg_data_o[18]),64);
        tracep->chgQData(oldp+652,(vlSelf->reg_data_o[19]),64);
        tracep->chgQData(oldp+654,(vlSelf->reg_data_o[20]),64);
        tracep->chgQData(oldp+656,(vlSelf->reg_data_o[21]),64);
        tracep->chgQData(oldp+658,(vlSelf->reg_data_o[22]),64);
        tracep->chgQData(oldp+660,(vlSelf->reg_data_o[23]),64);
        tracep->chgQData(oldp+662,(vlSelf->reg_data_o[24]),64);
        tracep->chgQData(oldp+664,(vlSelf->reg_data_o[25]),64);
        tracep->chgQData(oldp+666,(vlSelf->reg_data_o[26]),64);
        tracep->chgQData(oldp+668,(vlSelf->reg_data_o[27]),64);
        tracep->chgQData(oldp+670,(vlSelf->reg_data_o[28]),64);
        tracep->chgQData(oldp+672,(vlSelf->reg_data_o[29]),64);
        tracep->chgQData(oldp+674,(vlSelf->reg_data_o[30]),64);
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
