// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "Vtop_sim___024root.h"
#include "Vtop_sim__Syms.h"

//==========

VL_INLINE_OPT void Vtop_sim___024root___sequent__TOP__2(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___sequent__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    // Body
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r 
            = vlSelf->top_sim__DOT__id_ilegl_instr;
    }
    vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_mret;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall;
    }
    vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r 
        = vlSelf->top_sim__DOT__ifu_prdt_taken;
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r 
            = vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_info_r 
            = (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                << 5U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs) 
                           << 4U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc) 
                                      << 3U) | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))))));
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r 
            = ((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                  | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                 | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
               | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r 
            = vlSelf->top_sim__DOT__rf_rs1_rdata;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r 
            = (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
               >> 0x14U);
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r 
            = (((IData)((0x63U == (0x707fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                << 5U) | (((IData)((0x1063U == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                           << 4U) | (((IData)((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                      << 3U) | (((IData)(
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
                                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))))));
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r 
            = (((IData)((3U == (0x707fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                             << 9U) | (((IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                        << 8U) | (((IData)(
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
                                                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))));
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r 
            = vlSelf->top_sim__DOT__rf_rs2_rdata;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r = vlSelf->top_sim__DOT__u_id__DOT__rv64_imm;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r 
            = (((((((IData)((0x33U == (0x707fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                    & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                              >> 0x19U))) | (IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                  | ((IData)((0x3bU == (0x707fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                     & (0U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                               >> 0x19U)))) | (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))) 
                << 9U) | (((((IData)((0x33U == (0x707fU 
                                                & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                             & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                          >> 0x19U))) 
                            | ((IData)((0x3bU == (0x707fU 
                                                  & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                               & (0x20U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                            >> 0x19U)))) 
                           << 8U) | (((((((IData)((0x1033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                              >> 0x19U))) 
                                         | ((IData)(
                                                    (0x1013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                            & (0U == 
                                               (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                >> 0x19U)))) 
                                        | ((IData)(
                                                   (0x103bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                           & (0U == 
                                              (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                               >> 0x19U)))) 
                                       | ((IData)((0x101bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                              >> 0x19U)))) 
                                      << 7U) | (((((IData)(
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
                                                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))));
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r 
            = vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r = vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r;
    }
    if (vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r 
            = (((0x13U == (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                << 0xbU) | (((0x1bU == (0x7fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                             << 0xaU) | (((0x33U == 
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
                                                                 & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))))))))));
    }
    vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r = 0U;
    vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r 
        = (0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)));
    vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r = vlSelf->top_sim__DOT__u_IF__DOT__pc_r;
    vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid 
        = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r = vlSelf->top_sim__DOT__ifu_instr;
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
        = ((IData)((0U != (0x62U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))
            ? vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r
            : ((4U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))
                ? 0ULL : vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
        = ((IData)((0U != (0xc1eU & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))
            ? vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r
            : ((IData)((0U != (0x60U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))
                ? 4ULL : vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub 
        = (1U & (((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                  >> 8U) | ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                            >> 7U)));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2 
        = (0x3fU & ((IData)((0U != (0x500U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))
                     ? (0x1fU & (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))
                     : (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2 
        = ((- (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub))) 
           ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__u_IF__DOT__pc_r = ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : (vlSelf->top_sim__DOT__u_ifu__DOT__pc_add_op1 
                                                 + 
                                                 ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
                                                   ? vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                                   : 4ULL)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall = ((IData)(
                                                           (0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                       >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak = 
        ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
         & (1U == (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                   >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_mret = ((IData)(
                                                          (0x73U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                  & (0x302U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                      >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw = (IData)(
                                                          (0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs = (IData)(
                                                          (0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc = (IData)(
                                                          (0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi = (IData)(
                                                           (0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi = (IData)(
                                                           (0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci = (IData)(
                                                           (0x7073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_imm = (((
                                                   (((- (QData)((IData)(
                                                                        ((((0x13U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                           | (0x1bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                          | (3U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))) 
                                                                         | (0x67U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                           >> 0x14U))))) 
                                                    | ((- (QData)((IData)(
                                                                          (0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            ((0xfe0U 
                                                                              & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                                >> 7U)))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                              >> 0x1fU)))) 
                                                          << 0xdU) 
                                                         | (QData)((IData)(
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
                                                                                >> 7U)))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))) 
                                                     & (((- (QData)((IData)(
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
                                                                                >> 0x14U)))))))))) 
                                                 | ((- (QData)((IData)(
                                                                       ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r)))))) 
                                                    & (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xfffff000U 
                                                                          & vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r))))));
    VL_EXTEND_WI(65,1, __Vtemp2, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
        = ((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
            + vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2) 
           + (((QData)((IData)(__Vtemp2[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp2[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp5, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
    VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    VL_EXTEND_WI(65,1, __Vtemp7, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
    VL_ADD_W(3, __Vtemp8, __Vtemp6, __Vtemp7);
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
        = ((((((((((- (QData)((IData)((1U & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x200U 
                                                        & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r))) 
                                                      | (0U 
                                                         != 
                                                         (0x7eU 
                                                          & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r))))) 
                                             | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))))) 
                   & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                               >> 7U))))) 
                     & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                              >> 6U))))) 
                    & (QData)((IData)((1U & (((IData)(
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
                                                           >> 0x3fU))))))))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                             >> 5U))))) 
                   & (QData)((IData)((1U & (~ (1U & 
                                               __Vtemp8[2U]))))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                            >> 4U))))) 
                  & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                     ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                           >> 3U))))) 
                 & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                    >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                          >> 2U))))) 
                & VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                         >> 1U))))) 
               & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                  | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r))))) 
              & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                 & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__ifu_instr = ((vlSelf->top_sim__DOT__u_ifu__DOT__u_if_bus__DOT__instr_mem
                                        [(0x3ffU & 
                                          ((IData)(3U) 
                                           + (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))] 
                                        << 0x18U) | 
                                       ((vlSelf->top_sim__DOT__u_ifu__DOT__u_if_bus__DOT__instr_mem
                                         [(0x3ffU & 
                                           ((IData)(2U) 
                                            + (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))] 
                                         << 0x10U) 
                                        | ((vlSelf->top_sim__DOT__u_ifu__DOT__u_if_bus__DOT__instr_mem
                                            [(0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)))] 
                                            << 8U) 
                                           | vlSelf->top_sim__DOT__u_ifu__DOT__u_if_bus__DOT__instr_mem
                                           [(0x3ffU 
                                             & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r))])));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
           & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                     >> 0x14U)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
           & (1U == (vlSelf->top_sim__DOT__ifu_instr 
                     >> 0x14U)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
           & (0x302U == (vlSelf->top_sim__DOT__ifu_instr 
                         >> 0x14U)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr)));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o 
        = (((((((IData)((0x33U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
                & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                          >> 0x19U))) | (IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr)))) 
              | ((IData)((0x3bU == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
                 & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                           >> 0x19U)))) | (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__ifu_instr)))) 
            << 9U) | (((((IData)((0x33U == (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                         & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                      >> 0x19U))) | 
                        ((IData)((0x3bU == (0x707fU 
                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                         & (0x20U == (vlSelf->top_sim__DOT__ifu_instr 
                                      >> 0x19U)))) 
                       << 8U) | (((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U))) 
                                     | ((IData)((0x1013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                        & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                  >> 0x19U)))) 
                                    | ((IData)((0x103bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                       & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                 >> 0x19U)))) 
                                   | ((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__ifu_instr 
                                                >> 0x19U)))) 
                                  << 7U) | (((((IData)(
                                                       (0x2033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__ifu_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->top_sim__DOT__ifu_instr 
                                                   >> 0x19U))) 
                                              | (IData)(
                                                        (0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__ifu_instr)))) 
                                             << 6U) 
                                            | (((((IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__ifu_instr 
                                                      >> 0x19U))) 
                                                 | (IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ifu_instr)))) 
                                                << 5U) 
                                               | (((((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->top_sim__DOT__ifu_instr 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__ifu_instr)))) 
                                                   << 4U) 
                                                  | (((((((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__ifu_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top_sim__DOT__ifu_instr 
                                                              >> 0x19U))) 
                                                         | ((IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__ifu_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top_sim__DOT__ifu_instr 
                                                                >> 0x19U)))) 
                                                        | ((IData)(
                                                                   (0x503bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__ifu_instr))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top_sim__DOT__ifu_instr 
                                                               >> 0x19U)))) 
                                                       | ((IData)(
                                                                  (0x501bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__ifu_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top_sim__DOT__ifu_instr 
                                                              >> 0x19U)))) 
                                                      << 3U) 
                                                     | (((((((IData)(
                                                                     (0x5033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__ifu_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top_sim__DOT__ifu_instr 
                                                                 >> 0x19U))) 
                                                            | ((IData)(
                                                                       (0x5013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__ifu_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__ifu_instr 
                                                                   >> 0x19U)))) 
                                                           | ((IData)(
                                                                      (0x503bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__ifu_instr))) 
                                                              & (0x20U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x19U)))) 
                                                          | ((IData)(
                                                                     (0x501bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__ifu_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top_sim__DOT__ifu_instr 
                                                                 >> 0x19U)))) 
                                                         << 2U) 
                                                        | (((((IData)(
                                                                      (0x6033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__ifu_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__ifu_instr 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x6013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__ifu_instr)))) 
                                                            << 1U) 
                                                           | (((IData)(
                                                                       (0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__ifu_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__ifu_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x7013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top_sim__DOT__ifu_instr)))))))))))));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o 
        = (((IData)((3U == (0x707fU & vlSelf->top_sim__DOT__ifu_instr))) 
            << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))) 
                         << 9U) | (((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr))) 
                                    << 8U) | (((IData)(
                                                       (0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__ifu_instr))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ifu_instr))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__ifu_instr))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0x6003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0x23U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__ifu_instr))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__ifu_instr))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0x2023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__ifu_instr))) 
                                                                 << 1U) 
                                                                | (IData)(
                                                                          (0x3023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->top_sim__DOT__ifu_instr)))))))))))));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm 
        = ((((((- (QData)((IData)(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__ifu_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__ifu_instr)))))) 
               & (((- (QData)((IData)((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x1fU)))) 
                   << 0xcU) | (QData)((IData)((vlSelf->top_sim__DOT__ifu_instr 
                                               >> 0x14U))))) 
              | ((- (QData)((IData)((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr))))) 
                 & (((- (QData)((IData)((vlSelf->top_sim__DOT__ifu_instr 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->top_sim__DOT__ifu_instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top_sim__DOT__ifu_instr 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)((0x63U == (0x7fU 
                                              & vlSelf->top_sim__DOT__ifu_instr))))) 
                & (((- (QData)((IData)((vlSelf->top_sim__DOT__ifu_instr 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
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
                                                            >> 7U)))))))))) 
            | ((- (QData)((IData)((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr))))) 
               & (((- (QData)((IData)((vlSelf->top_sim__DOT__ifu_instr 
                                       >> 0x1fU)))) 
                   << 0x15U) | (QData)((IData)(((0x100000U 
                                                 & (vlSelf->top_sim__DOT__ifu_instr 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->top_sim__DOT__ifu_instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->top_sim__DOT__ifu_instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->top_sim__DOT__ifu_instr 
                                                            >> 0x14U)))))))))) 
           | ((- (QData)((IData)(((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__ifu_instr)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__ifu_instr)))))) 
              & (((QData)((IData)((- (IData)((vlSelf->top_sim__DOT__ifu_instr 
                                              >> 0x1fU))))) 
                  << 0x20U) | (QData)((IData)((0xfffff000U 
                                               & vlSelf->top_sim__DOT__ifu_instr))))));
    vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info 
        = (((0x13U == (0x7fU & vlSelf->top_sim__DOT__ifu_instr)) 
            << 0xbU) | (((0x1bU == (0x7fU & vlSelf->top_sim__DOT__ifu_instr)) 
                         << 0xaU) | (((0x33U == (0x7fU 
                                                 & vlSelf->top_sim__DOT__ifu_instr)) 
                                      << 9U) | (((0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top_sim__DOT__ifu_instr)) 
                                                 << 8U) 
                                                | (((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top_sim__DOT__ifu_instr)) 
                                                    << 7U) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top_sim__DOT__ifu_instr)) 
                                                       << 6U) 
                                                      | (((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top_sim__DOT__ifu_instr)) 
                                                          << 5U) 
                                                         | (((3U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top_sim__DOT__ifu_instr)) 
                                                             << 4U) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top_sim__DOT__ifu_instr)) 
                                                                << 3U) 
                                                               | (((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top_sim__DOT__ifu_instr)) 
                                                                   << 2U) 
                                                                  | (((0x17U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->top_sim__DOT__ifu_instr)) 
                                                                      << 1U) 
                                                                     | (0x73U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top_sim__DOT__ifu_instr)))))))))))));
    vlSelf->top_sim__DOT__ifu_prdt_taken = (1U & (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                   >> 7U) 
                                                  & (IData)(
                                                            (vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm 
                                                             >> 0x3fU))));
    vlSelf->top_sim__DOT__u_ifu__DOT__jump = (1U & 
                                              (((IData)(vlSelf->top_sim__DOT__ifu_prdt_taken) 
                                                | ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                  >> 5U)));
    vlSelf->top_sim__DOT__u_ifu__DOT__pc_add_op1 = 
        ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__jump)
          ? ((0x20U & (IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info))
              ? 0ULL : vlSelf->top_sim__DOT__u_IF__DOT__pc_r)
          : vlSelf->top_sim__DOT__u_IF__DOT__pc_r);
}

void Vtop_sim___024root___eval(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_sim___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop_sim___024root___change_request_1(Vtop_sim___024root* vlSelf);

VL_INLINE_OPT QData Vtop_sim___024root___change_request(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___change_request\n"); );
    // Body
    return (Vtop_sim___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop_sim___024root___change_request_1(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop_sim___024root___eval_debug_assertions(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
