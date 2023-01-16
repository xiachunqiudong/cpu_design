// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vt.h for the primary calling header

#ifndef VERILATED_VT___024ROOT_H_
#define VERILATED_VT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vt__Syms;
class Vt_VerilatedVcd;


//----------

VL_MODULE(Vt___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);

    // LOCAL SIGNALS
    CData/*1:0*/ t__DOT__a;
    CData/*1:0*/ t__DOT__b;
    CData/*1:0*/ t__DOT__c;
    CData/*1:0*/ t__DOT__d;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vt__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vt___024root);  ///< Copying not allowed
  public:
    Vt___024root(const char* name);
    ~Vt___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vt__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
