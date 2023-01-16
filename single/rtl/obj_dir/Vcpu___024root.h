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
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ cpu__DOT__id_ilegl_inst;
    CData/*0:0*/ cpu__DOT__ex_branch_jump;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__bj;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi;
    CData/*0:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_ecall;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_ebreak;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_mret;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_csrrwi;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_csrrsi;
    CData/*0:0*/ cpu__DOT__id_u__DOT__rv64_csrrci;
    CData/*0:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub;
    CData/*0:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__ltu;
    CData/*0:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__geu;
    SData/*11:0*/ cpu__DOT__id_opcode_info;
    SData/*9:0*/ cpu__DOT__id_alu_info;
    SData/*11:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info;
    SData/*9:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o;
    SData/*10:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o;
    IData/*31:0*/ cpu__DOT__if_instr;
    IData/*31:0*/ cpu__DOT__regfile_u__DOT__i;
    QData/*63:0*/ cpu__DOT__rf_rs1_rdata;
    QData/*63:0*/ cpu__DOT__csr_rdata;
    QData/*63:0*/ cpu__DOT__id_csr_rdata;
    QData/*63:0*/ cpu__DOT__ex_cgu_csr_wdata;
    QData/*63:0*/ cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__pc_add_op1;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__csr_rdata_i;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o;
    QData/*63:0*/ cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm;
    QData/*63:0*/ cpu__DOT__id_u__DOT__rv64_imm;
    QData/*63:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1;
    QData/*63:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2;
    QData/*63:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res;
    QData/*63:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res;
    QData/*63:0*/ cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res;
    QData/*63:0*/ cpu__DOT__u_wb__DOT__mem_rd_wdata_i;
    QData/*63:0*/ cpu__DOT__u_wb__DOT__csr_rd_wdata_i;
    VlUnpacked<CData/*7:0*/, 1024> cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem;
    VlUnpacked<QData/*63:0*/, 31> cpu__DOT__regfile_u__DOT__reg_data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ cpu__DOT__regfile_u__DOT____Vlvbound1;
    QData/*63:0*/ cpu__DOT__regfile_u__DOT____Vlvbound2;
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
