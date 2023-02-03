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
    CData/*4:0*/ __Vdlyvdim0__top_sim__DOT__u_regfile__DOT__reg_data__v0;
    CData/*0:0*/ __Vdlyvset__top_sim__DOT__u_regfile__DOT__reg_data__v0;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__top_sim__DOT__u_ram__DOT__ram_data__v0;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v1;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v2;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v3;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v4;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v5;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v6;
    CData/*7:0*/ __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v7;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v0;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v1;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v2;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v3;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v4;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v5;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v6;
    SData/*9:0*/ __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v7;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp9;
    QData/*63:0*/ __Vdlyvval__top_sim__DOT__u_regfile__DOT__reg_data__v0;
    // Body
    __Vdlyvset__top_sim__DOT__u_ram__DOT__ram_data__v0 = 0U;
    __Vdlyvset__top_sim__DOT__u_regfile__DOT__reg_data__v0 = 0U;
    if ((1U & ((~ (IData)(vlSelf->top_sim__DOT__id_load_use)) 
               & (~ (IData)(vlSelf->top_sim__DOT__if_flush))))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_prdt_taken_r 
            = vlSelf->top_sim__DOT__ifu_prdt_taken;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
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
    if (vlSelf->top_sim__DOT__u_wb__DOT__wb_excp) {
        vlSelf->top_sim__DOT__u_csr__DOT__mepc = ((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                                   ? vlSelf->top_sim__DOT__WB_pc
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top_sim__DOT__WB_pc));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r 
            = vlSelf->top_sim__DOT__MEM_pc_misalign;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r 
            = (0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                        >> 7U));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r 
            = (((IData)((0x63U == (0x707fU & vlSelf->top_sim__DOT__ID_instr))) 
                << 5U) | (((IData)((0x1063U == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                           << 4U) | (((IData)((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->top_sim__DOT__ID_instr))) 
                                      << 3U) | (((IData)(
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
                                                               & vlSelf->top_sim__DOT__ID_instr))))))));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_st_bus_err_r = 0U;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_bus_err_r = 0U;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_st_misalign_r 
            = vlSelf->top_sim__DOT__mem_st_misalign;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_misalign_r 
            = vlSelf->top_sim__DOT__mem_ld_misalign;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_ebreak_r 
            = vlSelf->top_sim__DOT__MEM_ebreak;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_ecall_r 
            = vlSelf->top_sim__DOT__MEM_ecall;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_if_bus_err_r 
            = vlSelf->top_sim__DOT__MEM_if_bus_err;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_mret_r 
            = vlSelf->top_sim__DOT__MEM_mret;
    }
    if ((1U & ((~ (IData)(vlSelf->top_sim__DOT__id_load_use)) 
               & (~ (IData)(vlSelf->top_sim__DOT__if_flush))))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
            = vlSelf->top_sim__DOT__ifu_instr;
    }
    if (vlSelf->top_sim__DOT__u_wb__DOT__wb_excp) {
        vlSelf->top_sim__DOT__u_csr__DOT__mcause = 
            ((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_int)
              ? (0x8000000000000000ULL | (QData)((IData)(vlSelf->top_sim__DOT__u_wb__DOT__int_code)))
              : (QData)((IData)(((((((((1U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_if_bus_err)))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr))))) 
                                      | (3U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ebreak))))) 
                                     | (4U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_misalign))))) 
                                    | (5U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ld_bus_err))))) 
                                   | (6U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_misalign))))) 
                                  | (7U & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_st_bus_err))))) 
                                 | (0xbU & (- (IData)((IData)(vlSelf->top_sim__DOT__WB_ecall))))))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r 
            = vlSelf->top_sim__DOT__EX_rs2_rdata;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r = 
            (vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r 
             & (- (QData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r = vlSelf->top_sim__DOT__u_id__DOT__rv64_imm;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r 
            = (((((((IData)((0x33U == (0x707fU & vlSelf->top_sim__DOT__ID_instr))) 
                    & (0U == (vlSelf->top_sim__DOT__ID_instr 
                              >> 0x19U))) | (IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__ID_instr)))) 
                  | ((IData)((0x3bU == (0x707fU & vlSelf->top_sim__DOT__ID_instr))) 
                     & (0U == (vlSelf->top_sim__DOT__ID_instr 
                               >> 0x19U)))) | (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top_sim__DOT__ID_instr)))) 
                << 9U) | (((((IData)((0x33U == (0x707fU 
                                                & vlSelf->top_sim__DOT__ID_instr))) 
                             & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                          >> 0x19U))) 
                            | ((IData)((0x3bU == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                               & (0x20U == (vlSelf->top_sim__DOT__ID_instr 
                                            >> 0x19U)))) 
                           << 8U) | (((((((IData)((0x1033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__ID_instr))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0x19U))) 
                                         | ((IData)(
                                                    (0x1013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top_sim__DOT__ID_instr))) 
                                            & (0U == 
                                               (vlSelf->top_sim__DOT__ID_instr 
                                                >> 0x19U)))) 
                                        | ((IData)(
                                                   (0x103bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top_sim__DOT__ID_instr))) 
                                           & (0U == 
                                              (vlSelf->top_sim__DOT__ID_instr 
                                               >> 0x19U)))) 
                                       | ((IData)((0x101bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_sim__DOT__ID_instr))) 
                                          & (0U == 
                                             (vlSelf->top_sim__DOT__ID_instr 
                                              >> 0x19U)))) 
                                      << 7U) | (((((IData)(
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
                                                                              & vlSelf->top_sim__DOT__ID_instr)))))))))))));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r 
            = (0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                        >> 0xfU));
    }
    if ((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
               & (IData)((0U != (0xfU & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))) {
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v0 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x38U)));
        __Vdlyvset__top_sim__DOT__u_ram__DOT__ram_data__v0 = 1U;
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v0 
            = (0x3ffU & ((IData)(7U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v1 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x30U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v1 
            = (0x3ffU & ((IData)(6U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v2 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x28U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v2 
            = (0x3ffU & ((IData)(5U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v3 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x20U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v3 
            = (0x3ffU & ((IData)(4U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v4 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x18U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v4 
            = (0x3ffU & ((IData)(3U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v5 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 0x10U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v5 
            = (0x3ffU & ((IData)(2U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v6 
            = (0xffU & (IData)((vlSelf->top_sim__DOT__u_ram__DOT__wdata 
                                >> 8U)));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v6 
            = (0x3ffU & ((IData)(1U) + (0x3f8U & ((IData)(
                                                          (vlSelf->top_sim__DOT__MEM_alu_res 
                                                           >> 3U)) 
                                                  << 3U))));
        __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v7 
            = (0xffU & (IData)(vlSelf->top_sim__DOT__u_ram__DOT__wdata));
        __Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v7 
            = (0x3f8U & ((IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                                  >> 3U)) << 3U));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r 
            = (0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                        >> 0x14U));
    }
    if (vlSelf->top_sim__DOT__u_wb__DOT__wb_excp) {
        vlSelf->top_sim__DOT__u_csr__DOT__mtval = ((IData)(vlSelf->top_sim__DOT__WB_ilegl_instr)
                                                    ? (QData)((IData)(vlSelf->top_sim__DOT__u_wb__DOT__WB_instr_i))
                                                    : vlSelf->top_sim__DOT__WB_alu_res);
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r 
            = (((0x13U == (0x7fU & vlSelf->top_sim__DOT__ID_instr)) 
                << 0xbU) | (((0x1bU == (0x7fU & vlSelf->top_sim__DOT__ID_instr)) 
                             << 0xaU) | (((0x33U == 
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
                                                                 & vlSelf->top_sim__DOT__ID_instr)))))))))))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r 
            = vlSelf->top_sim__DOT__EX_rd_idx;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r 
            = ((((((((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                               >> 0xaU))))) 
                     & (((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata) 
                                                   >> 7U))))) 
                         << 8U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                 >> 9U))))) 
                       & (((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata) 
                                                >> 0xfU))))) 
                           << 0x10U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata))))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                >> 8U))))) 
                      & (((QData)((IData)((- (IData)(
                                                     (vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata 
                                                      >> 0x1fU))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))))) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                               >> 7U))))) 
                     & vlSelf->top_sim__DOT__ram_rdata)) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                              >> 6U))))) 
                    & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata)))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                             >> 5U))))) 
                   & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata)))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                            >> 4U))))) 
                  & (QData)((IData)(vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r 
            = ((IData)((0U != (0x500U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res)))
                : vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res);
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_idx_r 
            = vlSelf->top_sim__DOT__MEM_rd_idx;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_wen_r 
            = vlSelf->top_sim__DOT__MEM_rd_wen;
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_alu_res_r 
            = vlSelf->top_sim__DOT__MEM_alu_res;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r 
            = ((0U == (0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                >> 0xfU))) ? 0ULL : 
               (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
                 & ((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                              >> 0xfU)) == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                 ? vlSelf->top_sim__DOT__wb_rd_wdata
                 : ((0x1eU >= (0x1fU & ((vlSelf->top_sim__DOT__ID_instr 
                                         >> 0xfU) - (IData)(1U))))
                     ? vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
                    [(0x1fU & ((vlSelf->top_sim__DOT__ID_instr 
                                >> 0xfU) - (IData)(1U)))]
                     : 0ULL)));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r 
            = ((0U == (0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                                >> 0x14U))) ? 0ULL : 
               (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) 
                 & ((0x1fU & (vlSelf->top_sim__DOT__ID_instr 
                              >> 0x14U)) == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                 ? vlSelf->top_sim__DOT__wb_rd_wdata
                 : ((0x1eU >= (0x1fU & ((vlSelf->top_sim__DOT__ID_instr 
                                         >> 0x14U) 
                                        - (IData)(1U))))
                     ? vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
                    [(0x1fU & ((vlSelf->top_sim__DOT__ID_instr 
                                >> 0x14U) - (IData)(1U)))]
                     : 0ULL)));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wdata_r 
            = (vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
               & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_r = 
            (vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
             & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r) 
               & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r 
            = (vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r 
               & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_optype_info_r 
            = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r) 
               & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_wen_r 
            = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r) 
               & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_idx_r 
            = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r) 
               & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    }
    if (vlSelf->top_sim__DOT__MEM_valid) {
        vlSelf->top_sim__DOT__u_WB__DOT__WB_ilegl_instr_r 
            = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r) 
               & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    }
    vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_sim__DOT__MEM_valid));
    if (((IData)(vlSelf->top_sim__DOT__wb_rd_wen) & 
         (0U != (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))) {
        vlSelf->top_sim__DOT__u_regfile__DOT____Vlvbound1 
            = vlSelf->top_sim__DOT__wb_rd_wdata;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->top_sim__DOT__WB_rd_idx) 
                                - (IData)(1U))))) {
            __Vdlyvval__top_sim__DOT__u_regfile__DOT__reg_data__v0 
                = vlSelf->top_sim__DOT__u_regfile__DOT____Vlvbound1;
            __Vdlyvset__top_sim__DOT__u_regfile__DOT__reg_data__v0 = 1U;
            __Vdlyvdim0__top_sim__DOT__u_regfile__DOT__reg_data__v0 
                = (0x1fU & ((IData)(vlSelf->top_sim__DOT__WB_rd_idx) 
                            - (IData)(1U)));
        }
    }
    if (__Vdlyvset__top_sim__DOT__u_ram__DOT__ram_data__v0) {
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v0] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v0;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v1] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v1;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v2] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v2;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v3] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v3;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v4] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v4;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v5] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v5;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v6] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v6;
        vlSelf->top_sim__DOT__u_ram__DOT__ram_data[__Vdlyvdim0__top_sim__DOT__u_ram__DOT__ram_data__v7] 
            = __Vdlyvval__top_sim__DOT__u_ram__DOT__ram_data__v7;
    }
    if (__Vdlyvset__top_sim__DOT__u_regfile__DOT__reg_data__v0) {
        vlSelf->top_sim__DOT__u_regfile__DOT__reg_data[__Vdlyvdim0__top_sim__DOT__u_regfile__DOT__reg_data__v0] 
            = __Vdlyvval__top_sim__DOT__u_regfile__DOT__reg_data__v0;
    }
    if ((1U & ((~ (IData)(vlSelf->top_sim__DOT__id_load_use)) 
               & (~ (IData)(vlSelf->top_sim__DOT__if_flush))))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_r = vlSelf->top_sim__DOT__u_IF__DOT__pc_r;
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wdata_r 
            = vlSelf->top_sim__DOT__ex_csr_wdata;
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_r 
            = vlSelf->top_sim__DOT__EX_pc;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_mret_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_mret;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ebreak_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ecall_r 
            = vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_if_bus_err_r 
            = ((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r) 
               & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ld_st_info_r 
            = (((IData)((3U == (0x707fU & vlSelf->top_sim__DOT__ID_instr))) 
                << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                             << 9U) | (((IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top_sim__DOT__ID_instr))) 
                                        << 8U) | (((IData)(
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
                                                                                & vlSelf->top_sim__DOT__ID_instr)))))))))))));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_misalign_r 
            = ((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r) 
               & (IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_rdata_r 
            = vlSelf->top_sim__DOT__csr_rdata;
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_wen_r 
            = (((((~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall)) 
                  & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                 & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                & (0x63U != (0x7fU & vlSelf->top_sim__DOT__ID_instr))) 
               & (0x23U != (0x7fU & vlSelf->top_sim__DOT__ID_instr)));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_optype_info_r 
            = vlSelf->top_sim__DOT__EX_optype_info;
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_wen_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_csr_idx_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r) 
               & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    }
    vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_sim__DOT__EX_valid));
    if (vlSelf->top_sim__DOT__EX_valid) {
        vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ilegl_instr_r 
            = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r) 
               & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid));
    }
    vlSelf->top_sim__DOT__WB_pc = (vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_r 
                                   & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
    vlSelf->top_sim__DOT__WB_if_bus_err = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_if_bus_err_r) 
                                           & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_ilegl_instr = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_ilegl_instr_r) 
                                            & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_ecall = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_ecall_r) 
                                      & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_ebreak = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_ebreak_r) 
                                       & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_ld_misalign = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_misalign_r) 
                                            & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_ld_bus_err = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_ld_bus_err_r) 
                                           & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_st_misalign = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_misalign_r) 
                                            & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_st_bus_err = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_st_bus_err_r) 
                                           & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_mret = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_mret_r) 
                                     & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_rd_idx = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
    vlSelf->top_sim__DOT__WB_rd_wen = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_rd_wen_r) 
                                       & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid));
    vlSelf->top_sim__DOT__WB_optype_info = ((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_optype_info_r) 
                                            & (- (IData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
    vlSelf->top_sim__DOT__WB_alu_res = (vlSelf->top_sim__DOT__u_WB__DOT__WB_alu_res_r 
                                        & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))));
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[1U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [1U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[2U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [2U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[3U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [3U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[4U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [4U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[5U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [5U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[6U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [6U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[7U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [7U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[8U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [8U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[9U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [9U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xaU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xaU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xbU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xbU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xcU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xcU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xdU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xdU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xeU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xeU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0xfU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0xfU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x10U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x10U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x11U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x11U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x12U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x12U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x13U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x13U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x14U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x14U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x15U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x15U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x16U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x16U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x17U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x17U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x18U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x18U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x19U] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x19U];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x1aU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x1aU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x1bU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x1bU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x1cU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x1cU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x1dU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x1dU];
    vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o[0x1eU] 
        = vlSelf->top_sim__DOT__u_regfile__DOT__reg_data
        [0x1eU];
    vlSelf->top_sim__DOT__u_wb__DOT__wb_excp = ((((
                                                   (((((((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_pc_misalign_r) 
                                                         & (IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid)) 
                                                        | (IData)(vlSelf->top_sim__DOT__WB_if_bus_err)) 
                                                       | (IData)(vlSelf->top_sim__DOT__WB_ilegl_instr)) 
                                                      | (IData)(vlSelf->top_sim__DOT__WB_ecall)) 
                                                     | (IData)(vlSelf->top_sim__DOT__WB_ebreak)) 
                                                    | (IData)(vlSelf->top_sim__DOT__WB_mret)) 
                                                   | (IData)(vlSelf->top_sim__DOT__WB_ld_misalign)) 
                                                  | (IData)(vlSelf->top_sim__DOT__WB_ld_bus_err)) 
                                                 | (IData)(vlSelf->top_sim__DOT__WB_st_misalign)) 
                                                | (IData)(vlSelf->top_sim__DOT__WB_st_bus_err));
    vlSelf->top_sim__DOT__wb_rd_wdata = ((0x10U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))
                                          ? (vlSelf->top_sim__DOT__u_WB__DOT__WB_mem_rdata_r 
                                             & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))
                                          : ((1U & (IData)(vlSelf->top_sim__DOT__WB_optype_info))
                                              ? (vlSelf->top_sim__DOT__u_WB__DOT__WB_csr_rdata_r 
                                                 & (- (QData)((IData)(vlSelf->top_sim__DOT__u_WB__DOT__WB_data_valid))))
                                              : vlSelf->top_sim__DOT__WB_alu_res));
    vlSelf->reg_data_o[0U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0U];
    vlSelf->reg_data_o[1U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [1U];
    vlSelf->reg_data_o[2U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [2U];
    vlSelf->reg_data_o[3U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [3U];
    vlSelf->reg_data_o[4U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [4U];
    vlSelf->reg_data_o[5U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [5U];
    vlSelf->reg_data_o[6U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [6U];
    vlSelf->reg_data_o[7U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [7U];
    vlSelf->reg_data_o[8U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [8U];
    vlSelf->reg_data_o[9U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [9U];
    vlSelf->reg_data_o[0xaU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xaU];
    vlSelf->reg_data_o[0xbU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xbU];
    vlSelf->reg_data_o[0xcU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xcU];
    vlSelf->reg_data_o[0xdU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xdU];
    vlSelf->reg_data_o[0xeU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xeU];
    vlSelf->reg_data_o[0xfU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0xfU];
    vlSelf->reg_data_o[0x10U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x10U];
    vlSelf->reg_data_o[0x11U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x11U];
    vlSelf->reg_data_o[0x12U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x12U];
    vlSelf->reg_data_o[0x13U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x13U];
    vlSelf->reg_data_o[0x14U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x14U];
    vlSelf->reg_data_o[0x15U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x15U];
    vlSelf->reg_data_o[0x16U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x16U];
    vlSelf->reg_data_o[0x17U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x17U];
    vlSelf->reg_data_o[0x18U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x18U];
    vlSelf->reg_data_o[0x19U] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x19U];
    vlSelf->reg_data_o[0x1aU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x1aU];
    vlSelf->reg_data_o[0x1bU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x1bU];
    vlSelf->reg_data_o[0x1cU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x1cU];
    vlSelf->reg_data_o[0x1dU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x1dU];
    vlSelf->reg_data_o[0x1eU] = vlSelf->top_sim__DOT____Vcellout__u_regfile__reg_data_o
        [0x1eU];
    if ((1U & ((~ (IData)(vlSelf->top_sim__DOT__id_load_use)) 
               & (~ (IData)(vlSelf->top_sim__DOT__if_flush))))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_if_bus_err_r = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->top_sim__DOT__id_load_use)) 
               & (~ (IData)(vlSelf->top_sim__DOT__if_flush))))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_pc_misalign_r 
            = (0U != (3U & (IData)(vlSelf->top_sim__DOT__u_IF__DOT__pc_r)));
    }
    if (vlSelf->rst) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))) {
        vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid 
            = (1U & (~ (IData)(vlSelf->top_sim__DOT__if_flush)));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_wen_r 
            = ((((((IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw) 
                   | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs)) 
                  | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc)) 
                 | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi)) 
                | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi)) 
               | (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci));
    }
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_csr_idx_r 
            = (vlSelf->top_sim__DOT__ID_instr >> 0x14U);
    }
    vlSelf->top_sim__DOT__MEM_rs2_rdata = (vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rs2_rdata_r 
                                           & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    vlSelf->top_sim__DOT__MEM_pc_misalign = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_pc_misalign_r) 
                                             & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_if_bus_err = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_if_bus_err_r) 
                                            & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_ecall = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ecall_r) 
                                       & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_ebreak = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ebreak_r) 
                                        & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_mret = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_mret_r) 
                                      & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_ld_st_info = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_ld_st_info_r) 
                                            & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    vlSelf->top_sim__DOT__MEM_rd_wen = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_wen_r) 
                                        & (IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid));
    vlSelf->top_sim__DOT__MEM_rd_idx = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_rd_idx_r) 
                                        & (- (IData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    vlSelf->top_sim__DOT__MEM_alu_res = (vlSelf->top_sim__DOT__u_MEM__DOT__MEM_alu_res_r 
                                         & (- (QData)((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid))));
    if (vlSelf->top_sim__DOT__ID_valid) {
        vlSelf->top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r = 0U;
    }
    vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_sim__DOT__ID_valid));
    vlSelf->top_sim__DOT__MEM_valid = ((IData)(vlSelf->top_sim__DOT__u_MEM__DOT__MEM_data_valid) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)));
    vlSelf->top_sim__DOT__wb_rd_wen = ((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)));
    vlSelf->top_sim__DOT__ram_byte_en = (0xffU & ((
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                    >> 3U)))) 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                    >> 2U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                     >> 1U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                           ? 0x80U
                                                           : 0x40U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                           ? 0x20U
                                                           : 0x10U))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                     >> 1U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                           ? 8U
                                                           : 4U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                           ? 2U
                                                           : 1U)))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                      >> 2U)))) 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                      >> 2U)))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                       >> 1U)))
                                                            ? 0xc0U
                                                            : 0x30U)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                       >> 1U)))
                                                            ? 0xcU
                                                            : 3U)))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
                                                                     >> 1U)))) 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                     >> 2U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                      >> 2U)))
                                                           ? 0xf0U
                                                           : 0U)
                                                          : 0xfU))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))));
    vlSelf->top_sim__DOT__u_ram__DOT__rdata = (((QData)((IData)(
                                                                ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                  [
                                                                  (0x3ffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (0x3f8U 
                                                                       & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                          << 3U))))] 
                                                                  << 0x18U) 
                                                                 | ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                     [
                                                                     (0x3ffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (0x3f8U 
                                                                          & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                             << 3U))))] 
                                                                     << 0x10U) 
                                                                    | ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                        [
                                                                        (0x3ffU 
                                                                         & ((IData)(5U) 
                                                                            + 
                                                                            (0x3f8U 
                                                                             & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                                << 3U))))] 
                                                                        << 8U) 
                                                                       | vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                       [
                                                                       (0x3ffU 
                                                                        & ((IData)(4U) 
                                                                           + 
                                                                           (0x3f8U 
                                                                            & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                               << 3U))))]))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                   [
                                                                   (0x3ffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (0x3f8U 
                                                                        & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                           << 3U))))] 
                                                                   << 0x18U) 
                                                                  | ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                      [
                                                                      (0x3ffU 
                                                                       & ((IData)(2U) 
                                                                          + 
                                                                          (0x3f8U 
                                                                           & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                              << 3U))))] 
                                                                      << 0x10U) 
                                                                     | ((vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                         [
                                                                         (0x3ffU 
                                                                          & ((IData)(1U) 
                                                                             + 
                                                                             (0x3f8U 
                                                                              & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                                << 3U))))] 
                                                                         << 8U) 
                                                                        | vlSelf->top_sim__DOT__u_ram__DOT__ram_data
                                                                        [
                                                                        (0x3f8U 
                                                                         & ((IData)(
                                                                                (vlSelf->top_sim__DOT__MEM_alu_res 
                                                                                >> 3U)) 
                                                                            << 3U))]))))));
    vlSelf->top_sim__DOT__mem_ld_misalign = (1U & (
                                                   (((IData)(
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
                                                          & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))));
    vlSelf->top_sim__DOT__mem_st_misalign = (1U & (
                                                   ((((IData)(vlSelf->top_sim__DOT__MEM_ld_st_info) 
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
                                                          & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))))));
    if (vlSelf->rst) {
        vlSelf->top_sim__DOT__u_IF__DOT__pc_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top_sim__DOT__id_load_use)))) {
        vlSelf->top_sim__DOT__u_IF__DOT__pc_r = vlSelf->top_sim__DOT__ifu_pc_next;
    }
    vlSelf->top_sim__DOT__ID_instr = (vlSelf->top_sim__DOT__u_ID__DOT__ID_instr_r 
                                      & (- (IData)((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid))));
    vlSelf->top_sim__DOT__u_ram__DOT__mask = (((QData)((IData)(
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 7U)))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 6U)))) 
                                                                       << 0x10U)) 
                                                                   | ((0xff00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 5U)))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 4U)))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 3U)))) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 2U)))) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top_sim__DOT__ram_byte_en) 
                                                                                >> 1U)))) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top_sim__DOT__ram_byte_en)))))))))));
    vlSelf->top_sim__DOT__u_mem__DOT__mem_excp = ((
                                                   (((((IData)(vlSelf->top_sim__DOT__MEM_pc_misalign) 
                                                       | (IData)(vlSelf->top_sim__DOT__MEM_if_bus_err)) 
                                                      | (IData)(vlSelf->top_sim__DOT__MEM_ecall)) 
                                                     | (IData)(vlSelf->top_sim__DOT__MEM_ebreak)) 
                                                    | (IData)(vlSelf->top_sim__DOT__MEM_mret)) 
                                                   | (IData)(vlSelf->top_sim__DOT__mem_ld_misalign)) 
                                                  | (IData)(vlSelf->top_sim__DOT__mem_st_misalign));
    vlSelf->top_sim__DOT__EX_valid = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid) 
                                      & (~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)));
    vlSelf->top_sim__DOT__EX_rd_idx = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rd_idx_r) 
                                       & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_branch_info = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_branch_info_r) 
                                            & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_pc = (vlSelf->top_sim__DOT__u_EX__DOT__EX_pc_r 
                                   & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_imm = (vlSelf->top_sim__DOT__u_EX__DOT__EX_imm_r 
                                    & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_alu_info = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_alu_info_r) 
                                         & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_rs1_idx = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_idx_r) 
                                        & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_rs2_idx = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_idx_r) 
                                        & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__EX_optype_info = ((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_optype_info_r) 
                                            & (- (IData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrw = (IData)(
                                                          (0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrs = (IData)(
                                                          (0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrc = (IData)(
                                                          (0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_imm = (((
                                                   (((- (QData)((IData)(
                                                                        ((((0x13U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__ID_instr)) 
                                                                           | (0x1bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top_sim__DOT__ID_instr))) 
                                                                          | (3U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->top_sim__DOT__ID_instr))) 
                                                                         | (0x67U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top_sim__DOT__ID_instr)))))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top_sim__DOT__ID_instr 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->top_sim__DOT__ID_instr 
                                                                           >> 0x14U))))) 
                                                    | ((- (QData)((IData)(
                                                                          (0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__ID_instr))))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->top_sim__DOT__ID_instr 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            ((0xfe0U 
                                                                              & (vlSelf->top_sim__DOT__ID_instr 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->top_sim__DOT__ID_instr 
                                                                                >> 7U)))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->top_sim__DOT__ID_instr))))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->top_sim__DOT__ID_instr 
                                                                              >> 0x1fU)))) 
                                                          << 0xdU) 
                                                         | (QData)((IData)(
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
                                                                                >> 7U)))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__ID_instr))))) 
                                                     & (((- (QData)((IData)(
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
                                                                                >> 0x14U)))))))))) 
                                                 | ((- (QData)((IData)(
                                                                       ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top_sim__DOT__ID_instr)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top_sim__DOT__ID_instr)))))) 
                                                    & (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top_sim__DOT__ID_instr 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xfffff000U 
                                                                          & vlSelf->top_sim__DOT__ID_instr))))));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall = ((IData)(
                                                           (0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ID_instr))) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->top_sim__DOT__ID_instr 
                                                       >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak = 
        ((IData)((0x73U == (0x707fU & vlSelf->top_sim__DOT__ID_instr))) 
         & (1U == (vlSelf->top_sim__DOT__ID_instr >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_mret = ((IData)(
                                                          (0x73U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top_sim__DOT__ID_instr))) 
                                                  & (0x302U 
                                                     == 
                                                     (vlSelf->top_sim__DOT__ID_instr 
                                                      >> 0x14U)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi = (IData)(
                                                           (0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi = (IData)(
                                                           (0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci = (IData)(
                                                           (0x7073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_sim__DOT__ID_instr)));
    vlSelf->top_sim__DOT__u_ram__DOT__wdata = (((((
                                                   ((- (QData)((IData)(
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
                                                    & vlSelf->top_sim__DOT__MEM_rs2_rdata)) 
                                                & vlSelf->top_sim__DOT__u_ram__DOT__mask) 
                                               | (vlSelf->top_sim__DOT__u_ram__DOT__rdata 
                                                  & (~ vlSelf->top_sim__DOT__u_ram__DOT__mask)));
    vlSelf->top_sim__DOT__ram_rdata = ((1U & (((~ (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)) 
                                               & (~ (IData)(vlSelf->top_sim__DOT__u_mem__DOT__mem_excp))) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7f0U 
                                                          & (IData)(vlSelf->top_sim__DOT__MEM_ld_st_info))))))
                                        ? vlSelf->top_sim__DOT__u_ram__DOT__rdata
                                        : 0ULL);
    vlSelf->top_sim__DOT__EX_rs1_rdata = ((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                            & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                           & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                              == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))
                                           ? vlSelf->top_sim__DOT__MEM_alu_res
                                           : ((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                & (0U 
                                                   != (IData)(vlSelf->top_sim__DOT__EX_rs1_idx))) 
                                               & ((IData)(vlSelf->top_sim__DOT__EX_rs1_idx) 
                                                  == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                               ? vlSelf->top_sim__DOT__wb_rd_wdata
                                               : (vlSelf->top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r 
                                                  & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))));
    vlSelf->top_sim__DOT__EX_rs2_rdata = ((((IData)(vlSelf->top_sim__DOT__MEM_rd_wen) 
                                            & (0U != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                           & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                              == (IData)(vlSelf->top_sim__DOT__MEM_rd_idx)))
                                           ? vlSelf->top_sim__DOT__MEM_alu_res
                                           : ((((IData)(vlSelf->top_sim__DOT__WB_rd_wen) 
                                                & (0U 
                                                   != (IData)(vlSelf->top_sim__DOT__EX_rs2_idx))) 
                                               & ((IData)(vlSelf->top_sim__DOT__EX_rs2_idx) 
                                                  == (IData)(vlSelf->top_sim__DOT__WB_rd_idx)))
                                               ? vlSelf->top_sim__DOT__wb_rd_wdata
                                               : (vlSelf->top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r 
                                                  & (- (QData)((IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid))))));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub 
        = (1U & (((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                  >> 8U) | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                            >> 7U)));
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
    vlSelf->top_sim__DOT__id_load_use = ((((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                           >> 4U) & (IData)(vlSelf->top_sim__DOT__u_EX__DOT__EX_data_valid)) 
                                         & (((((((((((0x37U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->top_sim__DOT__ID_instr)) 
                                                     & (0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->top_sim__DOT__ID_instr))) 
                                                    & (0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->top_sim__DOT__ID_instr))) 
                                                   & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrwi))) 
                                                  & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrsi))) 
                                                 & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_csrrci))) 
                                                & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ecall))) 
                                               & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_ebreak))) 
                                              & (~ (IData)(vlSelf->top_sim__DOT__u_id__DOT__rv64_mret))) 
                                             & ((IData)(vlSelf->top_sim__DOT__EX_rd_idx) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top_sim__DOT__ID_instr 
                                                    >> 0xfU)))) 
                                            | (((((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__ID_instr)) 
                                                  | (0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top_sim__DOT__ID_instr))) 
                                                 | (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top_sim__DOT__ID_instr))) 
                                                | (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top_sim__DOT__ID_instr))) 
                                               & ((IData)(vlSelf->top_sim__DOT__EX_rd_idx) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top_sim__DOT__ID_instr 
                                                      >> 0x14U))))));
    if ((1U & (IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                       >> 2U)))) {
        vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata 
            = (0xffU & ((1U & (IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                    ? (IData)(
                                                              (vlSelf->top_sim__DOT__ram_rdata 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->top_sim__DOT__ram_rdata 
                                                               >> 0x30U)))
                         : ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                             ? (IData)((vlSelf->top_sim__DOT__ram_rdata 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top_sim__DOT__ram_rdata 
                                                              >> 0x20U)))));
        vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata 
            = (0xffffU & ((1U & (IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                                         >> 1U))) ? (IData)(
                                                            (vlSelf->top_sim__DOT__ram_rdata 
                                                             >> 0x30U))
                           : (IData)((vlSelf->top_sim__DOT__ram_rdata 
                                      >> 0x20U))));
    } else {
        vlSelf->top_sim__DOT__u_mem__DOT__lb_rdata 
            = (0xffU & ((1U & (IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                                                    ? (IData)(
                                                              (vlSelf->top_sim__DOT__ram_rdata 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->top_sim__DOT__ram_rdata 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->top_sim__DOT__MEM_alu_res))
                             ? (IData)((vlSelf->top_sim__DOT__ram_rdata 
                                        >> 8U)) : (IData)(vlSelf->top_sim__DOT__ram_rdata))));
        vlSelf->top_sim__DOT__u_mem__DOT__lh_rdata 
            = (0xffffU & ((1U & (IData)((vlSelf->top_sim__DOT__MEM_alu_res 
                                         >> 1U))) ? (IData)(
                                                            (vlSelf->top_sim__DOT__ram_rdata 
                                                             >> 0x10U))
                           : (IData)(vlSelf->top_sim__DOT__ram_rdata)));
    }
    vlSelf->top_sim__DOT__u_mem__DOT__lw_rdata = ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_sim__DOT__MEM_alu_res 
                                                              >> 2U)))
                                                   ? (IData)(
                                                             (vlSelf->top_sim__DOT__ram_rdata 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->top_sim__DOT__ram_rdata));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
        = ((IData)((0U != (0x62U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
            ? vlSelf->top_sim__DOT__EX_pc : ((4U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                              ? 0ULL
                                              : vlSelf->top_sim__DOT__EX_rs1_rdata));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
        = ((IData)((0U != (0xc1eU & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
            ? vlSelf->top_sim__DOT__EX_imm : ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
                                               ? 4ULL
                                               : vlSelf->top_sim__DOT__EX_rs2_rdata));
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
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2 
        = (0x3fU & ((IData)((0U != (0x500U & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))
                     ? (0x1fU & (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))
                     : (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res 
        = (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
           ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2 
        = ((- (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub))) 
           ^ vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2);
    vlSelf->top_sim__DOT__ifu_prdt_taken = (1U & (((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                   >> 7U) 
                                                  & (IData)(
                                                            (vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm 
                                                             >> 0x3fU))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout 
        = (1U & __Vtemp7[2U]);
    VL_EXTEND_WI(65,1, __Vtemp9, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
        = ((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
            + vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2) 
           + (((QData)((IData)(__Vtemp9[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp9[0U]))));
    vlSelf->top_sim__DOT__u_ifu__DOT__jump = (1U & 
                                              (((IData)(vlSelf->top_sim__DOT__ifu_prdt_taken) 
                                                | ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info) 
                                                  >> 5U)));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt 
        = (1U & (((IData)((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                           >> 0x3fU)) & (~ (IData)(
                                                   (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                    >> 0x3fU)))) 
                 | ((~ ((IData)((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2 
                                                       >> 0x3fU)))) 
                    & (IData)((vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res 
                               >> 0x3fU)))));
    vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res 
        = ((((((((((- (QData)((IData)((1U & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x200U 
                                                        & (IData)(vlSelf->top_sim__DOT__EX_alu_info))) 
                                                      | (0U 
                                                         != 
                                                         (0x7eU 
                                                          & (IData)(vlSelf->top_sim__DOT__EX_optype_info))))) 
                                             | (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub)))))) 
                   & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                               >> 7U))))) 
                     & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                        << (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                              >> 6U))))) 
                    & (QData)((IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__lt)))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                             >> 5U))))) 
                   & (QData)((IData)((1U & (~ (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout))))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                            >> 4U))))) 
                  & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_xor_res)) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                           >> 3U))))) 
                 & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                    >> (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                          >> 2U))))) 
                & VL_SHIFTRS_QQI(64,64,6, vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1, (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2)))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->top_sim__DOT__EX_alu_info) 
                                         >> 1U))))) 
               & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                  | vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->top_sim__DOT__EX_alu_info))))) 
              & (vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1 
                 & vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2)));
    vlSelf->top_sim__DOT__ex_jump = (1U & ((((((((((IData)(vlSelf->top_sim__DOT__EX_branch_info) 
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
                                                & (IData)(vlSelf->top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_cout))) 
                                            | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                               >> 6U)) 
                                           | ((IData)(vlSelf->top_sim__DOT__EX_optype_info) 
                                              >> 5U)));
    vlSelf->top_sim__DOT__ID_valid = (((IData)(vlSelf->top_sim__DOT__u_ID__DOT__ID_data_valid) 
                                       & (~ (IData)(vlSelf->top_sim__DOT__id_load_use))) 
                                      & (~ ((IData)(vlSelf->top_sim__DOT__ex_jump) 
                                            | (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp))));
    vlSelf->top_sim__DOT__if_flush = ((IData)(vlSelf->top_sim__DOT__ex_jump) 
                                      | (IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp));
    vlSelf->top_sim__DOT__ifu_pc_next = ((IData)(vlSelf->top_sim__DOT__if_flush)
                                          ? ((IData)(vlSelf->top_sim__DOT__u_wb__DOT__wb_excp)
                                              ? ((IData)(vlSelf->top_sim__DOT__WB_mret)
                                                  ? vlSelf->top_sim__DOT__u_csr__DOT__mepc
                                                  : 0x28ULL)
                                              : (((0x20U 
                                                   & (IData)(vlSelf->top_sim__DOT__EX_optype_info))
                                                   ? vlSelf->top_sim__DOT__EX_rs1_rdata
                                                   : vlSelf->top_sim__DOT__EX_pc) 
                                                 + vlSelf->top_sim__DOT__EX_imm))
                                          : (4ULL + vlSelf->top_sim__DOT__u_IF__DOT__pc_r));
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
