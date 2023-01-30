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
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_sim__DOT__ifu_prdt_taken;
        CData/*0:0*/ top_sim__DOT__id_ilegl_instr;
        CData/*0:0*/ top_sim__DOT__EX_rd_wen;
        CData/*4:0*/ top_sim__DOT__EX_rd_idx;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__jump;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ecall;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_ebreak;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_mret;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrw;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrs;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrc;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi;
        CData/*0:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_csrrci;
        CData/*0:0*/ top_sim__DOT__u_ID__DOT__ID_data_valid;
        CData/*0:0*/ top_sim__DOT__u_ID__DOT__ID_prdt_taken_r;
        CData/*0:0*/ top_sim__DOT__u_ID__DOT__ID_pc_misalign_r;
        CData/*0:0*/ top_sim__DOT__u_ID__DOT__ID_if_bus_err_r;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_ecall;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_ebreak;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_mret;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrw;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrs;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrc;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrwi;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrsi;
        CData/*0:0*/ top_sim__DOT__u_id__DOT__rv64_csrrci;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_data_valid;
        CData/*5:0*/ top_sim__DOT__u_EX__DOT__EX_branch_info_r;
        CData/*5:0*/ top_sim__DOT__u_EX__DOT__EX_csr_info_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_csr_wen_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_pc_misalign_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_if_bus_err_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_ilegl_instr_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_ecall_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_ebreak_r;
        CData/*0:0*/ top_sim__DOT__u_EX__DOT__EX_mret_r;
        CData/*0:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__res_sel_sub;
        CData/*5:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__shift_op2;
        SData/*11:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__optype_info;
        SData/*9:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_alu_info_o;
        SData/*10:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o;
        SData/*11:0*/ top_sim__DOT__u_EX__DOT__EX_optype_info_r;
        SData/*9:0*/ top_sim__DOT__u_EX__DOT__EX_alu_info_r;
        SData/*10:0*/ top_sim__DOT__u_EX__DOT__EX_ld_st_info_r;
        SData/*11:0*/ top_sim__DOT__u_EX__DOT__EX_csr_idx_r;
        SData/*11:0*/ top_sim__DOT__u_ex__DOT__ex_csr_idx_o;
        IData/*31:0*/ top_sim__DOT__ifu_instr;
        IData/*31:0*/ top_sim__DOT__u_ID__DOT__ID_instr_r;
        QData/*63:0*/ top_sim__DOT__rf_rs1_rdata;
        QData/*63:0*/ top_sim__DOT__rf_rs2_rdata;
        QData/*63:0*/ top_sim__DOT__ex_csr_rdata;
        QData/*63:0*/ top_sim__DOT__ex_cgu_csr_wdata;
        QData/*63:0*/ top_sim__DOT__u_IF__DOT__pc_r;
        QData/*63:0*/ top_sim__DOT__u_ifu__DOT__pc_add_op1;
        QData/*63:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i;
        QData/*63:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i;
        QData/*63:0*/ top_sim__DOT__u_ifu__DOT__u_if_mini_dec_u__DOT__idu__DOT__rv64_imm;
        QData/*63:0*/ top_sim__DOT__u_ID__DOT__ID_pc_r;
        QData/*63:0*/ top_sim__DOT__u_id__DOT__rv64_imm;
        QData/*63:0*/ top_sim__DOT__u_EX__DOT__EX_pc_r;
        QData/*63:0*/ top_sim__DOT__u_EX__DOT__EX_rs1_rdata_r;
        QData/*63:0*/ top_sim__DOT__u_EX__DOT__EX_rs2_rdata_r;
    };
    struct {
        QData/*63:0*/ top_sim__DOT__u_EX__DOT__EX_imm_r;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__csr_rdata_i;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op1;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_op2;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_add_sub_res;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__adder_op2;
        QData/*63:0*/ top_sim__DOT__u_ex__DOT__alu_u__DOT__alu_res;
        VlUnpacked<CData/*7:0*/, 1024> top_sim__DOT__u_ifu__DOT__u_if_bus__DOT__instr_mem;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
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
