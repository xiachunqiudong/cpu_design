// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Variables
    QData/*63:0*/ __Vdly__cpu__DOT__u_IF__DOT__pc_r;
    // Body
    __Vdly__cpu__DOT__u_IF__DOT__pc_r = vlSelf->cpu__DOT__u_IF__DOT__pc_r;
    if (vlSelf->rst) {
        __Vdly__cpu__DOT__u_IF__DOT__pc_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->load_use)))) {
        __Vdly__cpu__DOT__u_IF__DOT__pc_r = (4ULL + vlSelf->cpu__DOT__u_IF__DOT__pc_r);
    }
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__u_ID__DOT__data_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->load_use)))) {
        vlSelf->cpu__DOT__u_ID__DOT__data_valid = 1U;
    }
    vlSelf->cpu__DOT__u_WB__DOT__WB_data_valid = ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->cpu__DOT__u_EX__DOT__data_valid));
    if (vlSelf->cpu__DOT__u_EX__DOT__data_valid) {
        vlSelf->cpu__DOT__u_WB__DOT__WB_pc_r = vlSelf->cpu__DOT__u_EX__DOT__pc_r;
    }
    vlSelf->cpu__DOT__u_EX__DOT__data_valid = ((~ (IData)(vlSelf->rst)) 
                                               & (IData)(vlSelf->cpu__DOT__ID_valid));
    if (vlSelf->cpu__DOT__ID_valid) {
        vlSelf->cpu__DOT__u_EX__DOT__pc_r = vlSelf->cpu__DOT__u_ID__DOT__pc_r;
    }
    if ((1U & (~ (IData)(vlSelf->load_use)))) {
        vlSelf->cpu__DOT__u_ID__DOT__pc_r = vlSelf->cpu__DOT__u_IF__DOT__pc_r;
    }
    vlSelf->cpu__DOT__u_IF__DOT__pc_r = __Vdly__cpu__DOT__u_IF__DOT__pc_r;
}

VL_INLINE_OPT void Vcpu___024root___settle__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->cpu__DOT__ID_valid = ((IData)(vlSelf->cpu__DOT__u_ID__DOT__data_valid) 
                                  & (~ (IData)(vlSelf->load_use)));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu___024root___settle__TOP__2(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->load_use & 0xfeU))) {
        Verilated::overWidthError("load_use");}
}
#endif  // VL_DEBUG
