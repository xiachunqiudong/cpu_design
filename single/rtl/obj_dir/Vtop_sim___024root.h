// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_sim.h for the primary calling header

#ifndef VERILATED_VTOP_SIM___024ROOT_H_
#define VERILATED_VTOP_SIM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_sim__Syms;
class Vtop_sim_VerilatedVcd;


//----------

VL_MODULE(Vtop_sim___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(id_rs1_idx_o,4,0);
    VL_OUT8(id_rs2_idx_o,4,0);
    VL_OUT8(id_rd_wen_o,0,0);
    VL_OUT8(id_rd_idx_o,4,0);
    VL_OUT8(ex_branch_jump_o,0,0);
    VL_OUT64(IF_pc_o,63,0);
    VL_OUT64(id_rs1_rdata_o,63,0);
    VL_OUT64(id_rs2_rdata_o,63,0);
    VL_OUT64(id_imm_o,63,0);
    VL_OUT64(ex_alu_res_o,63,0);
    VL_OUT64(ex_mem_addr_o,63,0);
    VL_OUT64(mem_rdata_o,63,0);
    VL_OUT64(reg_data_o[31],63,0);
    VL_OUT8(ram_data_o[1024],7,0);

    // LOCAL SIGNALS
    CData/*5:0*/ top_sim__DOT__id_branch_info;
    CData/*0:0*/ top_sim__DOT__id_ilegl_inst;
    CData/*0:0*/ top_sim__DOT__ex_branch_jump;
    CData/*7:0*/ top_sim__DOT__ram_byte_en;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi;
    CData/*0:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_ecall;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_ebreak;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_mret;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_csrrwi;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_csrrsi;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_csrrci;
    CData/*0:0*/ top_sim__DOT__id_u__DOT__rv64_need_rd;
    CData/*0:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub;
    CData/*0:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_cout;
    CData/*5:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__shift_op2;
    CData/*0:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__lt;
    CData/*7:0*/ top_sim__DOT__mem_u__DOT__lb_rdata;
    CData/*0:0*/ top_sim__DOT__pc_next_gen_u__DOT__jump;
    SData/*11:0*/ top_sim__DOT__id_opcode_info;
    SData/*9:0*/ top_sim__DOT__id_alu_info;
    SData/*10:0*/ top_sim__DOT__id_ld_st_info;
    SData/*9:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o;
    SData/*10:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o;
    SData/*15:0*/ top_sim__DOT__mem_u__DOT__lh_rdata;
    IData/*31:0*/ top_sim__DOT__if_instr;
    IData/*31:0*/ top_sim__DOT__regfile_u__DOT__i;
    IData/*31:0*/ top_sim__DOT__mem_u__DOT__lw_rdata;
    QData/*63:0*/ top_sim__DOT__rf_rs1_rdata;
    QData/*63:0*/ top_sim__DOT__rf_rs2_rdata;
    QData/*63:0*/ top_sim__DOT__csr_rdata;
    QData/*63:0*/ top_sim__DOT__id_csr_rdata;
    QData/*63:0*/ top_sim__DOT__ex_alu_res;
    QData/*63:0*/ top_sim__DOT__ex_cgu_csr_wdata;
    QData/*63:0*/ top_sim__DOT__mem_rdata;
    QData/*63:0*/ top_sim__DOT__ram_rdata;
    QData/*63:0*/ top_sim__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r;
    QData/*63:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i;
    QData/*63:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i;
    QData/*63:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__csr_rdata_i;
    QData/*63:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o;
    QData/*63:0*/ top_sim__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm;
    QData/*63:0*/ top_sim__DOT__id_u__DOT__rv64_imm;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op1;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_op2;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__adder_op2;
    QData/*63:0*/ top_sim__DOT__ex_u__DOT__alu_u__DOT__alu_res;
    QData/*63:0*/ top_sim__DOT__ram_u__DOT__rdata;
    QData/*63:0*/ top_sim__DOT__ram_u__DOT__mask;
    QData/*63:0*/ top_sim__DOT__ram_u__DOT__wdata;
    QData/*63:0*/ top_sim__DOT__pc_next_gen_u__DOT__pc_add_op1;
    VlUnpacked<CData/*7:0*/, 1024> top_sim__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem;
    VlUnpacked<QData/*63:0*/, 31> top_sim__DOT__regfile_u__DOT__reg_data;
    VlUnpacked<CData/*7:0*/, 1024> top_sim__DOT__ram_u__DOT__ram_data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ top_sim__DOT__regfile_u__DOT____Vlvbound2;
    VlUnpacked<QData/*63:0*/, 31> top_sim__DOT____Vcellout__regfile_u__reg_data_o;
    VlUnpacked<CData/*7:0*/, 1024> top_sim__DOT____Vcellout__ram_u__ram_data_o;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_sim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_sim___024root);  ///< Copying not allowed
  public:
    Vtop_sim___024root(const char* name);
    ~Vtop_sim___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop_sim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
