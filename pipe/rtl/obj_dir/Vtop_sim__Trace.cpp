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
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlSelf->top_sim__DOT__if_flush)))));
            tracep->chgQData(oldp+3,(((IData)(vlSelf->top_sim__DOT__if_flush)
                                       ? ((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                           ? ((IData)(vlSelf->top_sim__DOT__WB_mret)
                                               ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                               : 0x28ULL)
                                           : (((0x20U 
                                                & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                                ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                                : vlSelf->top_sim__DOT__EX_pc) 
                                              + vlSelf->top_sim__DOT__EX_imm))
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
                                        ? 0ULL : (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
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
                                        ? 0ULL : (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
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
            tracep->chgBit(oldp+64,(vlSelf->top_sim__DOT__EX_valid));
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
            tracep->chgBit(oldp+86,(vlSelf->top_sim__DOT__MEM_pc_misalign));
            tracep->chgBit(oldp+87,(vlSelf->top_sim__DOT__MEM_if_bus_err));
            tracep->chgBit(oldp+88,(((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
            tracep->chgBit(oldp+89,(vlSelf->top_sim__DOT__MEM_ecall));
            tracep->chgBit(oldp+90,(vlSelf->top_sim__DOT__MEM_ebreak));
            tracep->chgBit(oldp+91,(vlSelf->top_sim__DOT__MEM_mret));
            tracep->chgBit(oldp+92,(vlSelf->top_sim__DOT__MEM_valid));
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
            tracep->chgBit(oldp+95,(vlSelf->top_sim__DOT__mem_ld_misalign));
            tracep->chgBit(oldp+96,(vlSelf->top_sim__DOT__mem_st_misalign));
            tracep->chgQData(oldp+97,(vlSelf->top_sim__DOT__WB_pc),64);
            tracep->chgSData(oldp+99,(vlSelf->top_sim__DOT__WB_optype_info),12);
            tracep->chgBit(oldp+100,(((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wen_r) 
                                      & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
            tracep->chgSData(oldp+101,(((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_idx_r) 
                                        & (- (IData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),12);
            tracep->chgQData(oldp+102,((vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wdata_r 
                                        & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),64);
            tracep->chgBit(oldp+104,(vlSelf->top_sim__DOT__WB_rd_wen));
            tracep->chgCData(oldp+105,(vlSelf->top_sim__DOT__WB_rd_idx),5);
            tracep->chgQData(oldp+106,(vlSelf->top_sim__DOT__WB_alu_res),64);
            tracep->chgQData(oldp+108,((vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r 
                                        & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),64);
            tracep->chgQData(oldp+110,((vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r 
                                        & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))),64);
            tracep->chgBit(oldp+112,(((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r) 
                                      & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
            tracep->chgBit(oldp+113,(vlSelf->top_sim__DOT__WB_if_bus_err));
            tracep->chgBit(oldp+114,(vlSelf->top_sim__DOT__WB_ilegl_instr));
            tracep->chgBit(oldp+115,(vlSelf->top_sim__DOT__WB_ecall));
            tracep->chgBit(oldp+116,(vlSelf->top_sim__DOT__WB_ebreak));
            tracep->chgBit(oldp+117,(vlSelf->top_sim__DOT__WB_mret));
            tracep->chgBit(oldp+118,(vlSelf->top_sim__DOT__WB_ld_misalign));
            tracep->chgBit(oldp+119,(vlSelf->top_sim__DOT__WB_ld_bus_err));
            tracep->chgBit(oldp+120,(vlSelf->top_sim__DOT__WB_st_misalign));
            tracep->chgBit(oldp+121,(vlSelf->top_sim__DOT__WB_st_bus_err));
            tracep->chgBit(oldp+122,(vlSelf->top_sim__DOT__wb_rd_wen));
            tracep->chgQData(oldp+123,(vlSelf->top_sim__DOT__wb_rd_wdata),64);
            tracep->chgBit(oldp+125,(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp));
            tracep->chgQData(oldp+126,(((IData)(vlSelf->top_sim__DOT__WB_mret)
                                         ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                         : 0x28ULL)),64);
            tracep->chgBit(oldp+128,(vlSelf->top_sim__DOT__if_flush));
            tracep->chgBit(oldp+129,(((IData)(vlSelf->top_sim__DOT__ex_jump) 
                                      | (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp))));
            tracep->chgQData(oldp+130,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                         ? ((IData)(vlSelf->top_sim__DOT__WB_mret)
                                             ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                             : 0x28ULL)
                                         : (((0x20U 
                                              & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                              ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                              : vlSelf->top_sim__DOT__EX_pc) 
                                            + vlSelf->top_sim__DOT__EX_imm))),64);
            tracep->chgQData(oldp+132,((0xfffffffffffffff8ULL 
                                        & vlSelf->top_sim__DOT__MEM_alu_res)),64);
            tracep->chgBit(oldp+134,((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                                             & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))));
            tracep->chgCData(oldp+135,(vlSelf->top_sim__DOT__ram_byte_en),8);
            tracep->chgQData(oldp+136,((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+138,((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                                             & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7f0U 
                                                        & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))));
            tracep->chgQData(oldp+139,(vlSelf->top_sim__DOT__ram_rdata),64);
            tracep->chgQData(oldp+141,(vlSelf->top_sim__DOT__u_csr__DOT__mepc),64);
            tracep->chgQData(oldp+143,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_int)
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
            tracep->chgQData(oldp+145,(((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr)
                                         ? (QData)((IData)(vlSelf->top_sim__DOT__u_wb__DOT__WB_instr_i))
                                         : vlSelf->top_sim__DOT__WB_alu_res)),64);
            tracep->chgQData(oldp+147,(((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                         ? vlSelf->top_sim__DOT__WB_pc
                                         : (4ULL + vlSelf->top_sim__DOT__WB_pc))),64);
            tracep->chgBit(oldp+149,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+150,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+151,((1U & ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                            >> 7U))));
            tracep->chgQData(oldp+152,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+154,(vlSelf->top_sim__DOT__u_ifu__DOT__jump));
            tracep->chgQData(oldp+155,(((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                         ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+157,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
                                             ? 0ULL
                                             : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
                                         : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgQData(oldp+159,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                         ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                         : 4ULL)),64);
            tracep->chgQData(oldp+161,((4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r)),64);
            tracep->chgSData(oldp+163,((0x3ffU & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))),10);
            tracep->chgCData(oldp+164,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0xfU))),5);
            tracep->chgSData(oldp+165,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info),12);
            tracep->chgCData(oldp+166,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+167,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+168,((((IData)((0x63U 
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
            tracep->chgSData(oldp+169,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+170,((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
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
            tracep->chgBit(oldp+171,(((((((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                          | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                         | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                        | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                       | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                      | (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+172,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+173,((((((~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                       & (0x63U != 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x23U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgCData(oldp+174,((0x1fU & (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+175,(((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__EX_op_load_i) 
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
            tracep->chgBit(oldp+176,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+177,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+178,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+179,((0x7fU & vlSelf->top_sim__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+180,((7U & (vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+181,((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+182,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+183,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+184,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+185,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+186,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+187,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+188,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+189,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+190,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+191,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+192,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+193,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr))));
            tracep->chgBit(oldp+194,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+195,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+196,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+197,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+198,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+199,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+200,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+201,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+202,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+203,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+204,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+205,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+206,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+207,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+208,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+209,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+210,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+211,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+212,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+213,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+214,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+215,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+216,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+217,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+218,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+219,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+220,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+221,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+222,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+223,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+224,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+225,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+226,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+227,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+228,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+229,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+230,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+231,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+232,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+233,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+234,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+235,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+236,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+237,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+238,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+239,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+240,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+241,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+242,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+243,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+244,(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+245,((((((((((0x37U 
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
            tracep->chgBit(oldp+246,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgQData(oldp+247,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+249,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ifu_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ifu_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ifu_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+251,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+253,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ifu_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ifu_instr))))),64);
            tracep->chgBit(oldp+257,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ifu_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+258,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)))));
            tracep->chgBit(oldp+259,(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
            tracep->chgQData(oldp+260,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r),64);
            tracep->chgIData(oldp+262,(vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r),32);
            tracep->chgBit(oldp+263,(vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r));
            tracep->chgBit(oldp+264,(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r));
            tracep->chgBit(oldp+265,(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r));
            tracep->chgCData(oldp+266,((0x7fU & vlSelf->top_sim__DOT__ID_instr)),7);
            tracep->chgCData(oldp+267,((7U & (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+268,((vlSelf->top_sim__DOT__ID_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+269,((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+270,((0x1bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+271,((0x33U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+272,((0x3bU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+273,((0x63U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+274,((0x6fU == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+275,((0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+276,((3U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+277,((0x23U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+278,((0x37U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+279,((0x17U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+280,((0x73U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ID_instr))));
            tracep->chgBit(oldp+281,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+282,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+283,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+284,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+285,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+286,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+287,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+288,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+289,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+290,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+291,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+292,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+293,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+294,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+295,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+296,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+297,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+298,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+299,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+300,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+301,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+302,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+303,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+304,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+305,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+306,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+307,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+308,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+309,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+310,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+311,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+312,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+313,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+314,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+315,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+316,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+317,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+318,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+319,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+320,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+321,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+322,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+323,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+324,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+325,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+326,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw));
            tracep->chgBit(oldp+327,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs));
            tracep->chgBit(oldp+328,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc));
            tracep->chgBit(oldp+329,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+330,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+331,(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
            tracep->chgBit(oldp+332,((((((((((0x37U 
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
            tracep->chgBit(oldp+333,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+334,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+336,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+338,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+340,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__ID_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__ID_instr))))),64);
            tracep->chgBit(oldp+344,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgBit(oldp+345,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ID_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__ID_instr)))));
            tracep->chgQData(oldp+346,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0]),64);
            tracep->chgQData(oldp+348,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1]),64);
            tracep->chgQData(oldp+350,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2]),64);
            tracep->chgQData(oldp+352,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3]),64);
            tracep->chgQData(oldp+354,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4]),64);
            tracep->chgQData(oldp+356,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5]),64);
            tracep->chgQData(oldp+358,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6]),64);
            tracep->chgQData(oldp+360,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7]),64);
            tracep->chgQData(oldp+362,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8]),64);
            tracep->chgQData(oldp+364,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9]),64);
            tracep->chgQData(oldp+366,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[10]),64);
            tracep->chgQData(oldp+368,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[11]),64);
            tracep->chgQData(oldp+370,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[12]),64);
            tracep->chgQData(oldp+372,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[13]),64);
            tracep->chgQData(oldp+374,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[14]),64);
            tracep->chgQData(oldp+376,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[15]),64);
            tracep->chgQData(oldp+378,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[16]),64);
            tracep->chgQData(oldp+380,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[17]),64);
            tracep->chgQData(oldp+382,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[18]),64);
            tracep->chgQData(oldp+384,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[19]),64);
            tracep->chgQData(oldp+386,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[20]),64);
            tracep->chgQData(oldp+388,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[21]),64);
            tracep->chgQData(oldp+390,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[22]),64);
            tracep->chgQData(oldp+392,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[23]),64);
            tracep->chgQData(oldp+394,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[24]),64);
            tracep->chgQData(oldp+396,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[25]),64);
            tracep->chgQData(oldp+398,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[26]),64);
            tracep->chgQData(oldp+400,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[27]),64);
            tracep->chgQData(oldp+402,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[28]),64);
            tracep->chgQData(oldp+404,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[29]),64);
            tracep->chgQData(oldp+406,(vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[30]),64);
            tracep->chgQData(oldp+408,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+410,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+412,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+414,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+416,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+418,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+420,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+422,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+424,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+426,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+428,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+430,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+432,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+434,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+436,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+438,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+440,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+442,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+444,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+446,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+448,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+450,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+452,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+454,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+456,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+458,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+460,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+462,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+464,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+466,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+468,(vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[30]),64);
            tracep->chgBit(oldp+470,(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
            tracep->chgBit(oldp+471,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+472,((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))));
            tracep->chgBit(oldp+473,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgBit(oldp+474,((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                      & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                         == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))));
            tracep->chgQData(oldp+475,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r),64);
            tracep->chgSData(oldp+477,(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r),12);
            tracep->chgSData(oldp+478,(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r),10);
            tracep->chgCData(oldp+479,(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r),6);
            tracep->chgSData(oldp+480,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r),11);
            tracep->chgCData(oldp+481,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r),6);
            tracep->chgCData(oldp+482,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r),5);
            tracep->chgCData(oldp+483,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r),5);
            tracep->chgQData(oldp+484,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r),64);
            tracep->chgQData(oldp+486,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r),64);
            tracep->chgQData(oldp+488,(vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r),64);
            tracep->chgBit(oldp+490,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r));
            tracep->chgSData(oldp+491,(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r),12);
            tracep->chgBit(oldp+492,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r));
            tracep->chgCData(oldp+493,(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r),5);
            tracep->chgBit(oldp+494,(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r));
            tracep->chgBit(oldp+495,(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r));
            tracep->chgBit(oldp+496,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r));
            tracep->chgBit(oldp+497,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r));
            tracep->chgBit(oldp+498,(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r));
            tracep->chgBit(oldp+499,(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r));
            tracep->chgBit(oldp+500,((1U & ((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
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
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 5U))));
            tracep->chgQData(oldp+503,(((0x20U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                         ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                         : vlSelf->top_sim__DOT__EX_pc)),64);
            tracep->chgBit(oldp+505,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+509,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+510,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+511,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+512,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+514,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+515,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+516,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+517,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+518,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+522,((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+523,((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))));
            tracep->chgBit(oldp+524,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+525,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+526,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+527,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+528,((1U & ((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+529,((1U & (IData)(vlSelf->top_sim__DOT__EX_branch_info))));
            tracep->chgBit(oldp+530,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x7eU 
                                                        & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))))));
            tracep->chgBit(oldp+531,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+532,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x7eU 
                                                         & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                            | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+533,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+535,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+537,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgQData(oldp+539,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+541,((QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt))),64);
            tracep->chgQData(oldp+543,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+545,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res),64);
            tracep->chgQData(oldp+547,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+549,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+551,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+553,((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+555,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2),64);
            tracep->chgBit(oldp+557,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout));
            tracep->chgCData(oldp+558,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+559,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res),64);
            tracep->chgQData(oldp+561,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+563,((0U != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res)));
            tracep->chgBit(oldp+564,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res))))));
            tracep->chgBit(oldp+565,(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt));
            tracep->chgBit(oldp+566,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout)))));
            tracep->chgBit(oldp+567,((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt)))));
            tracep->chgBit(oldp+568,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
            tracep->chgQData(oldp+569,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r),64);
            tracep->chgSData(oldp+571,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r),12);
            tracep->chgSData(oldp+572,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r),11);
            tracep->chgBit(oldp+573,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r));
            tracep->chgSData(oldp+574,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r),12);
            tracep->chgBit(oldp+575,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r));
            tracep->chgCData(oldp+576,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r),5);
            tracep->chgQData(oldp+577,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r),64);
            tracep->chgQData(oldp+579,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r),64);
            tracep->chgQData(oldp+581,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r),64);
            tracep->chgQData(oldp+583,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r),64);
            tracep->chgBit(oldp+585,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r));
            tracep->chgBit(oldp+586,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r));
            tracep->chgBit(oldp+587,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r));
            tracep->chgBit(oldp+588,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r));
            tracep->chgBit(oldp+589,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r));
            tracep->chgBit(oldp+590,(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r));
            tracep->chgBit(oldp+591,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+592,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+593,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+594,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+595,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+596,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+597,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+598,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+599,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+600,((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+601,((1U & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))));
            tracep->chgBit(oldp+602,(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp));
            tracep->chgCData(oldp+603,(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata),8);
            tracep->chgSData(oldp+604,(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata),16);
            tracep->chgIData(oldp+605,(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata),32);
            tracep->chgQData(oldp+606,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))),64);
            tracep->chgQData(oldp+608,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                                >> 0xfU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))),64);
            tracep->chgQData(oldp+610,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata)))),64);
            tracep->chgQData(oldp+612,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata))),64);
            tracep->chgQData(oldp+614,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))),64);
            tracep->chgQData(oldp+616,((QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))),64);
            tracep->chgCData(oldp+618,(((1U & (IData)(
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
            tracep->chgCData(oldp+619,(((1U & (IData)(
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
            tracep->chgCData(oldp+620,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0U) : 0xfU)),8);
            tracep->chgSData(oldp+621,((0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))),10);
            tracep->chgQData(oldp+622,(vlSelf->top_sim__DOT__u_ram__DOT__rdata),64);
            tracep->chgQData(oldp+624,(vlSelf->top_sim__DOT__u_ram__DOT__mask),64);
            tracep->chgQData(oldp+626,(vlSelf->top_sim__DOT__u_ram__DOT__wdata),64);
            tracep->chgBit(oldp+628,(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
            tracep->chgQData(oldp+629,(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_r),64);
            tracep->chgSData(oldp+631,(vlSelf->top_sim__DOT__u_WB__DOT__WB_optype_info_r),12);
            tracep->chgBit(oldp+632,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wen_r));
            tracep->chgSData(oldp+633,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_idx_r),12);
            tracep->chgBit(oldp+634,(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_wen_r));
            tracep->chgCData(oldp+635,(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_idx_r),5);
            tracep->chgQData(oldp+636,(vlSelf->top_sim__DOT__u_WB__DOT__WB_alu_res_r),64);
            tracep->chgQData(oldp+638,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r),64);
            tracep->chgQData(oldp+640,(vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wdata_r),64);
            tracep->chgQData(oldp+642,(vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r),64);
            tracep->chgBit(oldp+644,(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r));
            tracep->chgBit(oldp+645,(vlSelf->top_sim__DOT__u_WB__DOT__WB_if_bus_err_r));
            tracep->chgBit(oldp+646,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ilegl_instr_r));
            tracep->chgBit(oldp+647,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ecall_r));
            tracep->chgBit(oldp+648,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ebreak_r));
            tracep->chgBit(oldp+649,(vlSelf->top_sim__DOT__u_WB__DOT__WB_mret_r));
            tracep->chgBit(oldp+650,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_misalign_r));
            tracep->chgBit(oldp+651,(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_bus_err_r));
            tracep->chgBit(oldp+652,(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_misalign_r));
            tracep->chgBit(oldp+653,(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_bus_err_r));
            tracep->chgBit(oldp+654,((1U & ((IData)(vlSelf->top_sim__DOT__WB_optype_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+655,((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))));
            tracep->chgCData(oldp+656,(((((((((1U & 
                                               (- (IData)((IData)(vlSelf->top_sim__DOT__WB_if_bus_err)))) 
                                              | (2U 
                                                 & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr))))) 
                                             | (3U 
                                                & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ebreak))))) 
                                            | (4U & 
                                               (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_misalign))))) 
                                           | (5U & 
                                              (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_bus_err))))) 
                                          | (6U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_misalign))))) 
                                         | (7U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_bus_err))))) 
                                        | (0xbU & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ecall)))))),4);
            tracep->chgQData(oldp+657,(vlSelf->top_sim__DOT__u_csr__DOT__mcause),64);
            tracep->chgQData(oldp+659,(vlSelf->top_sim__DOT__u_csr__DOT__mtval),64);
        }
        tracep->chgBit(oldp+661,(vlSelf->clk));
        tracep->chgBit(oldp+662,(vlSelf->rst));
        tracep->chgQData(oldp+663,(vlSelf->reg_data_o[0]),64);
        tracep->chgQData(oldp+665,(vlSelf->reg_data_o[1]),64);
        tracep->chgQData(oldp+667,(vlSelf->reg_data_o[2]),64);
        tracep->chgQData(oldp+669,(vlSelf->reg_data_o[3]),64);
        tracep->chgQData(oldp+671,(vlSelf->reg_data_o[4]),64);
        tracep->chgQData(oldp+673,(vlSelf->reg_data_o[5]),64);
        tracep->chgQData(oldp+675,(vlSelf->reg_data_o[6]),64);
        tracep->chgQData(oldp+677,(vlSelf->reg_data_o[7]),64);
        tracep->chgQData(oldp+679,(vlSelf->reg_data_o[8]),64);
        tracep->chgQData(oldp+681,(vlSelf->reg_data_o[9]),64);
        tracep->chgQData(oldp+683,(vlSelf->reg_data_o[10]),64);
        tracep->chgQData(oldp+685,(vlSelf->reg_data_o[11]),64);
        tracep->chgQData(oldp+687,(vlSelf->reg_data_o[12]),64);
        tracep->chgQData(oldp+689,(vlSelf->reg_data_o[13]),64);
        tracep->chgQData(oldp+691,(vlSelf->reg_data_o[14]),64);
        tracep->chgQData(oldp+693,(vlSelf->reg_data_o[15]),64);
        tracep->chgQData(oldp+695,(vlSelf->reg_data_o[16]),64);
        tracep->chgQData(oldp+697,(vlSelf->reg_data_o[17]),64);
        tracep->chgQData(oldp+699,(vlSelf->reg_data_o[18]),64);
        tracep->chgQData(oldp+701,(vlSelf->reg_data_o[19]),64);
        tracep->chgQData(oldp+703,(vlSelf->reg_data_o[20]),64);
        tracep->chgQData(oldp+705,(vlSelf->reg_data_o[21]),64);
        tracep->chgQData(oldp+707,(vlSelf->reg_data_o[22]),64);
        tracep->chgQData(oldp+709,(vlSelf->reg_data_o[23]),64);
        tracep->chgQData(oldp+711,(vlSelf->reg_data_o[24]),64);
        tracep->chgQData(oldp+713,(vlSelf->reg_data_o[25]),64);
        tracep->chgQData(oldp+715,(vlSelf->reg_data_o[26]),64);
        tracep->chgQData(oldp+717,(vlSelf->reg_data_o[27]),64);
        tracep->chgQData(oldp+719,(vlSelf->reg_data_o[28]),64);
        tracep->chgQData(oldp+721,(vlSelf->reg_data_o[29]),64);
        tracep->chgQData(oldp+723,(vlSelf->reg_data_o[30]),64);
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
