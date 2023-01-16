// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vt__Syms.h"


void Vt___024root__traceInitSub0(Vt___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vt___024root__traceInitTop(Vt___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vt___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vt___024root__traceInitSub0(Vt___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clk", false,-1);
        tracep->declBit(c+5,"t clk", false,-1);
        tracep->declBus(c+1,"t a", false,-1, 1,0);
        tracep->declBus(c+2,"t b", false,-1, 1,0);
        tracep->declBus(c+3,"t c", false,-1, 1,0);
        tracep->declBus(c+4,"t d", false,-1, 1,0);
    }
}

void Vt___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vt___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vt___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vt___024root__traceRegister(Vt___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vt___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vt___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vt___024root__traceCleanup, vlSelf);
    }
}

void Vt___024root__traceFullSub0(Vt___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vt___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vt___024root* const __restrict vlSelf = static_cast<Vt___024root*>(voidSelf);
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vt___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vt___024root__traceFullSub0(Vt___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->t__DOT__a),2);
        tracep->fullCData(oldp+2,(vlSelf->t__DOT__b),2);
        tracep->fullCData(oldp+3,(vlSelf->t__DOT__c),2);
        tracep->fullCData(oldp+4,(vlSelf->t__DOT__d),2);
        tracep->fullBit(oldp+5,(vlSelf->clk));
    }
}
