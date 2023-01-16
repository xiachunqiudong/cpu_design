// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vt.h for the primary calling header

#include "Vt___024root.h"
#include "Vt__Syms.h"

//==========

VL_INLINE_OPT void Vt___024root___sequent__TOP__1(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*1:0*/ __Vdly__t__DOT__c;
    // Body
    __Vdly__t__DOT__c = vlSelf->t__DOT__c;
    vlSelf->t__DOT__a = vlSelf->t__DOT__b;
    vlSelf->t__DOT__b = vlSelf->t__DOT__a;
    __Vdly__t__DOT__c = vlSelf->t__DOT__d;
    vlSelf->t__DOT__d = vlSelf->t__DOT__c;
    vlSelf->t__DOT__c = __Vdly__t__DOT__c;
}

void Vt___024root___eval(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vt___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vt___024root___change_request_1(Vt___024root* vlSelf);

VL_INLINE_OPT QData Vt___024root___change_request(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___change_request\n"); );
    // Body
    return (Vt___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vt___024root___change_request_1(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vt___024root___eval_debug_assertions(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
