// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========


void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf);

Vcpu___024root::Vcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu___024root___ctor_var_reset(this);
}

void Vcpu___024root::__Vconfigure(Vcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu___024root::~Vcpu___024root() {
}

void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcpu___024root___settle__TOP__2(Vcpu___024root* vlSelf);

void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__2(vlSelf);
}

void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->load_use = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ID_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_IF__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__u_ID__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_ID__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__u_EX__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__u_EX__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_WB__DOT__WB_data_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_WB__DOT__WB_pc_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
