// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_sim.h for the primary calling header

#ifndef VERILATED_VTOP_SIM___024UNIT_H_
#define VERILATED_VTOP_SIM___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_sim__Syms;
class Vtop_sim_VerilatedVcd;


//----------

VL_MODULE(Vtop_sim___024unit) {
  public:

    // LOCAL VARIABLES
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vtop_sim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_sim___024unit);  ///< Copying not allowed
  public:
    Vtop_sim___024unit(const char* name);
    ~Vtop_sim___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vtop_sim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
