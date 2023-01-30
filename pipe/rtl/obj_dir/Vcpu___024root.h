// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcpu__Syms;
class Vcpu_VerilatedVcd;


//----------

VL_MODULE(Vcpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(load_use,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ cpu__DOT__ID_valid;
    CData/*0:0*/ cpu__DOT__u_ID__DOT__data_valid;
    CData/*0:0*/ cpu__DOT__u_EX__DOT__data_valid;
    CData/*0:0*/ cpu__DOT__u_WB__DOT__WB_data_valid;
    QData/*63:0*/ cpu__DOT__u_IF__DOT__pc_r;
    QData/*63:0*/ cpu__DOT__u_ID__DOT__pc_r;
    QData/*63:0*/ cpu__DOT__u_EX__DOT__pc_r;
    QData/*63:0*/ cpu__DOT__u_WB__DOT__WB_pc_r;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu___024root);  ///< Copying not allowed
  public:
    Vcpu___024root(const char* name);
    ~Vcpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
