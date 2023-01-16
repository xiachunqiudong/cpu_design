// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vt__Syms.h"


void Vt___024root__traceChgSub0(Vt___024root* vlSelf, VerilatedVcd* tracep);

void Vt___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vt___024root* const __restrict vlSelf = static_cast<Vt___024root*>(voidSelf);
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vt___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vt___024root__traceChgSub0(Vt___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->t__DOT__a),2);
            tracep->chgCData(oldp+1,(vlSelf->t__DOT__b),2);
            tracep->chgCData(oldp+2,(vlSelf->t__DOT__c),2);
            tracep->chgCData(oldp+3,(vlSelf->t__DOT__d),2);
        }
        tracep->chgBit(oldp+4,(vlSelf->clk));
    }
}

void Vt___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vt___024root* const __restrict vlSelf = static_cast<Vt___024root*>(voidSelf);
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
