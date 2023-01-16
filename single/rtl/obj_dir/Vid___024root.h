// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vid.h for the primary calling header

#ifndef VERILATED_VID___024ROOT_H_
#define VERILATED_VID___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vid__Syms;
class Vid_VerilatedVcd;


//----------

VL_MODULE(Vid___024root) {
  public:

    // PORTS
    VL_OUT8(id_rs1_en_o,0,0);
    VL_OUT8(id_rs1_idx_o,4,0);
    VL_OUT8(id_rs2_en_o,0,0);
    VL_OUT8(id_rs2_idx_o,4,0);
    VL_IN8(rf_rs1_rdata_i,0,0);
    VL_IN8(rf_rs2_rdata_i,0,0);
    VL_OUT8(id_rd_en_o,0,0);
    VL_OUT8(id_rd_idx_o,4,0);
    VL_OUT8(id_ilegl_instr_o,0,0);
    VL_OUT8(id_ecall_o,0,0);
    VL_OUT8(id_ebreak_o,0,0);
    VL_OUT8(id_mret_o,0,0);
    VL_OUT16(id_opcode_info_o,11,0);
    VL_IN(instr_i,31,0);
    VL_OUT64(id_rs1_rdata_o,63,0);
    VL_OUT64(id_rs2_rdata_o,63,0);
    VL_OUT64(id_imm_o,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ id__DOT__rv64_ecall;
    CData/*0:0*/ id__DOT__rv64_ebreak;
    QData/*63:0*/ id__DOT__rv64_i_imm;
    QData/*63:0*/ id__DOT__rv64_imm;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vid__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vid___024root);  ///< Copying not allowed
  public:
    Vid___024root(const char* name);
    ~Vid___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vid__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
