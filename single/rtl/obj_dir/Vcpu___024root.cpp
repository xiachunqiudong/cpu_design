// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v1;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v2;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v3;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v4;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v5;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v5;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v6;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v7;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v7;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v8;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v8;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v9;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v9;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v10;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v10;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v11;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v11;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v12;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v12;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v13;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v13;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v14;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v14;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v15;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v15;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v16;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v16;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v17;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v17;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v18;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v18;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v19;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v19;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v20;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v20;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v21;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v21;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v22;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v22;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v23;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v23;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v24;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v24;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v25;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v25;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v26;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v26;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v27;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v27;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v28;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v28;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v29;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v29;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v30;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v30;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v31;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v31;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v32;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v32;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v0;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v1;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v2;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v3;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v4;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v5;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v6;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v7;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v8;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v9;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v10;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v11;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v12;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v13;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v14;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v15;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v16;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v17;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v18;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v19;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v20;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v21;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v22;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v23;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v24;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v25;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v26;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v27;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v28;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v29;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v30;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v31;
    QData/*63:0*/ __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v32;
    // Body
    if (vlSelf->reset) {
        vlSelf->cpu__DOT__regfile_u__DOT__i = 0x20U;
    }
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v0 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v1 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v2 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v3 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v4 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v5 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v6 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v7 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v8 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v9 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v10 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v11 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v12 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v13 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v14 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v15 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v16 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v17 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v18 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v19 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v20 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v21 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v22 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v23 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v24 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v25 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v26 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v27 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v28 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v29 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v30 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v31 = 0U;
    __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v32 = 0U;
    vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r 
        = ((IData)(vlSelf->reset) ? 0ULL : (vlSelf->cpu__DOT__instr_fetch_u__DOT__pc_add_op1 
                                            + ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
                                                ? vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm
                                                : 4ULL)));
    if (vlSelf->reset) {
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v0 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v0 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v1 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v1 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v2 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v2 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v2 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v3 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v3 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v3 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v4 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v4 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v4 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v5 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v5 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v5 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v6 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v6 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v6 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v7 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v7 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v7 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v8 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v8 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v8 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v9 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v9 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v9 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v10 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v10 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v10 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v11 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v11 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v11 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v12 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v12 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v12 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v13 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v13 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v13 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v14 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v14 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v14 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v15 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v15 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v15 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v16 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v16 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v16 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v17 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v17 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v17 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v18 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v18 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v18 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v19 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v19 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v19 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v20 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v20 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v20 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v21 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v21 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v21 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v22 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v22 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v22 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v23 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v23 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v23 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v24 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v24 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v24 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v25 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v25 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v25 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v26 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v26 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v26 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v27 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v27 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v27 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v28 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v28 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v28 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v29 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v29 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v29 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v30 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v30 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v30 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = 0ULL;
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v31 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v31 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v31 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
    } else if (((((((~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall)) 
                    & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                   & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret))) 
                  & (0x63U != (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                 & (0x23U != (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                & (0U != (0x1fU & (vlSelf->cpu__DOT__if_instr 
                                   >> 7U))))) {
        vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound2 
            = ((IData)((0U != (0x500U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res)))
                : vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res);
        if ((0x1eU >= (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v32 
                = vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v32 = 1U;
            __Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v32 
                = (0x1fU & ((vlSelf->cpu__DOT__if_instr 
                             >> 7U) - (IData)(1U)));
        }
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v0) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v0] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v0;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v1) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v1] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v1;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v2) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v2] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v2;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v3) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v3] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v3;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v4) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v4] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v4;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v5) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v5] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v5;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v6) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v6] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v6;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v7) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v7] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v7;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v8) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v8] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v8;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v9) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v9] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v9;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v10) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v10] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v10;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v11) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v11] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v11;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v12) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v12] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v12;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v13) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v13] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v13;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v14) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v14] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v14;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v15) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v15] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v15;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v16) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v16] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v16;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v17) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v17] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v17;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v18) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v18] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v18;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v19) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v19] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v19;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v20) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v20] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v20;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v21) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v21] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v21;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v22) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v22] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v22;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v23) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v23] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v23;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v24) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v24] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v24;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v25) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v25] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v25;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v26) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v26] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v26;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v27) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v27] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v27;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v28) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v28] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v28;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v29) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v29] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v29;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v30) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v30] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v30;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v31) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v31] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v31;
    }
    if (__Vdlyvset__cpu__DOT__regfile_u__DOT__reg_data__v32) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__cpu__DOT__regfile_u__DOT__reg_data__v32] 
            = __Vdlyvval__cpu__DOT__regfile_u__DOT__reg_data__v32;
    }
    vlSelf->cpu__DOT__if_instr = ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                   [(0x3ffU & ((IData)(3U) 
                                               + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                   << 0x18U) | ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                 [(0x3ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                    [
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                                    << 8U) 
                                                   | vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                   [
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))])));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (0U == (vlSelf->cpu__DOT__if_instr >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (1U == (vlSelf->cpu__DOT__if_instr >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (0x302U == (vlSelf->cpu__DOT__if_instr 
                         >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o 
        = (((((((IData)((0x33U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
                & (0U == (vlSelf->cpu__DOT__if_instr 
                          >> 0x19U))) | (IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))) 
              | ((IData)((0x3bU == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
                 & (0U == (vlSelf->cpu__DOT__if_instr 
                           >> 0x19U)))) | (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu__DOT__if_instr)))) 
            << 9U) | (((((IData)((0x33U == (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                         & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                      >> 0x19U))) | 
                        ((IData)((0x3bU == (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                         & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                      >> 0x19U)))) 
                       << 8U) | (((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                      & (0U == (vlSelf->cpu__DOT__if_instr 
                                                >> 0x19U))) 
                                     | ((IData)((0x1013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                        & (0U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))) 
                                    | ((IData)((0x103bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                       & (0U == (vlSelf->cpu__DOT__if_instr 
                                                 >> 0x19U)))) 
                                   | ((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                      & (0U == (vlSelf->cpu__DOT__if_instr 
                                                >> 0x19U)))) 
                                  << 7U) | (((((IData)(
                                                       (0x2033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu__DOT__if_instr 
                                                   >> 0x19U))) 
                                              | (IData)(
                                                        (0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr)))) 
                                             << 6U) 
                                            | (((((IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu__DOT__if_instr))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->cpu__DOT__if_instr 
                                                      >> 0x19U))) 
                                                 | (IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr)))) 
                                                << 5U) 
                                               | (((((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->cpu__DOT__if_instr 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cpu__DOT__if_instr)))) 
                                                   << 4U) 
                                                  | (((((((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U))) 
                                                         | ((IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->cpu__DOT__if_instr 
                                                                >> 0x19U)))) 
                                                        | ((IData)(
                                                                   (0x503bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu__DOT__if_instr))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->cpu__DOT__if_instr 
                                                               >> 0x19U)))) 
                                                       | ((IData)(
                                                                  (0x501bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U)))) 
                                                      << 3U) 
                                                     | (((((((IData)(
                                                                     (0x5033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->cpu__DOT__if_instr 
                                                                 >> 0x19U))) 
                                                            | ((IData)(
                                                                       (0x5013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U)))) 
                                                           | ((IData)(
                                                                      (0x503bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              & (0x20U 
                                                                 == 
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x19U)))) 
                                                          | ((IData)(
                                                                     (0x501bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->cpu__DOT__if_instr 
                                                                 >> 0x19U)))) 
                                                         << 2U) 
                                                        | (((((IData)(
                                                                      (0x6033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x6013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr)))) 
                                                            << 1U) 
                                                           | (((IData)(
                                                                       (0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x7013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o 
        = (((IData)((3U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
            << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                              & vlSelf->cpu__DOT__if_instr))) 
                         << 9U) | (((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                    << 8U) | (((IData)(
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
                                                                            & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm 
        = ((((((- (QData)((IData)(((((0x13U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSelf->cpu__DOT__if_instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->cpu__DOT__if_instr)))))) 
               & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                       >> 0x1fU)))) 
                   << 0xcU) | (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                               >> 0x14U))))) 
              | ((- (QData)((IData)((0x23U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr))))) 
                 & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->cpu__DOT__if_instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->cpu__DOT__if_instr 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)((0x63U == (0x7fU 
                                              & vlSelf->cpu__DOT__if_instr))))) 
                & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
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
                                                            >> 7U)))))))))) 
            | ((- (QData)((IData)((0x6fU == (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr))))) 
               & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                       >> 0x1fU)))) 
                   << 0x15U) | (QData)((IData)(((0x100000U 
                                                 & (vlSelf->cpu__DOT__if_instr 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->cpu__DOT__if_instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->cpu__DOT__if_instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->cpu__DOT__if_instr 
                                                            >> 0x14U)))))))))) 
           | ((- (QData)((IData)(((0x37U == (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr)))))) 
              & (((QData)((IData)((- (IData)((vlSelf->cpu__DOT__if_instr 
                                              >> 0x1fU))))) 
                  << 0x20U) | (QData)((IData)((0xfffff000U 
                                               & vlSelf->cpu__DOT__if_instr))))));
    vlSelf->cpu__DOT__id_u__DOT__rv64_ecall = ((IData)(
                                                       (0x73U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu__DOT__if_instr 
                                                   >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak = ((IData)(
                                                        (0x73U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu__DOT__if_instr 
                                                    >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_mret = ((IData)(
                                                      (0x73U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->cpu__DOT__if_instr))) 
                                              & (0x302U 
                                                 == 
                                                 (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi = (IData)(
                                                       (0x5073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi = (IData)(
                                                       (0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci = (IData)(
                                                       (0x7073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info 
        = (((0x13U == (0x7fU & vlSelf->cpu__DOT__if_instr)) 
            << 0xbU) | (((0x1bU == (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                         << 0xaU) | (((0x33U == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr)) 
                                      << 9U) | (((0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)) 
                                                 << 8U) 
                                                | (((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cpu__DOT__if_instr)) 
                                                    << 7U) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu__DOT__if_instr)) 
                                                       << 6U) 
                                                      | (((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu__DOT__if_instr)) 
                                                          << 5U) 
                                                         | (((3U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->cpu__DOT__if_instr)) 
                                                             << 4U) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->cpu__DOT__if_instr)) 
                                                                << 3U) 
                                                               | (((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->cpu__DOT__if_instr)) 
                                                                   << 2U) 
                                                                  | (((0x17U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)) 
                                                                      << 1U) 
                                                                     | (0x73U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__id_alu_info = (((((((IData)((0x33U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu__DOT__if_instr))) 
                                          & (0U == 
                                             (vlSelf->cpu__DOT__if_instr 
                                              >> 0x19U))) 
                                         | (IData)(
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu__DOT__if_instr)))) 
                                        | ((IData)(
                                                   (0x3bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu__DOT__if_instr))) 
                                           & (0U == 
                                              (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))) 
                                       | (IData)((0x1bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr)))) 
                                      << 9U) | (((((IData)(
                                                           (0x33U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->cpu__DOT__if_instr 
                                                       >> 0x19U))) 
                                                  | ((IData)(
                                                             (0x3bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->cpu__DOT__if_instr 
                                                         >> 0x19U)))) 
                                                 << 8U) 
                                                | (((((((IData)(
                                                                (0x1033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->cpu__DOT__if_instr 
                                                            >> 0x19U))) 
                                                       | ((IData)(
                                                                  (0x1013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U)))) 
                                                      | ((IData)(
                                                                 (0x103bU 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x19U)))) 
                                                     | ((IData)(
                                                                (0x101bU 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->cpu__DOT__if_instr 
                                                            >> 0x19U)))) 
                                                    << 7U) 
                                                   | (((((IData)(
                                                                 (0x2033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x19U))) 
                                                        | (IData)(
                                                                  (0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr)))) 
                                                       << 6U) 
                                                      | (((((IData)(
                                                                    (0x3033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->cpu__DOT__if_instr 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     (0x3013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr)))) 
                                                          << 5U) 
                                                         | (((((IData)(
                                                                       (0x4033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu__DOT__if_instr)))) 
                                                             << 4U) 
                                                            | (((((((IData)(
                                                                            (0x5033U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(
                                                                              (0x5013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu__DOT__if_instr 
                                                                          >> 0x19U)))) 
                                                                  | ((IData)(
                                                                             (0x503bU 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x19U)))) 
                                                                 | ((IData)(
                                                                            (0x501bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x19U)))) 
                                                                << 3U) 
                                                               | (((((((IData)(
                                                                               (0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x19U))) 
                                                                      | ((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                         & (0x20U 
                                                                            == 
                                                                            (vlSelf->cpu__DOT__if_instr 
                                                                             >> 0x19U)))) 
                                                                     | ((IData)(
                                                                                (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x19U)))) 
                                                                    | ((IData)(
                                                                               (0x501bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x19U)))) 
                                                                   << 2U) 
                                                                  | (((((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x19U))) 
                                                                       | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))) 
                                                                      << 1U) 
                                                                     | (((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu__DOT__if_instr 
                                                                             >> 0x19U))) 
                                                                        | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__rf_rs1_rdata = ((0U == (0x1fU 
                                              & (vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU)))
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
                                                  : 0ULL));
    vlSelf->cpu__DOT__id_u__DOT__rv64_imm = ((((((- (QData)((IData)(
                                                                    ((((0x13U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu__DOT__if_instr)) 
                                                                       | (0x1bU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->cpu__DOT__if_instr))) 
                                                                      | (3U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                                     | (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu__DOT__if_instr)))))) 
                                                 & (((- (QData)((IData)(
                                                                        (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->cpu__DOT__if_instr 
                                                                       >> 0x14U))))) 
                                                | ((- (QData)((IData)(
                                                                      (0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr))))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->cpu__DOT__if_instr 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->cpu__DOT__if_instr 
                                                                               >> 7U)))))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->cpu__DOT__if_instr))))) 
                                                  & (((- (QData)((IData)(
                                                                         (vlSelf->cpu__DOT__if_instr 
                                                                          >> 0x1fU)))) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(
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
                                                                                >> 7U)))))))))) 
                                              | ((- (QData)((IData)(
                                                                    (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->cpu__DOT__if_instr))))) 
                                                 & (((- (QData)((IData)(
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
                                                                                >> 0x14U)))))))))) 
                                             | ((- (QData)((IData)(
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->cpu__DOT__if_instr)) 
                                                                    | (0x17U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)))))) 
                                                & (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->cpu__DOT__if_instr 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->cpu__DOT__if_instr))))));
    vlSelf->cpu__DOT__id_opcode_info = (((0x13U == 
                                          (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                         << 0xbU) | 
                                        (((0x1bU == 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                          << 0xaU) 
                                         | (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                             << 9U) 
                                            | (((0x3bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                                << 8U) 
                                               | (((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu__DOT__if_instr)) 
                                                   << 7U) 
                                                  | (((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu__DOT__if_instr)) 
                                                      << 6U) 
                                                     | (((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu__DOT__if_instr)) 
                                                         << 5U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu__DOT__if_instr)) 
                                                            << 4U) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->cpu__DOT__if_instr)) 
                                                               << 3U) 
                                                              | (((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->cpu__DOT__if_instr)) 
                                                                  << 2U) 
                                                                 | (((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->cpu__DOT__if_instr)) 
                                                                     << 1U) 
                                                                    | (0x73U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__bj = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xe0U 
                                                         & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub 
        = (1U & (((IData)(vlSelf->cpu__DOT__id_alu_info) 
                  >> 8U) | ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                            >> 7U)));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
        = ((IData)((0U != (0x62U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
            ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
            : ((4U & (IData)(vlSelf->cpu__DOT__id_opcode_info))
                ? 0ULL : vlSelf->cpu__DOT__rf_rs1_rdata));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2 
        = ((IData)((0U != (0xc06U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
            ? vlSelf->cpu__DOT__id_u__DOT__rv64_imm
            : ((IData)((0U != (0x60U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
                ? 4ULL : ((0U == (0x1fU & (vlSelf->cpu__DOT__if_instr 
                                           >> 0x14U)))
                           ? 0ULL : ((0x1eU >= (0x1fU 
                                                & ((vlSelf->cpu__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U))))
                                      ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                     [(0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                                 >> 0x14U) 
                                                - (IData)(1U)))]
                                      : 0ULL))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__pc_add_op1 
        = ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
            ? ((IData)((0U != (0xc0U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                : ((0x20U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                    ? ((1U & ((~ ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                  >> 5U)) | (0U == 
                                             (0x1fU 
                                              & (vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU)))))
                        ? 0ULL : ((0x1eU >= (0x1fU 
                                             & ((vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU) 
                                                - (IData)(1U))))
                                   ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                  [(0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U)))]
                                   : 0ULL)) : 0ULL))
            : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res 
        = (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
           ^ vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
        = ((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
            + ((- (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub))) 
               ^ vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)) 
           + ((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)
               ? 1ULL : 0ULL));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
        = ((((((((((- (QData)((IData)((1U & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x200U 
                                                        & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                      | (0U 
                                                         != 
                                                         (0x66U 
                                                          & (IData)(vlSelf->cpu__DOT__id_opcode_info))))) 
                                             | (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))))) 
                   & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                               >> 7U))))) 
                     & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                        << (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                              >> 6U))))) 
                    & ((1U & (IData)((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                      >> 0x3fU))) ? 1ULL
                        : 0ULL))) | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                                            >> 5U))))) 
                                     & ((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                         ? 1ULL : 0ULL))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 4U))))) 
                  & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                           >> 3U))))) 
                 & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                    >> (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                          >> 2U))))) 
                & VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1, 
                                 (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 1U))))) 
               & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                  | vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->cpu__DOT__id_alu_info))))) 
              & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                 & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
