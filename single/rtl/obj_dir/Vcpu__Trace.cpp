// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__traceChgSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu___024root* const __restrict vlSelf = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu___024root__traceChgSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r),64);
            tracep->chgQData(oldp+2,((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                        ? ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                            ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                            : ((0x20U 
                                                & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                                ? (
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                         >> 5U)) 
                                                       | (0U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->cpu__DOT__if_instr 
                                                              >> 0xfU)))))
                                                    ? 0ULL
                                                    : 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & ((vlSelf->cpu__DOT__if_instr 
                                                          >> 0xfU) 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                    [
                                                    (0x1fU 
                                                     & ((vlSelf->cpu__DOT__if_instr 
                                                         >> 0xfU) 
                                                        - (IData)(1U)))]
                                                     : 0ULL))
                                                : 0ULL))
                                        : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r) 
                                      + ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                          ? vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                          : 4ULL))),64);
            tracep->chgBit(oldp+4,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                          >> 5U))));
            tracep->chgCData(oldp+5,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                               >> 0xfU))),5);
            tracep->chgQData(oldp+6,(((1U & ((~ ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                 >> 5U)) 
                                             | (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->cpu__DOT__if_instr 
                                                    >> 0xfU)))))
                                       ? 0ULL : ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0ULL))),64);
            tracep->chgIData(oldp+8,(vlSelf->cpu__DOT__if_instr),32);
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                               >> 0x14U))),5);
            tracep->chgQData(oldp+10,(vlSelf->cpu__DOT__rf_rs1_rdata),64);
            tracep->chgQData(oldp+12,(((0U == (0x1fU 
                                               & (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x14U)))
                                        ? 0ULL : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->cpu__DOT__if_instr 
                                                        >> 0x14U) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                   : 0ULL))),64);
            tracep->chgBit(oldp+14,(((((((IData)((0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                         | (IData)(
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu__DOT__if_instr)))) 
                                        | (IData)((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu__DOT__if_instr)))) 
                                       | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+15,((vlSelf->cpu__DOT__if_instr 
                                       >> 0x14U)),12);
            tracep->chgSData(oldp+16,(vlSelf->cpu__DOT__id_opcode_info),12);
            tracep->chgSData(oldp+17,(vlSelf->cpu__DOT__id_alu_info),10);
            tracep->chgCData(oldp+18,((((IData)((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                        << 5U) | (((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x5063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x6063U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu__DOT__if_instr))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0x7063U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))))))))),6);
            tracep->chgSData(oldp+19,((((IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                        << 0xaU) | 
                                       (((IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                         << 9U) | (
                                                   ((IData)(
                                                            (0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                    << 8U) 
                                                   | (((IData)(
                                                               (0x3003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->cpu__DOT__if_instr))) 
                                                       << 7U) 
                                                      | (((IData)(
                                                                  (0x4003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          << 6U) 
                                                         | (((IData)(
                                                                     (0x5003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))) 
                                                             << 5U) 
                                                            | (((IData)(
                                                                        (0x6003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                                << 4U) 
                                                               | (((IData)(
                                                                           (0x23U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                                   << 3U) 
                                                                  | (((IData)(
                                                                              (0x1023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                      << 2U) 
                                                                     | (((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                         << 1U) 
                                                                        | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))))))))))))),11);
            tracep->chgCData(oldp+20,((((IData)((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                        << 5U) | (((IData)(
                                                           (0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x3073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))))))),6);
            tracep->chgQData(oldp+21,(vlSelf->cpu__DOT__id_u__DOT__rv64_imm),64);
            tracep->chgBit(oldp+23,((((((~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgCData(oldp+24,((0x1fU & (vlSelf->cpu__DOT__if_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+25,(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall));
            tracep->chgBit(oldp+26,(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak));
            tracep->chgBit(oldp+27,(vlSelf->cpu__DOT__id_u__DOT__rv64_mret));
            tracep->chgQData(oldp+28,(((IData)((0U 
                                                != 
                                                (0x500U 
                                                 & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)))
                                        : vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)),64);
            tracep->chgQData(oldp+30,((vlSelf->cpu__DOT__rf_rs1_rdata 
                                       + vlSelf->cpu__DOT__id_u__DOT__rv64_imm)),64);
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                           >> 6U))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                           >> 7U))));
            tracep->chgQData(oldp+34,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgBit(oldp+36,(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj));
            tracep->chgQData(oldp+37,(((IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                        ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                        : ((0x20U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                            ? ((1U 
                                                & ((~ 
                                                    ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                     >> 5U)) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->cpu__DOT__if_instr 
                                                          >> 0xfU)))))
                                                ? 0ULL
                                                : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->cpu__DOT__if_instr 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->cpu__DOT__if_instr 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0ULL))
                                            : 0ULL))),64);
            tracep->chgQData(oldp+39,(((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                        ? ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                                            ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                            : ((0x20U 
                                                & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                                                ? (
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                                         >> 5U)) 
                                                       | (0U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->cpu__DOT__if_instr 
                                                              >> 0xfU)))))
                                                    ? 0ULL
                                                    : 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & ((vlSelf->cpu__DOT__if_instr 
                                                          >> 0xfU) 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                    [
                                                    (0x1fU 
                                                     & ((vlSelf->cpu__DOT__if_instr 
                                                         >> 0xfU) 
                                                        - (IData)(1U)))]
                                                     : 0ULL))
                                                : 0ULL))
                                        : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)),64);
            tracep->chgQData(oldp+41,(((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                        ? vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                        : 4ULL)),64);
            tracep->chgSData(oldp+43,((0x3ffU & (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))),10);
            tracep->chgSData(oldp+44,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info),12);
            tracep->chgBit(oldp+45,(((((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+46,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgSData(oldp+47,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+48,((((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+49,((((((~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+50,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+51,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+52,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+53,((0x7fU & vlSelf->cpu__DOT__if_instr)),7);
            tracep->chgCData(oldp+54,((7U & (vlSelf->cpu__DOT__if_instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+55,((vlSelf->cpu__DOT__if_instr 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+56,((0x13U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+57,((0x1bU == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+58,((0x33U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+59,((0x3bU == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+60,((0x63U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+61,((0x6fU == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+62,((0x67U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+63,((3U == (0x7fU & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+64,((0x23U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+65,((0x37U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+66,((0x17U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+67,((0x73U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))));
            tracep->chgBit(oldp+68,((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+69,((IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+70,(((IData)((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+71,(((IData)((0x101bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+72,((IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+73,((IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+74,((IData)((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+75,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+76,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+77,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+78,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+79,((IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+80,((IData)((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+81,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+82,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+83,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+84,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+85,(((IData)((0x1033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+86,(((IData)((0x103bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+87,(((IData)((0x2033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+88,(((IData)((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+89,(((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+90,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+91,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+92,(((IData)((0x5033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+93,(((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+94,(((IData)((0x6033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+95,(((IData)((0x7033U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                     & (0U == (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+96,((IData)((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+97,((IData)((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+98,((IData)((0x4063U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+99,((IData)((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+100,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+101,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+102,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+103,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+104,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+105,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+106,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+107,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+108,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+109,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+110,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+111,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+112,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+113,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+114,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+115,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+116,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+117,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+118,(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+119,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                           & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret)))));
            tracep->chgBit(oldp+120,(((((0x33U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgQData(oldp+121,((((- (QData)((IData)(
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->cpu__DOT__if_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+123,((((- (QData)((IData)(
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->cpu__DOT__if_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+125,((((- (QData)((IData)(
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->cpu__DOT__if_instr 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->cpu__DOT__if_instr 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->cpu__DOT__if_instr 
                                                                                >> 7U))))))))),64);
            tracep->chgQData(oldp+127,((((- (QData)((IData)(
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->cpu__DOT__if_instr 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->cpu__DOT__if_instr) 
                                                              | ((0x800U 
                                                                  & (vlSelf->cpu__DOT__if_instr 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->cpu__DOT__if_instr 
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->cpu__DOT__if_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->cpu__DOT__if_instr))))),64);
            tracep->chgBit(oldp+131,(((((0x13U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+132,(((0x37U == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+133,((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+134,((IData)((0x2073U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+135,((IData)((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))));
            tracep->chgBit(oldp+136,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+137,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+138,(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci));
            tracep->chgBit(oldp+139,((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                           & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi))) 
                                          & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi))) 
                                         & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))) 
                                        & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall))) 
                                       & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                                      & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret)))));
            tracep->chgQData(oldp+140,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+142,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+144,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+146,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+148,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+150,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+152,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+154,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+156,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+158,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+160,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+162,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+164,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+166,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+168,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+170,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+172,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+174,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+176,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+178,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+180,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+182,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+184,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+186,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+188,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+190,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+192,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+194,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+196,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+198,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+200,(vlSelf->cpu__DOT__regfile_u__DOT__reg_data[30]),64);
            tracep->chgIData(oldp+202,(vlSelf->cpu__DOT__regfile_u__DOT__i),32);
            tracep->chgBit(oldp+203,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+205,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+207,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+208,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+210,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+211,((1U & ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+212,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+213,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+214,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+215,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+216,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+217,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+218,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+219,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+220,((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+221,((1U & (IData)(vlSelf->cpu__DOT__id_alu_info))));
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x66U 
                                                        & (IData)(vlSelf->cpu__DOT__id_opcode_info))))))));
            tracep->chgBit(oldp+223,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+224,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x66U 
                                                         & (IData)(vlSelf->cpu__DOT__id_opcode_info))))) 
                                            | (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+225,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+227,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+229,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgQData(oldp+231,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        << (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
            tracep->chgQData(oldp+233,(((1U & (IData)(
                                                      (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                       >> 0x3fU)))
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+235,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res),64);
            tracep->chgQData(oldp+237,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        >> (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
            tracep->chgQData(oldp+239,(VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)))),64);
            tracep->chgQData(oldp+241,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+243,((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+245,(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res),64);
            tracep->chgBit(oldp+247,((IData)((0U != 
                                              (0x500U 
                                               & (IData)(vlSelf->cpu__DOT__id_opcode_info))))));
            tracep->chgIData(oldp+248,((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)),32);
            tracep->chgQData(oldp+249,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+251,((0U != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)));
            tracep->chgBit(oldp+252,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))))));
            tracep->chgBit(oldp+253,((1U & (IData)(
                                                   (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+254,((1U & ((~ (IData)(
                                                       (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                        >> 0x3fU))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)))))));
        }
        tracep->chgBit(oldp+255,(vlSelf->clk));
        tracep->chgBit(oldp+256,(vlSelf->reset));
    }
}

void Vcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcpu___024root* const __restrict vlSelf = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
