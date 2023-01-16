// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vt.h for the primary calling header

#include "Vt___024root.h"
#include "Vt__Syms.h"

//==========


void Vt___024root___ctor_var_reset(Vt___024root* vlSelf);

Vt___024root::Vt___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vt___024root___ctor_var_reset(this);
}

void Vt___024root::__Vconfigure(Vt__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vt___024root::~Vt___024root() {
}

void Vt___024root___initial__TOP__2(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->t__DOT__a = 0U;
    vlSelf->t__DOT__b = 1U;
    vlSelf->t__DOT__d = 3U;
    vlSelf->t__DOT__c = 2U;
}

void Vt___024root___eval_initial(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vt___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vt___024root___eval_settle(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___eval_settle\n"); );
}

void Vt___024root___final(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___final\n"); );
}

void Vt___024root___ctor_var_reset(Vt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->t__DOT__a = VL_RAND_RESET_I(2);
    vlSelf->t__DOT__b = VL_RAND_RESET_I(2);
    vlSelf->t__DOT__c = VL_RAND_RESET_I(2);
    vlSelf->t__DOT__d = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
