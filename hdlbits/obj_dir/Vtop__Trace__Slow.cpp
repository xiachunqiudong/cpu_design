// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"a", false,-1, 3,0);
        tracep->declBus(c+2,"b", false,-1, 3,0);
        tracep->declBus(c+3,"c", false,-1, 3,0);
        tracep->declBit(c+4,"cout", false,-1);
        tracep->declBit(c+5,"lt", false,-1);
        tracep->declBit(c+6,"ge", false,-1);
        tracep->declBit(c+7,"ltu", false,-1);
        tracep->declBit(c+8,"geu", false,-1);
        tracep->declBus(c+1,"top a", false,-1, 3,0);
        tracep->declBus(c+2,"top b", false,-1, 3,0);
        tracep->declBus(c+3,"top c", false,-1, 3,0);
        tracep->declBit(c+4,"top cout", false,-1);
        tracep->declBit(c+5,"top lt", false,-1);
        tracep->declBit(c+6,"top ge", false,-1);
        tracep->declBit(c+7,"top ltu", false,-1);
        tracep->declBit(c+8,"top geu", false,-1);
        tracep->declBit(c+10,"top cin", false,-1);
        tracep->declBus(c+1,"top op1", false,-1, 3,0);
        tracep->declBus(c+9,"top op2", false,-1, 3,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->a),4);
        tracep->fullCData(oldp+2,(vlSelf->b),4);
        tracep->fullCData(oldp+3,(vlSelf->c),4);
        tracep->fullBit(oldp+4,(vlSelf->cout));
        tracep->fullBit(oldp+5,(vlSelf->lt));
        tracep->fullBit(oldp+6,(vlSelf->ge));
        tracep->fullBit(oldp+7,(vlSelf->ltu));
        tracep->fullBit(oldp+8,(vlSelf->geu));
        tracep->fullCData(oldp+9,((0xfU & (~ (IData)(vlSelf->b)))),4);
        tracep->fullBit(oldp+10,(1U));
    }
}
