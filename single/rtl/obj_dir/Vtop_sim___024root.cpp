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
    CData/*0:0*/ __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v0;
    CData/*4:0*/ __Vdlyvdim0__top_sim__DOT__regfile_u__DOT__reg_data__v31;
    CData/*0:0*/ __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v31;
    QData/*63:0*/ __Vdlyvval__top_sim__DOT__regfile_u__DOT__reg_data__v31;
    // Body
    if (vlSelf->reset) {
        vlSelf->top_sim__DOT__regfile_u__DOT__i = 0x20U;
    }
    __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v0 = 0U;
    __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v31 = 0U;
    vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r 
        = ((IData)(vlSelf->reset) ? 0ULL : (vlSelf->top_sim__DOT__pc_next_gen_u__DOT__pc_add_op1 
                                            + ((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
                                                ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
                                                : 4ULL)));
    if (vlSelf->reset) {
        __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v0 = 1U;
    } else if (((IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_need_rd) 
                & (0U != (0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                   >> 7U))))) {
        vlSelf->top_sim__DOT__regfile_u__DOT____Vlvbound2 
            = vlSelf->top_sim__DOT__ex_alu_rd_wdata;
        if ((0x1eU >= (0x1fU & ((vlSelf->top_sim__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__top_sim__DOT__regfile_u__DOT__reg_data__v31 
                = vlSelf->top_sim__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v31 = 1U;
            __Vdlyvdim0__top_sim__DOT__regfile_u__DOT__reg_data__v31 
                = (0x1fU & ((vlSelf->top_sim__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
    }
    if (__Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v0) {
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[1U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[2U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[3U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[4U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[5U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[6U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[7U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[8U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[9U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xaU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xbU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xcU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xdU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xeU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0xfU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x10U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x11U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x12U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x13U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x14U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x15U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x16U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x17U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x18U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x19U] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x1aU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x1bU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x1cU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x1dU] = 0ULL;
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[0x1eU] = 0ULL;
    }
    if (__Vdlyvset__top_sim__DOT__regfile_u__DOT__reg_data__v31) {
        vlSelf->top_sim__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__top_sim__DOT__regfile_u__DOT__reg_data__v31] 
            = __Vdlyvval__top_sim__DOT__regfile_u__DOT__reg_data__v31;
    }
    vlSelf->IF_pc_o = vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r;
    vlSelf->top_sim__DOT__if_instr = ((vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                       [(0x3ffU & ((IData)(3U) 
                                                   + (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                       << 0x18U) | 
                                      ((vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                        [(0x3ffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                        << 0x10U) | 
                                       ((vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                         [(0x3ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                         << 8U) | vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                        [(0x3ffU & (IData)(vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))])));
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[1U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [1U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[2U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [2U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[3U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [3U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[4U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [4U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[5U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [5U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[6U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [6U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[7U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [7U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[8U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [8U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[9U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [9U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xaU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xaU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xbU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xbU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xcU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xcU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xdU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xdU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xeU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xeU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0xfU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0xfU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x10U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x10U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x11U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x11U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x12U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x12U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x13U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x13U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x14U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x14U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x15U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x15U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x16U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x16U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x17U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x17U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x18U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x18U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x19U] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x19U];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x1aU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x1aU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x1bU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x1bU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x1cU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x1cU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x1dU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x1dU];
    vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o[0x1eU] 
        = vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
        [0x1eU];
    vlSelf->id_rs1_idx_o = (0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                     >> 0xfU));
    vlSelf->id_rs2_idx_o = (0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                     >> 0x14U));
    vlSelf->id_rd_idx_o = (0x1fU & (vlSelf->top_sim__DOT__if_instr 
                                    >> 7U));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
           & (0U == (vlSelf->top_sim__DOT__if_instr 
                     >> 0x14U)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
           & (1U == (vlSelf->top_sim__DOT__if_instr 
                     >> 0x14U)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret 
        = ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
           & (0x302U == (vlSelf->top_sim__DOT__if_instr 
                         >> 0x14U)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o 
        = (((((((IData)((0x33U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
                & (0U == (vlSelf->top_sim__DOT__if_instr 
                          >> 0x19U))) | (IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr)))) 
              | ((IData)((0x3bU == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
                 & (0U == (vlSelf->top_sim__DOT__if_instr 
                           >> 0x19U)))) | (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__if_instr)))) 
            << 9U) | (((((IData)((0x33U == (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                         & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                      >> 0x19U))) | 
                        ((IData)((0x3bU == (0x707fU 
                                            & vlSelf->top_sim__DOT__if_instr))) 
                         & (0x20U == (vlSelf->top_sim__DOT__if_instr 
                                      >> 0x19U)))) 
                       << 8U) | (((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U))) 
                                     | ((IData)((0x1013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                        & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U)))) 
                                    | ((IData)((0x103bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                       & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                 >> 0x19U)))) 
                                   | ((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__if_instr))) 
                                      & (0U == (vlSelf->top_sim__DOT__if_instr 
                                                >> 0x19U)))) 
                                  << 7U) | (((((IData)(
                                                       (0x2033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->top_sim__DOT__if_instr 
                                                   >> 0x19U))) 
                                              | (IData)(
                                                        (0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__if_instr)))) 
                                             << 6U) 
                                            | (((((IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__if_instr))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__if_instr 
                                                      >> 0x19U))) 
                                                 | (IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr)))) 
                                                << 5U) 
                                               | (((((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__if_instr))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->top_sim__DOT__if_instr 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top_sim__DOT__if_instr)))) 
                                                   << 4U) 
                                                  | (((((((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top_sim__DOT__if_instr 
                                                              >> 0x19U))) 
                                                         | ((IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top_sim__DOT__if_instr 
                                                                >> 0x19U)))) 
                                                        | ((IData)(
                                                                   (0x503bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top_sim__DOT__if_instr))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top_sim__DOT__if_instr 
                                                               >> 0x19U)))) 
                                                       | ((IData)(
                                                                  (0x501bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top_sim__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top_sim__DOT__if_instr 
                                                              >> 0x19U)))) 
                                                      << 3U) 
                                                     | (((((((IData)(
                                                                     (0x5033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top_sim__DOT__if_instr 
                                                                 >> 0x19U))) 
                                                            | ((IData)(
                                                                       (0x5013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__if_instr 
                                                                   >> 0x19U)))) 
                                                           | ((IData)(
                                                                      (0x503bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__if_instr))) 
                                                              & (0x20U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__if_instr 
                                                                  >> 0x19U)))) 
                                                          | ((IData)(
                                                                     (0x501bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top_sim__DOT__if_instr 
                                                                 >> 0x19U)))) 
                                                         << 2U) 
                                                        | (((((IData)(
                                                                      (0x6033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__if_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__if_instr 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x6013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__if_instr)))) 
                                                            << 1U) 
                                                           | (((IData)(
                                                                       (0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x7013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top_sim__DOT__if_instr)))))))))))));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o 
        = (((IData)((3U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
            << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                              & vlSelf->top_sim__DOT__if_instr))) 
                         << 9U) | (((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                    << 8U) | (((IData)(
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
                                                                            & vlSelf->top_sim__DOT__if_instr)))))))))))));
    vlSelf->top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm 
        = ((((((- (QData)((IData)(((((0x13U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->top_sim__DOT__if_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top_sim__DOT__if_instr)))))) 
               & (((- (QData)((IData)((vlSelf->top_sim__DOT__if_instr 
                                       >> 0x1fU)))) 
                   << 0xcU) | (QData)((IData)((vlSelf->top_sim__DOT__if_instr 
                                               >> 0x14U))))) 
              | ((- (QData)((IData)((0x23U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr))))) 
                 & (((- (QData)((IData)((vlSelf->top_sim__DOT__if_instr 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->top_sim__DOT__if_instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top_sim__DOT__if_instr 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)((0x63U == (0x7fU 
                                              & vlSelf->top_sim__DOT__if_instr))))) 
                & (((- (QData)((IData)((vlSelf->top_sim__DOT__if_instr 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
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
                                                            >> 7U)))))))))) 
            | ((- (QData)((IData)((0x6fU == (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr))))) 
               & (((- (QData)((IData)((vlSelf->top_sim__DOT__if_instr 
                                       >> 0x1fU)))) 
                   << 0x15U) | (QData)((IData)(((0x100000U 
                                                 & (vlSelf->top_sim__DOT__if_instr 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->top_sim__DOT__if_instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->top_sim__DOT__if_instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->top_sim__DOT__if_instr 
                                                            >> 0x14U)))))))))) 
           | ((- (QData)((IData)(((0x37U == (0x7fU 
                                             & vlSelf->top_sim__DOT__if_instr)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->top_sim__DOT__if_instr)))))) 
              & (((QData)((IData)((- (IData)((vlSelf->top_sim__DOT__if_instr 
                                              >> 0x1fU))))) 
                  << 0x20U) | (QData)((IData)((0xfffff000U 
                                               & vlSelf->top_sim__DOT__if_instr))))));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrwi = (IData)(
                                                           (0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrsi = (IData)(
                                                           (0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_csrrci = (IData)(
                                                           (0x7073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall = ((IData)(
                                                           (0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__if_instr))) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->top_sim__DOT__if_instr 
                                                       >> 0x14U)));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak = 
        ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__if_instr))) 
         & (1U == (vlSelf->top_sim__DOT__if_instr >> 0x14U)));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_mret = ((IData)(
                                                          (0x73U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__if_instr))) 
                                                  & (0x302U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__if_instr 
                                                      >> 0x14U)));
    vlSelf->top_sim__DOT__id_branch_info = (((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                             << 5U) 
                                            | (((IData)(
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
                                                                    & vlSelf->top_sim__DOT__if_instr))))))));
    vlSelf->top_sim__DOT__id_alu_info = (((((((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top_sim__DOT__if_instr))) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->top_sim__DOT__if_instr 
                                                  >> 0x19U))) 
                                             | (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__if_instr)))) 
                                            | ((IData)(
                                                       (0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->top_sim__DOT__if_instr 
                                                   >> 0x19U)))) 
                                           | (IData)(
                                                     (0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__if_instr)))) 
                                          << 9U) | 
                                         (((((IData)(
                                                     (0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                             & (0x20U 
                                                == 
                                                (vlSelf->top_sim__DOT__if_instr 
                                                 >> 0x19U))) 
                                            | ((IData)(
                                                       (0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->top_sim__DOT__if_instr 
                                                   >> 0x19U)))) 
                                           << 8U) | 
                                          (((((((IData)(
                                                        (0x1033U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->top_sim__DOT__if_instr 
                                                    >> 0x19U))) 
                                               | ((IData)(
                                                          (0x1013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__if_instr))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__if_instr 
                                                      >> 0x19U)))) 
                                              | ((IData)(
                                                         (0x103bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top_sim__DOT__if_instr))) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->top_sim__DOT__if_instr 
                                                     >> 0x19U)))) 
                                             | ((IData)(
                                                        (0x101bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->top_sim__DOT__if_instr 
                                                    >> 0x19U)))) 
                                            << 7U) 
                                           | (((((IData)(
                                                         (0x2033U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top_sim__DOT__if_instr))) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->top_sim__DOT__if_instr 
                                                     >> 0x19U))) 
                                                | (IData)(
                                                          (0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__if_instr)))) 
                                               << 6U) 
                                              | (((((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top_sim__DOT__if_instr))) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->top_sim__DOT__if_instr 
                                                        >> 0x19U))) 
                                                   | (IData)(
                                                             (0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top_sim__DOT__if_instr)))) 
                                                  << 5U) 
                                                 | (((((IData)(
                                                               (0x4033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top_sim__DOT__if_instr))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top_sim__DOT__if_instr 
                                                           >> 0x19U))) 
                                                      | (IData)(
                                                                (0x4013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top_sim__DOT__if_instr)))) 
                                                     << 4U) 
                                                    | (((((((IData)(
                                                                    (0x5033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top_sim__DOT__if_instr 
                                                                >> 0x19U))) 
                                                           | ((IData)(
                                                                      (0x5013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top_sim__DOT__if_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top_sim__DOT__if_instr 
                                                                  >> 0x19U)))) 
                                                          | ((IData)(
                                                                     (0x503bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top_sim__DOT__if_instr))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top_sim__DOT__if_instr 
                                                                 >> 0x19U)))) 
                                                         | ((IData)(
                                                                    (0x501bU 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top_sim__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top_sim__DOT__if_instr 
                                                                >> 0x19U)))) 
                                                        << 3U) 
                                                       | (((((((IData)(
                                                                       (0x5033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | ((IData)(
                                                                         (0x5013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__if_instr))) 
                                                                 & (0x20U 
                                                                    == 
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x19U)))) 
                                                             | ((IData)(
                                                                        (0x503bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (vlSelf->top_sim__DOT__if_instr 
                                                                    >> 0x19U)))) 
                                                            | ((IData)(
                                                                       (0x501bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top_sim__DOT__if_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->top_sim__DOT__if_instr 
                                                                   >> 0x19U)))) 
                                                           << 2U) 
                                                          | (((((IData)(
                                                                        (0x6033U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->top_sim__DOT__if_instr))) 
                                                                & (0U 
                                                                   == 
                                                                   (vlSelf->top_sim__DOT__if_instr 
                                                                    >> 0x19U))) 
                                                               | (IData)(
                                                                         (0x6013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__if_instr)))) 
                                                              << 1U) 
                                                             | (((IData)(
                                                                         (0x7033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top_sim__DOT__if_instr))) 
                                                                 & (0U 
                                                                    == 
                                                                    (vlSelf->top_sim__DOT__if_instr 
                                                                     >> 0x19U))) 
                                                                | (IData)(
                                                                          (0x7013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->top_sim__DOT__if_instr)))))))))))));
    vlSelf->top_sim__DOT__rf_rs1_rdata = ((0U == (0x1fU 
                                                  & (vlSelf->top_sim__DOT__if_instr 
                                                     >> 0xfU)))
                                           ? 0ULL : 
                                          ((0x1eU >= 
                                            (0x1fU 
                                             & ((vlSelf->top_sim__DOT__if_instr 
                                                 >> 0xfU) 
                                                - (IData)(1U))))
                                            ? vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                           [(0x1fU 
                                             & ((vlSelf->top_sim__DOT__if_instr 
                                                 >> 0xfU) 
                                                - (IData)(1U)))]
                                            : 0ULL));
    vlSelf->top_sim__DOT__rf_rs2_rdata = ((0U == (0x1fU 
                                                  & (vlSelf->top_sim__DOT__if_instr 
                                                     >> 0x14U)))
                                           ? 0ULL : 
                                          ((0x1eU >= 
                                            (0x1fU 
                                             & ((vlSelf->top_sim__DOT__if_instr 
                                                 >> 0x14U) 
                                                - (IData)(1U))))
                                            ? vlSelf->top_sim__DOT__regfile_u__DOT__reg_data
                                           [(0x1fU 
                                             & ((vlSelf->top_sim__DOT__if_instr 
                                                 >> 0x14U) 
                                                - (IData)(1U)))]
                                            : 0ULL));
    vlSelf->top_sim__DOT__id_u__DOT__rv64_imm = (((
                                                   (((- (QData)((IData)(
                                                                        ((((0x13U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__if_instr)) 
                                                                           | (0x1bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__if_instr))) 
                                                                          | (3U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->top_sim__DOT__if_instr))) 
                                                                         | (0x67U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__if_instr)))))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top_sim__DOT__if_instr 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->top_sim__DOT__if_instr 
                                                                           >> 0x14U))))) 
                                                    | ((- (QData)((IData)(
                                                                          (0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__if_instr))))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->top_sim__DOT__if_instr 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            ((0xfe0U 
                                                                              & (vlSelf->top_sim__DOT__if_instr 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->top_sim__DOT__if_instr 
                                                                                >> 7U)))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->top_sim__DOT__if_instr))))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->top_sim__DOT__if_instr 
                                                                              >> 0x1fU)))) 
                                                          << 0xdU) 
                                                         | (QData)((IData)(
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
                                                                                >> 7U)))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__if_instr))))) 
                                                     & (((- (QData)((IData)(
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
                                                                                >> 0x14U)))))))))) 
                                                 | ((- (QData)((IData)(
                                                                       ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__if_instr)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__if_instr)))))) 
                                                    & (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top_sim__DOT__if_instr 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xfffff000U 
                                                                          & vlSelf->top_sim__DOT__if_instr))))));
    vlSelf->top_sim__DOT__id_opcode_info = (((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)) 
                                             << 0xbU) 
                                            | (((0x1bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top_sim__DOT__if_instr)) 
                                                << 0xaU) 
                                               | (((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top_sim__DOT__if_instr)) 
                                                   << 9U) 
                                                  | (((0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top_sim__DOT__if_instr)) 
                                                      << 8U) 
                                                     | (((0x63U 
                                                          == 
                                                          (0x7fU 
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
                                                                              & vlSelf->top_sim__DOT__if_instr)))))))))))));
    vlSelf->reg_data_o[0U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0U];
    vlSelf->reg_data_o[1U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [1U];
    vlSelf->reg_data_o[2U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [2U];
    vlSelf->reg_data_o[3U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [3U];
    vlSelf->reg_data_o[4U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [4U];
    vlSelf->reg_data_o[5U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [5U];
    vlSelf->reg_data_o[6U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [6U];
    vlSelf->reg_data_o[7U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [7U];
    vlSelf->reg_data_o[8U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [8U];
    vlSelf->reg_data_o[9U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [9U];
    vlSelf->reg_data_o[0xaU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xaU];
    vlSelf->reg_data_o[0xbU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xbU];
    vlSelf->reg_data_o[0xcU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xcU];
    vlSelf->reg_data_o[0xdU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xdU];
    vlSelf->reg_data_o[0xeU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xeU];
    vlSelf->reg_data_o[0xfU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0xfU];
    vlSelf->reg_data_o[0x10U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x10U];
    vlSelf->reg_data_o[0x11U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x11U];
    vlSelf->reg_data_o[0x12U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x12U];
    vlSelf->reg_data_o[0x13U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x13U];
    vlSelf->reg_data_o[0x14U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x14U];
    vlSelf->reg_data_o[0x15U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x15U];
    vlSelf->reg_data_o[0x16U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x16U];
    vlSelf->reg_data_o[0x17U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x17U];
    vlSelf->reg_data_o[0x18U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x18U];
    vlSelf->reg_data_o[0x19U] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x19U];
    vlSelf->reg_data_o[0x1aU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x1aU];
    vlSelf->reg_data_o[0x1bU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x1bU];
    vlSelf->reg_data_o[0x1cU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x1cU];
    vlSelf->reg_data_o[0x1dU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x1dU];
    vlSelf->reg_data_o[0x1eU] = vlSelf->top_sim__DOT____Vcellout__regfile_u__reg_data_o
        [0x1eU];
    vlSelf->top_sim__DOT__id_u__DOT__rv64_need_rd = 
        (((((~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ecall)) 
            & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_ebreak))) 
           & (~ (IData)(vlSelf->top_sim__DOT__id_u__DOT__rv64_mret))) 
          & (0x63U != (0x7fU & vlSelf->top_sim__DOT__if_instr))) 
         & (0x23U != (0x7fU & vlSelf->top_sim__DOT__if_instr)));
    vlSelf->id_rs1_rdata_o = vlSelf->top_sim__DOT__rf_rs1_rdata;
    vlSelf->id_rs2_rdata_o = vlSelf->top_sim__DOT__rf_rs2_rdata;
    vlSelf->id_imm_o = vlSelf->top_sim__DOT__id_u__DOT__rv64_imm;
    vlSelf->ex_agu_mem_addr_o = (vlSelf->top_sim__DOT__rf_rs1_rdata 
                                 + vlSelf->top_sim__DOT__id_u__DOT__rv64_imm);
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub 
        = (1U & (((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                  >> 8U) | ((IData)(vlSelf->top_sim__DOT__id_opcode_info) 
                            >> 7U)));
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
        = ((IData)((0U != (0x62U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
            ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
            : ((4U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                ? 0ULL : vlSelf->top_sim__DOT__rf_rs1_rdata));
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2 
        = ((IData)((0U != (0xc06U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
            ? vlSelf->top_sim__DOT__id_u__DOT__rv64_imm
            : ((IData)((0U != (0x60U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                ? 4ULL : vlSelf->top_sim__DOT__rf_rs2_rdata));
    vlSelf->id_rd_wen_o = vlSelf->top_sim__DOT__id_u__DOT__rv64_need_rd;
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2 
        = (0x3fU & ((IData)((0U != (0x500U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                     ? (0x1fU & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2))
                     : (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res 
        = (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
           ^ vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt 
        = VL_LTS_IQQ(1,64,64, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu 
        = (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
           < vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res 
        = ((((((((((- (QData)((IData)((1U & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x200U 
                                                        & (IData)(vlSelf->top_sim__DOT__id_alu_info))) 
                                                      | (0U 
                                                         != 
                                                         (0x66U 
                                                          & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))) 
                                             | (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))))) 
                   & ((vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                       + ((- (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub))) 
                          ^ vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)) 
                      + ((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)
                          ? 1ULL : 0ULL))) | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                                                     >> 7U))))) 
                                              & (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                                 << (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2)))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                              >> 6U))))) 
                    & ((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt)
                        ? 1ULL : 0ULL))) | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                                                   >> 5U))))) 
                                            & ((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                                ? 1ULL
                                                : 0ULL))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                            >> 4U))))) 
                  & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                           >> 3U))))) 
                 & (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                    >> (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2)))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                          >> 2U))))) 
                & VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2)))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__id_alu_info) 
                                         >> 1U))))) 
               & (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                  | vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->top_sim__DOT__id_alu_info))))) 
              & (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                 & vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__ex_branch_jump = (1U & ((
                                                   ((((((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                        >> 5U) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)))) 
                                                      | (((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                          >> 4U) 
                                                         & (0U 
                                                            != vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res))) 
                                                     | (((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__lt))) 
                                                    | (((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                        >> 2U) 
                                                       & VL_GTS_IQQ(1,64,64, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1, vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2))) 
                                                   | (((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__ltu))) 
                                                  | ((IData)(vlSelf->top_sim__DOT__id_branch_info) 
                                                     & (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                                                        > vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2))));
    vlSelf->top_sim__DOT__ex_alu_rd_wdata = ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x500U 
                                                       & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res)))
                                              : vlSelf->top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res);
    vlSelf->ex_branch_jump_o = vlSelf->top_sim__DOT__ex_branch_jump;
    vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump 
        = (1U & ((IData)((0U != (0xe0U & (IData)(vlSelf->top_sim__DOT__id_opcode_info)))) 
                 & ((IData)((0U != (0x60U & (IData)(vlSelf->top_sim__DOT__id_opcode_info)))) 
                    | (IData)(vlSelf->top_sim__DOT__ex_branch_jump))));
    vlSelf->ex_alu_rd_wdata_o = vlSelf->top_sim__DOT__ex_alu_rd_wdata;
    vlSelf->top_sim__DOT__pc_next_gen_u__DOT__pc_add_op1 
        = ((IData)(vlSelf->top_sim__DOT__pc_next_gen_u__DOT__jump)
            ? ((IData)((0U != (0xc0U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))))
                ? vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                : ((0x20U & (IData)(vlSelf->top_sim__DOT__id_opcode_info))
                    ? vlSelf->top_sim__DOT__rf_rs1_rdata
                    : 0ULL)) : vlSelf->top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r);
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
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
