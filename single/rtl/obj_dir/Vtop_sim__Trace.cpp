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
            tracep->chgQData(oldp+0,(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r),64);
            tracep->chgQData(oldp+2,((((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                        ? ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                            ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                            : ((0x20U 
                                                & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                                ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                                : 0ULL))
                                        : vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r) 
                                      + ((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                          ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                          : 4ULL))),64);
            tracep->chgCData(oldp+4,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                               >> 0xfU))),5);
            tracep->chgQData(oldp+5,(((0U == (0x1fU 
                                              & (vlSelf->top_sim__DOT__if_instr 
                                                 >> 0xfU)))
                                       ? 0ULL : ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->top_sim__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->top_sim__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0ULL))),64);
            tracep->chgIData(oldp+7,(vlSelf->top_sim__DOT__if_instr),32);
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x14U))),5);
            tracep->chgQData(oldp+9,(vlSelf->top_sim__DOT__rf_rs1_rdata),64);
            tracep->chgQData(oldp+11,(vlSelf->top_sim__DOT__rf_rs2_rdata),64);
            tracep->chgBit(oldp+13,(((((((IData)((0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                         | (IData)(
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top_sim__DOT__if_instr)))) 
                                        | (IData)((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__if_instr)))) 
                                       | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+14,((vlSelf->top_sim__DOT__if_instr 
                                       >> 0x14U)),12);
            tracep->chgSData(oldp+15,(vlSelf->top_sim__DOT__id_opcode_info),12);
            tracep->chgSData(oldp+16,(vlSelf->top_sim__DOT__id_alu_info),10);
            tracep->chgCData(oldp+17,(vlSelf->top_sim__DOT__id_branch_info),6);
            tracep->chgSData(oldp+18,((((IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                        << 0xaU) | 
                                       (((IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                         << 9U) | (
                                                   ((IData)(
                                                            (0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top_sim__DOT__if_instr))) 
                                                    << 8U) 
                                                   | (((IData)(
                                                               (0x3003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                                       << 7U) 
                                                      | (((IData)(
                                                                  (0x4003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__if_instr))) 
                                                          << 6U) 
                                                         | (((IData)(
                                                                     (0x5003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                                             << 5U) 
                                                            | (((IData)(
                                                                        (0x6003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                                << 4U) 
                                                               | (((IData)(
                                                                           (0x23U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                                   << 3U) 
                                                                  | (((IData)(
                                                                              (0x1023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top_sim__DOT__if_instr))) 
                                                                      << 2U) 
                                                                     | (((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__if_instr))) 
                                                                         << 1U) 
                                                                        | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top_sim__DOT__if_instr)))))))))))))),11);
            tracep->chgCData(oldp+19,((((IData)((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                        << 5U) | (((IData)(
                                                           (0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x3073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__if_instr))) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))))))),6);
            tracep->chgQData(oldp+20,(vlSelf->top_sim__DOT__id_u__DOT__rv64_imm),64);
            tracep->chgBit(oldp+22,(vlSelf->top_sim__DOT__id_u__DOT__rv64_need_rd));
            tracep->chgCData(oldp+23,((0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+24,(vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall));
            tracep->chgBit(oldp+25,(vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak));
            tracep->chgBit(oldp+26,(vlSelf->top_sim__DOT__id_u__DOT__rv64_mret));
            tracep->chgQData(oldp+27,(vlSelf->top_sim__DOT__ex_alu_rd_wdata),64);
            tracep->chgQData(oldp+29,((vlSelf->top_sim__DOT__rf_rs1_rdata 
                                       + vlSelf->top_sim__DOT__id_u__DOT__rv64_imm)),64);
            tracep->chgBit(oldp+31,(vlSelf->top_sim__DOT__ex_branch_jump));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 6U))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 5U))));
            tracep->chgBit(oldp+34,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 7U))));
            tracep->chgBit(oldp+35,((0x6fU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+36,((0x67U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+37,((0x63U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgQData(oldp+38,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgQData(oldp+40,((((0x6fU == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr)))
                                        ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                        : ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top_sim__DOT__if_instr 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->top_sim__DOT__if_instr 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->top_sim__DOT__if_instr 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0ULL))
                                            : 0ULL))),64);
            tracep->chgSData(oldp+42,((0x3ffU & (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))),10);
            tracep->chgSData(oldp+43,((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        << 0xbU) | 
                                       (((0x1bU == 
                                          (0x7fU & vlSelf->top_sim__DOT__if_instr)) 
                                         << 0xaU) | 
                                        (((0x33U == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr)) 
                                          << 9U) | 
                                         (((0x3bU == 
                                            (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr)) 
                                           << 8U) | 
                                          (((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr)) 
                                            << 7U) 
                                           | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr)) 
                                               << 6U) 
                                              | (((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__if_instr)) 
                                                  << 5U) 
                                                 | (((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top_sim__DOT__if_instr)) 
                                                     << 4U) 
                                                    | (((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top_sim__DOT__if_instr)) 
                                                        << 3U) 
                                                       | (((0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top_sim__DOT__if_instr)) 
                                                           << 2U) 
                                                          | (((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top_sim__DOT__if_instr)) 
                                                              << 1U) 
                                                             | (0x73U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top_sim__DOT__if_instr)))))))))))))),12);
            tracep->chgBit(oldp+44,(((((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+45,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+46,((((IData)((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                        << 5U) | (((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__if_instr))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x5063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x6063U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__if_instr))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0x7063U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__if_instr))))))))),6);
            tracep->chgSData(oldp+47,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+48,((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+49,((((((~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+50,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+51,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+52,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+53,((0x7fU & vlSelf->top_sim__DOT__if_instr)),7);
            tracep->chgCData(oldp+54,((7U & (vlSelf->top_sim__DOT__if_instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+55,((vlSelf->top_sim__DOT__if_instr 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+56,((0x13U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+57,((0x1bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+58,((0x33U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+59,((0x3bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+60,((3U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+61,((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+62,((0x37U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+63,((0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+64,((0x73U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+65,((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+66,((IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+67,(((IData)((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+68,(((IData)((0x101bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+69,((IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+70,((IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+71,((IData)((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+72,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+73,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+74,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+75,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+76,((IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+77,((IData)((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+78,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+79,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+80,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+81,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+82,(((IData)((0x1033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+83,(((IData)((0x103bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+84,(((IData)((0x2033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+85,(((IData)((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+86,(((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+87,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+88,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+89,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+90,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+91,(((IData)((0x6033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+92,(((IData)((0x7033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+93,((IData)((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+94,((IData)((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+95,((IData)((0x4063U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+96,((IData)((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+97,((IData)((0x6063U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+98,((IData)((0x7063U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+99,((IData)((3U == 
                                             (0x707fU 
                                              & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+100,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+101,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+102,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+103,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+104,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+105,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+106,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+107,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+108,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+109,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+110,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+111,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+112,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+113,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+114,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+115,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+116,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
            tracep->chgBit(oldp+117,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgQData(oldp+118,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+120,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__if_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__if_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+122,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->top_sim__DOT__if_instr 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top_sim__DOT__if_instr 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top_sim__DOT__if_instr 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top_sim__DOT__if_instr 
                                                                                >> 7U))))))))),64);
            tracep->chgQData(oldp+124,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->top_sim__DOT__if_instr 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top_sim__DOT__if_instr) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top_sim__DOT__if_instr 
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__if_instr))))),64);
            tracep->chgBit(oldp+128,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+129,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+130,((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+131,((IData)((0x2073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+132,((IData)((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+133,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+134,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+135,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci));
            tracep->chgBit(oldp+136,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                           & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_mret)))));
            tracep->chgQData(oldp+137,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0]),64);
            tracep->chgQData(oldp+139,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[1]),64);
            tracep->chgQData(oldp+141,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[2]),64);
            tracep->chgQData(oldp+143,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[3]),64);
            tracep->chgQData(oldp+145,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[4]),64);
            tracep->chgQData(oldp+147,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[5]),64);
            tracep->chgQData(oldp+149,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[6]),64);
            tracep->chgQData(oldp+151,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[7]),64);
            tracep->chgQData(oldp+153,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[8]),64);
            tracep->chgQData(oldp+155,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[9]),64);
            tracep->chgQData(oldp+157,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[10]),64);
            tracep->chgQData(oldp+159,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[11]),64);
            tracep->chgQData(oldp+161,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[12]),64);
            tracep->chgQData(oldp+163,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[13]),64);
            tracep->chgQData(oldp+165,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[14]),64);
            tracep->chgQData(oldp+167,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[15]),64);
            tracep->chgQData(oldp+169,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[16]),64);
            tracep->chgQData(oldp+171,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[17]),64);
            tracep->chgQData(oldp+173,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[18]),64);
            tracep->chgQData(oldp+175,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[19]),64);
            tracep->chgQData(oldp+177,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[20]),64);
            tracep->chgQData(oldp+179,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[21]),64);
            tracep->chgQData(oldp+181,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[22]),64);
            tracep->chgQData(oldp+183,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[23]),64);
            tracep->chgQData(oldp+185,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[24]),64);
            tracep->chgQData(oldp+187,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[25]),64);
            tracep->chgQData(oldp+189,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[26]),64);
            tracep->chgQData(oldp+191,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[27]),64);
            tracep->chgQData(oldp+193,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[28]),64);
            tracep->chgQData(oldp+195,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[29]),64);
            tracep->chgQData(oldp+197,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[30]),64);
            tracep->chgQData(oldp+199,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+201,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+203,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+205,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+207,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+209,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+211,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+213,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+215,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+217,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+219,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+221,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+223,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+225,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+227,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+229,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+231,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+233,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+235,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+237,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+239,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+241,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+243,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+245,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+247,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+249,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+251,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+253,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+255,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+257,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+259,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[30]),64);
            tracep->chgIData(oldp+261,(vlSelf->top_sim__DOT__regfile_u__DOT__i),32);
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+275,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+277,((1U & (IData)(vlSelf->top_sim__DOT__id_alu_info))));
            tracep->chgBit(oldp+278,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+281,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+282,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+283,((1U & (IData)(vlSelf->top_sim__DOT__id_branch_info))));
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x66U 
                                                        & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))))));
            tracep->chgBit(oldp+285,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+286,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x66U 
                                                         & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))) 
                                            | (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+287,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+289,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+291,(((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                         + ((- (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub))) 
                                            ^ vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)) 
                                        + ((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)
                                            ? 1ULL : 0ULL))),64);
            tracep->chgQData(oldp+293,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+295,(((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+297,(((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+299,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res),64);
            tracep->chgQData(oldp+301,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+303,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+305,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+307,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgCData(oldp+309,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+310,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res),64);
            tracep->chgBit(oldp+312,((IData)((0U != 
                                              (0x500U 
                                               & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))));
            tracep->chgIData(oldp+313,((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)),32);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+316,((0U != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)));
            tracep->chgBit(oldp+317,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))))));
            tracep->chgBit(oldp+318,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt));
            tracep->chgBit(oldp+319,(VL_GTS_IQQ(1,64,64, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
            tracep->chgBit(oldp+320,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu));
            tracep->chgBit(oldp+321,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                      > vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
            tracep->chgBit(oldp+322,((IData)((0U != 
                                              (0xe0U 
                                               & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))));
            tracep->chgBit(oldp+323,(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump));
            tracep->chgQData(oldp+324,(((IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                         ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                         : ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                             ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                             : 0ULL))),64);
            tracep->chgQData(oldp+326,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                         ? ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                             ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                             : ((0x20U 
                                                 & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                                 ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                                 : 0ULL))
                                         : vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)),64);
            tracep->chgQData(oldp+328,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                         ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                         : 4ULL)),64);
        }
        tracep->chgBit(oldp+330,(vlSelf->clk));
        tracep->chgBit(oldp+331,(vlSelf->reset));
        tracep->chgQData(oldp+332,(vlSelf->IF_pc_o),64);
        tracep->chgQData(oldp+334,(vlSelf->reg_data_o[0]),64);
        tracep->chgQData(oldp+336,(vlSelf->reg_data_o[1]),64);
        tracep->chgQData(oldp+338,(vlSelf->reg_data_o[2]),64);
        tracep->chgQData(oldp+340,(vlSelf->reg_data_o[3]),64);
        tracep->chgQData(oldp+342,(vlSelf->reg_data_o[4]),64);
        tracep->chgQData(oldp+344,(vlSelf->reg_data_o[5]),64);
        tracep->chgQData(oldp+346,(vlSelf->reg_data_o[6]),64);
        tracep->chgQData(oldp+348,(vlSelf->reg_data_o[7]),64);
        tracep->chgQData(oldp+350,(vlSelf->reg_data_o[8]),64);
        tracep->chgQData(oldp+352,(vlSelf->reg_data_o[9]),64);
        tracep->chgQData(oldp+354,(vlSelf->reg_data_o[10]),64);
        tracep->chgQData(oldp+356,(vlSelf->reg_data_o[11]),64);
        tracep->chgQData(oldp+358,(vlSelf->reg_data_o[12]),64);
        tracep->chgQData(oldp+360,(vlSelf->reg_data_o[13]),64);
        tracep->chgQData(oldp+362,(vlSelf->reg_data_o[14]),64);
        tracep->chgQData(oldp+364,(vlSelf->reg_data_o[15]),64);
        tracep->chgQData(oldp+366,(vlSelf->reg_data_o[16]),64);
        tracep->chgQData(oldp+368,(vlSelf->reg_data_o[17]),64);
        tracep->chgQData(oldp+370,(vlSelf->reg_data_o[18]),64);
        tracep->chgQData(oldp+372,(vlSelf->reg_data_o[19]),64);
        tracep->chgQData(oldp+374,(vlSelf->reg_data_o[20]),64);
        tracep->chgQData(oldp+376,(vlSelf->reg_data_o[21]),64);
        tracep->chgQData(oldp+378,(vlSelf->reg_data_o[22]),64);
        tracep->chgQData(oldp+380,(vlSelf->reg_data_o[23]),64);
        tracep->chgQData(oldp+382,(vlSelf->reg_data_o[24]),64);
        tracep->chgQData(oldp+384,(vlSelf->reg_data_o[25]),64);
        tracep->chgQData(oldp+386,(vlSelf->reg_data_o[26]),64);
        tracep->chgQData(oldp+388,(vlSelf->reg_data_o[27]),64);
        tracep->chgQData(oldp+390,(vlSelf->reg_data_o[28]),64);
        tracep->chgQData(oldp+392,(vlSelf->reg_data_o[29]),64);
        tracep->chgQData(oldp+394,(vlSelf->reg_data_o[30]),64);
        tracep->chgCData(oldp+396,(vlSelf->id_rs1_idx_o),5);
        tracep->chgQData(oldp+397,(vlSelf->id_rs1_rdata_o),64);
        tracep->chgCData(oldp+399,(vlSelf->id_rs2_idx_o),5);
        tracep->chgQData(oldp+400,(vlSelf->id_rs2_rdata_o),64);
        tracep->chgQData(oldp+402,(vlSelf->id_imm_o),64);
        tracep->chgBit(oldp+404,(vlSelf->id_rd_wen_o));
        tracep->chgCData(oldp+405,(vlSelf->id_rd_idx_o),5);
        tracep->chgQData(oldp+406,(vlSelf->ex_alu_rd_wdata_o),64);
        tracep->chgQData(oldp+408,(vlSelf->ex_agu_mem_addr_o),64);
        tracep->chgBit(oldp+410,(vlSelf->ex_branch_jump_o));
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
