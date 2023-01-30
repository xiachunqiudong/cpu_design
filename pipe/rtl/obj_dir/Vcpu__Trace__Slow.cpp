// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__traceInitSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu___024root__traceInitTop(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu___024root__traceInitSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+12,"clk", false,-1);
        tracep->declBit(c+13,"rst", false,-1);
        tracep->declBit(c+14,"load_use", false,-1);
        tracep->declBit(c+12,"cpu clk", false,-1);
        tracep->declBit(c+13,"cpu rst", false,-1);
        tracep->declBit(c+14,"cpu load_use", false,-1);
        tracep->declQuad(c+1,"cpu IF_pc", false,-1, 63,0);
        tracep->declBit(c+17,"cpu IF_valid", false,-1);
        tracep->declQuad(c+3,"cpu ID_pc", false,-1, 63,0);
        tracep->declBit(c+15,"cpu ID_valid", false,-1);
        tracep->declBit(c+16,"cpu ID_ready", false,-1);
        tracep->declQuad(c+5,"cpu EX_pc", false,-1, 63,0);
        tracep->declBit(c+7,"cpu EX_valid", false,-1);
        tracep->declBit(c+17,"cpu EX_ready", false,-1);
        tracep->declBit(c+17,"cpu WB_ready", false,-1);
        tracep->declBit(c+12,"cpu u_IF clk", false,-1);
        tracep->declBit(c+13,"cpu u_IF rst", false,-1);
        tracep->declQuad(c+1,"cpu u_IF IF_pc_o", false,-1, 63,0);
        tracep->declBit(c+16,"cpu u_IF ID_ready_i", false,-1);
        tracep->declBit(c+17,"cpu u_IF IF_valid_o", false,-1);
        tracep->declBit(c+17,"cpu u_IF data_valid", false,-1);
        tracep->declQuad(c+1,"cpu u_IF pc_r", false,-1, 63,0);
        tracep->declBit(c+17,"cpu u_IF run", false,-1);
        tracep->declBit(c+12,"cpu u_ID clk", false,-1);
        tracep->declBit(c+13,"cpu u_ID rst", false,-1);
        tracep->declQuad(c+1,"cpu u_ID IF_pc_i", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu u_ID ID_pc_o", false,-1, 63,0);
        tracep->declBit(c+14,"cpu u_ID load_use_i", false,-1);
        tracep->declBit(c+17,"cpu u_ID IF_valid_i", false,-1);
        tracep->declBit(c+17,"cpu u_ID EX_ready_i", false,-1);
        tracep->declBit(c+16,"cpu u_ID ID_ready_o", false,-1);
        tracep->declBit(c+15,"cpu u_ID ID_valid_o", false,-1);
        tracep->declBit(c+8,"cpu u_ID data_valid", false,-1);
        tracep->declQuad(c+3,"cpu u_ID pc_r", false,-1, 63,0);
        tracep->declBit(c+16,"cpu u_ID run", false,-1);
        tracep->declBit(c+12,"cpu u_EX clk", false,-1);
        tracep->declBit(c+13,"cpu u_EX rst", false,-1);
        tracep->declQuad(c+3,"cpu u_EX ID_pc_i", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu u_EX EX_pc_o", false,-1, 63,0);
        tracep->declBit(c+15,"cpu u_EX ID_valid_i", false,-1);
        tracep->declBit(c+17,"cpu u_EX WB_ready_i", false,-1);
        tracep->declBit(c+7,"cpu u_EX EX_valid_o", false,-1);
        tracep->declBit(c+17,"cpu u_EX EX_ready_o", false,-1);
        tracep->declQuad(c+5,"cpu u_EX pc_r", false,-1, 63,0);
        tracep->declBit(c+7,"cpu u_EX data_valid", false,-1);
        tracep->declBit(c+17,"cpu u_EX run", false,-1);
        tracep->declBit(c+12,"cpu u_WB clk", false,-1);
        tracep->declBit(c+13,"cpu u_WB rst", false,-1);
        tracep->declQuad(c+5,"cpu u_WB EX_pc_i", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu u_WB WB_pc_o", false,-1, 63,0);
        tracep->declBit(c+7,"cpu u_WB EX_valid_i", false,-1);
        tracep->declBit(c+17,"cpu u_WB WB_ready_o", false,-1);
        tracep->declBit(c+11,"cpu u_WB WB_data_valid", false,-1);
        tracep->declQuad(c+9,"cpu u_WB WB_pc_r", false,-1, 63,0);
        tracep->declBit(c+17,"cpu u_WB run", false,-1);
    }
}

void Vcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu___024root__traceRegister(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu___024root__traceCleanup, vlSelf);
    }
}

void Vcpu___024root__traceFullSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu___024root* const __restrict vlSelf = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu___024root__traceFullSub0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu__DOT__u_IF__DOT__pc_r),64);
        tracep->fullQData(oldp+3,(vlSelf->cpu__DOT__u_ID__DOT__pc_r),64);
        tracep->fullQData(oldp+5,(vlSelf->cpu__DOT__u_EX__DOT__pc_r),64);
        tracep->fullBit(oldp+7,(vlSelf->cpu__DOT__u_EX__DOT__data_valid));
        tracep->fullBit(oldp+8,(vlSelf->cpu__DOT__u_ID__DOT__data_valid));
        tracep->fullQData(oldp+9,(vlSelf->cpu__DOT__u_WB__DOT__WB_pc_r),64);
        tracep->fullBit(oldp+11,(vlSelf->cpu__DOT__u_WB__DOT__WB_data_valid));
        tracep->fullBit(oldp+12,(vlSelf->clk));
        tracep->fullBit(oldp+13,(vlSelf->rst));
        tracep->fullBit(oldp+14,(vlSelf->load_use));
        tracep->fullBit(oldp+15,(vlSelf->cpu__DOT__ID_valid));
        tracep->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->load_use)))));
        tracep->fullBit(oldp+17,(1U));
    }
}
