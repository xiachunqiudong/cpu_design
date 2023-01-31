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
            tracep->chgSData(oldp+18,(vlSelf->top_sim__DOT__id_ld_st_info),11);
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
            tracep->chgQData(oldp+27,(vlSelf->top_sim__DOT__ex_alu_res),64);
            tracep->chgQData(oldp+29,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res),64);
            tracep->chgBit(oldp+31,(vlSelf->top_sim__DOT__ex_branch_jump));
            tracep->chgQData(oldp+32,(vlSelf->top_sim__DOT__mem_rdata),64);
            tracep->chgQData(oldp+34,((0xfffffffffffffff8ULL 
                                       & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res)),64);
            tracep->chgBit(oldp+36,((IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))))));
            tracep->chgCData(oldp+37,(vlSelf->top_sim__DOT__ram_byte_en),8);
            tracep->chgQData(oldp+38,((((((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                                                 >> 3U))))) 
                                          & (((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))))))))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                                                   >> 2U))))) 
                                            & (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top_sim__DOT__rf_rs2_rdata))))))))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                                                  >> 1U))))) 
                                           & (((QData)((IData)(vlSelf->top_sim__DOT__rf_rs2_rdata)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top_sim__DOT__rf_rs2_rdata))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))))) 
                                          & vlSelf->top_sim__DOT__rf_rs2_rdata))),64);
            tracep->chgBit(oldp+40,((IData)((0U != 
                                             (0x7f0U 
                                              & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))))));
            tracep->chgQData(oldp+41,(vlSelf->top_sim__DOT__ram_rdata),64);
            tracep->chgQData(oldp+43,(((0x10U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                        ? vlSelf->top_sim__DOT__mem_rdata
                                        : ((1U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                            ? vlSelf->top_sim__DOT__id_csr_rdata
                                            : vlSelf->top_sim__DOT__ex_alu_res))),64);
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 6U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 5U))));
            tracep->chgBit(oldp+47,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                           >> 7U))));
            tracep->chgBit(oldp+48,((0x6fU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+49,((0x67U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+50,((0x63U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgQData(oldp+51,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm),64);
            tracep->chgQData(oldp+53,((((0x6fU == (0x7fU 
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
            tracep->chgSData(oldp+55,((0x3ffU & (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))),10);
            tracep->chgSData(oldp+56,((((0x13U == (0x7fU 
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
            tracep->chgBit(oldp+57,(((((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                         | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs)) 
                                        | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc)) 
                                       | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi)) 
                                      | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi)) 
                                     | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))));
            tracep->chgSData(oldp+58,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o),10);
            tracep->chgCData(oldp+59,((((IData)((0x63U 
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
            tracep->chgSData(oldp+60,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o),11);
            tracep->chgCData(oldp+61,((((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw) 
                                        << 5U) | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci))))))),6);
            tracep->chgBit(oldp+62,((((((~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall)) 
                                        & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak))) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+63,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall));
            tracep->chgBit(oldp+64,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak));
            tracep->chgBit(oldp+65,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret));
            tracep->chgCData(oldp+66,((0x7fU & vlSelf->top_sim__DOT__if_instr)),7);
            tracep->chgCData(oldp+67,((7U & (vlSelf->top_sim__DOT__if_instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+68,((vlSelf->top_sim__DOT__if_instr 
                                       >> 0x19U)),7);
            tracep->chgBit(oldp+69,((0x13U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+70,((0x1bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+71,((0x33U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+72,((0x3bU == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+73,((3U == (0x7fU & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+74,((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+75,((0x37U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+76,((0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+77,((0x73U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))));
            tracep->chgBit(oldp+78,((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+79,((IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+80,(((IData)((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+81,(((IData)((0x101bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+82,((IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+83,((IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+84,((IData)((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+85,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+86,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+87,(((IData)((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+88,(((IData)((0x501bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+89,((IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+90,((IData)((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+91,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+92,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+93,(((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+94,(((IData)((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+95,(((IData)((0x1033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+96,(((IData)((0x103bU 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+97,(((IData)((0x2033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+98,(((IData)((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+99,(((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                     & (0U == (vlSelf->top_sim__DOT__if_instr 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+100,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+101,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+102,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+103,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+104,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+105,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+106,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+107,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+108,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+109,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+110,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+111,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+112,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+113,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+114,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+115,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+116,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+117,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+118,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+119,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+120,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+121,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+122,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+123,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw));
            tracep->chgBit(oldp+124,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs));
            tracep->chgBit(oldp+125,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc));
            tracep->chgBit(oldp+126,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+127,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+128,(vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci));
            tracep->chgBit(oldp+129,((((((((((0x37U 
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
            tracep->chgBit(oldp+130,(((((0x33U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgQData(oldp+131,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+133,((((- (QData)((IData)(
                                                            (vlSelf->top_sim__DOT__if_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_sim__DOT__if_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_sim__DOT__if_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+135,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+137,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+139,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top_sim__DOT__if_instr))))),64);
            tracep->chgBit(oldp+141,(((((0x13U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+142,(((0x37U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__if_instr)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+143,((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+144,((IData)((0x2073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+145,((IData)((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))));
            tracep->chgBit(oldp+146,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi));
            tracep->chgBit(oldp+147,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi));
            tracep->chgBit(oldp+148,(vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci));
            tracep->chgBit(oldp+149,((((((((((0x37U 
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
            tracep->chgQData(oldp+150,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0]),64);
            tracep->chgQData(oldp+152,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[1]),64);
            tracep->chgQData(oldp+154,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[2]),64);
            tracep->chgQData(oldp+156,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[3]),64);
            tracep->chgQData(oldp+158,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[4]),64);
            tracep->chgQData(oldp+160,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[5]),64);
            tracep->chgQData(oldp+162,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[6]),64);
            tracep->chgQData(oldp+164,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[7]),64);
            tracep->chgQData(oldp+166,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[8]),64);
            tracep->chgQData(oldp+168,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[9]),64);
            tracep->chgQData(oldp+170,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[10]),64);
            tracep->chgQData(oldp+172,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[11]),64);
            tracep->chgQData(oldp+174,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[12]),64);
            tracep->chgQData(oldp+176,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[13]),64);
            tracep->chgQData(oldp+178,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[14]),64);
            tracep->chgQData(oldp+180,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[15]),64);
            tracep->chgQData(oldp+182,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[16]),64);
            tracep->chgQData(oldp+184,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[17]),64);
            tracep->chgQData(oldp+186,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[18]),64);
            tracep->chgQData(oldp+188,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[19]),64);
            tracep->chgQData(oldp+190,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[20]),64);
            tracep->chgQData(oldp+192,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[21]),64);
            tracep->chgQData(oldp+194,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[22]),64);
            tracep->chgQData(oldp+196,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[23]),64);
            tracep->chgQData(oldp+198,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[24]),64);
            tracep->chgQData(oldp+200,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[25]),64);
            tracep->chgQData(oldp+202,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[26]),64);
            tracep->chgQData(oldp+204,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[27]),64);
            tracep->chgQData(oldp+206,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[28]),64);
            tracep->chgQData(oldp+208,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[29]),64);
            tracep->chgQData(oldp+210,(vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[30]),64);
            tracep->chgQData(oldp+212,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0]),64);
            tracep->chgQData(oldp+214,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[1]),64);
            tracep->chgQData(oldp+216,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[2]),64);
            tracep->chgQData(oldp+218,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[3]),64);
            tracep->chgQData(oldp+220,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[4]),64);
            tracep->chgQData(oldp+222,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[5]),64);
            tracep->chgQData(oldp+224,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[6]),64);
            tracep->chgQData(oldp+226,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[7]),64);
            tracep->chgQData(oldp+228,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[8]),64);
            tracep->chgQData(oldp+230,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[9]),64);
            tracep->chgQData(oldp+232,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[10]),64);
            tracep->chgQData(oldp+234,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[11]),64);
            tracep->chgQData(oldp+236,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[12]),64);
            tracep->chgQData(oldp+238,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[13]),64);
            tracep->chgQData(oldp+240,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[14]),64);
            tracep->chgQData(oldp+242,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[15]),64);
            tracep->chgQData(oldp+244,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[16]),64);
            tracep->chgQData(oldp+246,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[17]),64);
            tracep->chgQData(oldp+248,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[18]),64);
            tracep->chgQData(oldp+250,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[19]),64);
            tracep->chgQData(oldp+252,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[20]),64);
            tracep->chgQData(oldp+254,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[21]),64);
            tracep->chgQData(oldp+256,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[22]),64);
            tracep->chgQData(oldp+258,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[23]),64);
            tracep->chgQData(oldp+260,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[24]),64);
            tracep->chgQData(oldp+262,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[25]),64);
            tracep->chgQData(oldp+264,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[26]),64);
            tracep->chgQData(oldp+266,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[27]),64);
            tracep->chgQData(oldp+268,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[28]),64);
            tracep->chgQData(oldp+270,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[29]),64);
            tracep->chgQData(oldp+272,(vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[30]),64);
            tracep->chgIData(oldp+274,(vlSelf->top_sim__DOT__regfile_u__DOT__i),32);
            tracep->chgBit(oldp+275,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+278,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+281,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+282,((1U & ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+283,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+284,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+285,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+287,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+289,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+292,((1U & (IData)(vlSelf->top_sim__DOT__id_alu_info))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+296,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+297,((1U & ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+298,((1U & (IData)(vlSelf->top_sim__DOT__id_branch_info))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x200U 
                                                      & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                    | (0U 
                                                       != 
                                                       (0x66U 
                                                        & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))))));
            tracep->chgBit(oldp+300,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub));
            tracep->chgBit(oldp+301,((1U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x200U 
                                                       & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                     | (0U 
                                                        != 
                                                        (0x66U 
                                                         & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))) 
                                            | (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))));
            tracep->chgQData(oldp+302,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1),64);
            tracep->chgQData(oldp+304,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2),64);
            tracep->chgQData(oldp+306,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        << (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+308,((QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt))),64);
            tracep->chgQData(oldp+310,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+312,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res),64);
            tracep->chgQData(oldp+314,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        >> (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+316,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2))),64);
            tracep->chgQData(oldp+318,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        | vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+320,((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                        & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)),64);
            tracep->chgQData(oldp+322,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_op2),64);
            tracep->chgBit(oldp+324,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_cout));
            tracep->chgCData(oldp+325,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2),6);
            tracep->chgQData(oldp+326,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)))),64);
            tracep->chgBit(oldp+330,((0U != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)));
            tracep->chgBit(oldp+331,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))))));
            tracep->chgBit(oldp+332,(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt));
            tracep->chgBit(oldp+333,((1U & (~ (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_cout)))));
            tracep->chgBit(oldp+334,((1U & (~ (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt)))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 8U))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 7U))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 6U))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 5U))));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 4U))));
            tracep->chgBit(oldp+342,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 3U))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 2U))));
            tracep->chgBit(oldp+344,((1U & ((IData)(vlSelf->top_sim__DOT__id_ld_st_info) 
                                            >> 1U))));
            tracep->chgBit(oldp+345,((1U & (IData)(vlSelf->top_sim__DOT__id_ld_st_info))));
            tracep->chgCData(oldp+346,(vlSelf->top_sim__DOT__mem_u__DOT__lb_rdata),8);
            tracep->chgSData(oldp+347,(vlSelf->top_sim__DOT__mem_u__DOT__lh_rdata),16);
            tracep->chgIData(oldp+348,(vlSelf->top_sim__DOT__mem_u__DOT__lw_rdata),32);
            tracep->chgQData(oldp+349,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lb_rdata) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lb_rdata)))),64);
            tracep->chgQData(oldp+351,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lh_rdata) 
                                                                >> 0xfU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lh_rdata)))),64);
            tracep->chgQData(oldp+353,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top_sim__DOT__mem_u__DOT__lw_rdata 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lw_rdata)))),64);
            tracep->chgQData(oldp+355,((QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lb_rdata))),64);
            tracep->chgQData(oldp+357,((QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lh_rdata))),64);
            tracep->chgQData(oldp+359,((QData)((IData)(vlSelf->top_sim__DOT__mem_u__DOT__lw_rdata))),64);
            tracep->chgCData(oldp+361,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res))
                                                 ? 0x80U
                                                 : 0x40U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res))
                                                 ? 0x20U
                                                 : 0x10U))
                                         : ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res))
                                                 ? 2U
                                                 : 1U)))),8);
            tracep->chgCData(oldp+362,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 1U)))
                                             ? 0xc0U
                                             : 0x30U)
                                         : ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 1U)))
                                             ? 0xcU
                                             : 3U))),8);
            tracep->chgCData(oldp+363,(((1U & (IData)(
                                                      (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0U) : 0xfU)),8);
            tracep->chgSData(oldp+364,((0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                                           >> 3U)) 
                                                  << 3U))),10);
            tracep->chgQData(oldp+365,(vlSelf->top_sim__DOT__ram_u__DOT__rdata),64);
            tracep->chgQData(oldp+367,(vlSelf->top_sim__DOT__ram_u__DOT__mask),64);
            tracep->chgQData(oldp+369,(vlSelf->top_sim__DOT__ram_u__DOT__wdata),64);
            tracep->chgBit(oldp+371,((1U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))));
            tracep->chgBit(oldp+372,((IData)((0U != 
                                              (0xe0U 
                                               & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))));
            tracep->chgBit(oldp+373,(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump));
            tracep->chgQData(oldp+374,(((IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                         ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                                         : ((0x20U 
                                             & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                                             ? vlSelf->top_sim__DOT__rf_rs1_rdata
                                             : 0ULL))),64);
            tracep->chgQData(oldp+376,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
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
            tracep->chgQData(oldp+378,(((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                         ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                         : 4ULL)),64);
        }
        tracep->chgQData(oldp+380,(vlSelf->reg_data_o[0]),64);
        tracep->chgQData(oldp+382,(vlSelf->reg_data_o[1]),64);
        tracep->chgQData(oldp+384,(vlSelf->reg_data_o[2]),64);
        tracep->chgQData(oldp+386,(vlSelf->reg_data_o[3]),64);
        tracep->chgQData(oldp+388,(vlSelf->reg_data_o[4]),64);
        tracep->chgQData(oldp+390,(vlSelf->reg_data_o[5]),64);
        tracep->chgQData(oldp+392,(vlSelf->reg_data_o[6]),64);
        tracep->chgQData(oldp+394,(vlSelf->reg_data_o[7]),64);
        tracep->chgQData(oldp+396,(vlSelf->reg_data_o[8]),64);
        tracep->chgQData(oldp+398,(vlSelf->reg_data_o[9]),64);
        tracep->chgQData(oldp+400,(vlSelf->reg_data_o[10]),64);
        tracep->chgQData(oldp+402,(vlSelf->reg_data_o[11]),64);
        tracep->chgQData(oldp+404,(vlSelf->reg_data_o[12]),64);
        tracep->chgQData(oldp+406,(vlSelf->reg_data_o[13]),64);
        tracep->chgQData(oldp+408,(vlSelf->reg_data_o[14]),64);
        tracep->chgQData(oldp+410,(vlSelf->reg_data_o[15]),64);
        tracep->chgQData(oldp+412,(vlSelf->reg_data_o[16]),64);
        tracep->chgQData(oldp+414,(vlSelf->reg_data_o[17]),64);
        tracep->chgQData(oldp+416,(vlSelf->reg_data_o[18]),64);
        tracep->chgQData(oldp+418,(vlSelf->reg_data_o[19]),64);
        tracep->chgQData(oldp+420,(vlSelf->reg_data_o[20]),64);
        tracep->chgQData(oldp+422,(vlSelf->reg_data_o[21]),64);
        tracep->chgQData(oldp+424,(vlSelf->reg_data_o[22]),64);
        tracep->chgQData(oldp+426,(vlSelf->reg_data_o[23]),64);
        tracep->chgQData(oldp+428,(vlSelf->reg_data_o[24]),64);
        tracep->chgQData(oldp+430,(vlSelf->reg_data_o[25]),64);
        tracep->chgQData(oldp+432,(vlSelf->reg_data_o[26]),64);
        tracep->chgQData(oldp+434,(vlSelf->reg_data_o[27]),64);
        tracep->chgQData(oldp+436,(vlSelf->reg_data_o[28]),64);
        tracep->chgQData(oldp+438,(vlSelf->reg_data_o[29]),64);
        tracep->chgQData(oldp+440,(vlSelf->reg_data_o[30]),64);
        tracep->chgQData(oldp+442,(vlSelf->IF_pc_o),64);
        tracep->chgBit(oldp+444,(vlSelf->clk));
        tracep->chgBit(oldp+445,(vlSelf->reset));
        tracep->chgCData(oldp+446,(vlSelf->id_rs1_idx_o),5);
        tracep->chgQData(oldp+447,(vlSelf->id_rs1_rdata_o),64);
        tracep->chgCData(oldp+449,(vlSelf->id_rs2_idx_o),5);
        tracep->chgQData(oldp+450,(vlSelf->id_rs2_rdata_o),64);
        tracep->chgQData(oldp+452,(vlSelf->id_imm_o),64);
        tracep->chgBit(oldp+454,(vlSelf->id_rd_wen_o));
        tracep->chgCData(oldp+455,(vlSelf->id_rd_idx_o),5);
        tracep->chgQData(oldp+456,(vlSelf->ex_alu_res_o),64);
        tracep->chgQData(oldp+458,(vlSelf->ex_mem_addr_o),64);
        tracep->chgBit(oldp+460,(vlSelf->ex_branch_jump_o));
        tracep->chgQData(oldp+461,(vlSelf->mem_rdata_o),64);
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
