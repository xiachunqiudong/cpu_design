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
            tracep->chgQData(oldp+0,(vlSelf->cpu__DOT__u_IF__DOT__pc_r),64);
            tracep->chgQData(oldp+2,(vlSelf->cpu__DOT__u_ID__DOT__pc_r),64);
            tracep->chgQData(oldp+4,(vlSelf->cpu__DOT__u_EX__DOT__pc_r),64);
            tracep->chgBit(oldp+6,(vlSelf->cpu__DOT__u_EX__DOT__data_valid));
            tracep->chgBit(oldp+7,(vlSelf->cpu__DOT__u_ID__DOT__data_valid));
            tracep->chgQData(oldp+8,(vlSelf->cpu__DOT__u_WB__DOT__WB_pc_r),64);
            tracep->chgBit(oldp+10,(vlSelf->cpu__DOT__u_WB__DOT__WB_data_valid));
        }
        tracep->chgBit(oldp+11,(vlSelf->clk));
        tracep->chgBit(oldp+12,(vlSelf->rst));
        tracep->chgBit(oldp+13,(vlSelf->load_use));
        tracep->chgBit(oldp+14,(vlSelf->cpu__DOT__ID_valid));
        tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSelf->load_use)))));
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
