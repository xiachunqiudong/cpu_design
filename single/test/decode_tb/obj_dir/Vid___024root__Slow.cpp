// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid.h for the primary calling header

#include "Vid___024root.h"
#include "Vid__Syms.h"

//==========


void Vid___024root___ctor_var_reset(Vid___024root* vlSelf);

Vid___024root::Vid___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vid___024root___ctor_var_reset(this);
}

void Vid___024root::__Vconfigure(Vid__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vid___024root::~Vid___024root() {
}

void Vid___024root___eval_initial(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___eval_initial\n"); );
}

void Vid___024root___combo__TOP__1(Vid___024root* vlSelf);

void Vid___024root___eval_settle(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___eval_settle\n"); );
    // Body
    Vid___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vid___024root___final(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___final\n"); );
}

void Vid___024root___ctor_var_reset(Vid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instr_i = VL_RAND_RESET_I(32);
    vlSelf->id_rs1_idx_o = VL_RAND_RESET_I(5);
    vlSelf->id_rs2_idx_o = VL_RAND_RESET_I(5);
    vlSelf->rf_rs1_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->rf_rs2_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->id_csr_wen_o = VL_RAND_RESET_I(1);
    vlSelf->id_csr_idx_o = VL_RAND_RESET_I(12);
    vlSelf->csr_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->id_opcode_info_o = VL_RAND_RESET_I(12);
    vlSelf->id_alu_info_o = VL_RAND_RESET_I(10);
    vlSelf->id_branch_info_o = VL_RAND_RESET_I(6);
    vlSelf->id_ld_st_info_o = VL_RAND_RESET_I(11);
    vlSelf->id_csr_info_o = VL_RAND_RESET_I(6);
    vlSelf->id_rs1_rdata_o = VL_RAND_RESET_Q(64);
    vlSelf->id_rs2_rdata_o = VL_RAND_RESET_Q(64);
    vlSelf->id_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->id_rd_wen_o = VL_RAND_RESET_I(1);
    vlSelf->id_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->id_csr_rdata_o = VL_RAND_RESET_Q(64);
    vlSelf->id_ilegl_instr_o = VL_RAND_RESET_I(1);
    vlSelf->id_ecall_o = VL_RAND_RESET_I(1);
    vlSelf->id_ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->id_mret_o = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_ecall = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_ebreak = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_mret = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrw = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrs = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrc = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_csrrci = VL_RAND_RESET_I(1);
    vlSelf->id__DOT__rv64_imm = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
