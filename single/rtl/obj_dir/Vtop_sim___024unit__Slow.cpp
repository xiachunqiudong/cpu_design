// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "Vtop_sim___024unit.h"
#include "Vtop_sim__Syms.h"

//==========


void Vtop_sim___024unit___ctor_var_reset(Vtop_sim___024unit* vlSelf);

Vtop_sim___024unit::Vtop_sim___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_sim___024unit___ctor_var_reset(this);
}

void Vtop_sim___024unit::__Vconfigure(Vtop_sim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_sim___024unit::~Vtop_sim___024unit() {
}

void Vtop_sim___024unit___ctor_var_reset(Vtop_sim___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_sim___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
