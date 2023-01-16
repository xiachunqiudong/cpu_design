// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========


void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf);

Vcpu___024root::Vcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu___024root___ctor_var_reset(this);
}

void Vcpu___024root::__Vconfigure(Vcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu___024root::~Vcpu___024root() {
}

void Vcpu___024root___initial__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x636f6465U;
    __Vtemp1[2U] = 0x2e2fU;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem)
                 , 0, ~0ULL);
}

void Vcpu___024root___settle__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->cpu__DOT__if_instr = ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                   [(0x3ffU & ((IData)(3U) 
                                               + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                   << 0x18U) | ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                 [(0x3ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                    [
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r)))] 
                                                    << 8U) 
                                                   | vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem
                                                   [
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r))])));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (0U == (vlSelf->cpu__DOT__if_instr >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (1U == (vlSelf->cpu__DOT__if_instr >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret 
        = ((IData)((0x73U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
           & (0x302U == (vlSelf->cpu__DOT__if_instr 
                         >> 0x14U)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o 
        = (((((((IData)((0x33U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
                & (0U == (vlSelf->cpu__DOT__if_instr 
                          >> 0x19U))) | (IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr)))) 
              | ((IData)((0x3bU == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
                 & (0U == (vlSelf->cpu__DOT__if_instr 
                           >> 0x19U)))) | (IData)((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu__DOT__if_instr)))) 
            << 9U) | (((((IData)((0x33U == (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                         & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                      >> 0x19U))) | 
                        ((IData)((0x3bU == (0x707fU 
                                            & vlSelf->cpu__DOT__if_instr))) 
                         & (0x20U == (vlSelf->cpu__DOT__if_instr 
                                      >> 0x19U)))) 
                       << 8U) | (((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                      & (0U == (vlSelf->cpu__DOT__if_instr 
                                                >> 0x19U))) 
                                     | ((IData)((0x1013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu__DOT__if_instr))) 
                                        & (0U == (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x19U)))) 
                                    | ((IData)((0x103bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                       & (0U == (vlSelf->cpu__DOT__if_instr 
                                                 >> 0x19U)))) 
                                   | ((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                      & (0U == (vlSelf->cpu__DOT__if_instr 
                                                >> 0x19U)))) 
                                  << 7U) | (((((IData)(
                                                       (0x2033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu__DOT__if_instr 
                                                   >> 0x19U))) 
                                              | (IData)(
                                                        (0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr)))) 
                                             << 6U) 
                                            | (((((IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu__DOT__if_instr))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->cpu__DOT__if_instr 
                                                      >> 0x19U))) 
                                                 | (IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr)))) 
                                                << 5U) 
                                               | (((((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->cpu__DOT__if_instr 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cpu__DOT__if_instr)))) 
                                                   << 4U) 
                                                  | (((((((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U))) 
                                                         | ((IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->cpu__DOT__if_instr 
                                                                >> 0x19U)))) 
                                                        | ((IData)(
                                                                   (0x503bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu__DOT__if_instr))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->cpu__DOT__if_instr 
                                                               >> 0x19U)))) 
                                                       | ((IData)(
                                                                  (0x501bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U)))) 
                                                      << 3U) 
                                                     | (((((((IData)(
                                                                     (0x5033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->cpu__DOT__if_instr 
                                                                 >> 0x19U))) 
                                                            | ((IData)(
                                                                       (0x5013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U)))) 
                                                           | ((IData)(
                                                                      (0x503bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              & (0x20U 
                                                                 == 
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x19U)))) 
                                                          | ((IData)(
                                                                     (0x501bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->cpu__DOT__if_instr 
                                                                 >> 0x19U)))) 
                                                         << 2U) 
                                                        | (((((IData)(
                                                                      (0x6033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->cpu__DOT__if_instr 
                                                                  >> 0x19U))) 
                                                             | (IData)(
                                                                       (0x6013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr)))) 
                                                            << 1U) 
                                                           | (((IData)(
                                                                       (0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x7013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o 
        = (((IData)((3U == (0x707fU & vlSelf->cpu__DOT__if_instr))) 
            << 0xaU) | (((IData)((0x1003U == (0x707fU 
                                              & vlSelf->cpu__DOT__if_instr))) 
                         << 9U) | (((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                    << 8U) | (((IData)(
                                                       (0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu__DOT__if_instr))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0x6003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0x23U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu__DOT__if_instr))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu__DOT__if_instr))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0x2023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu__DOT__if_instr))) 
                                                                 << 1U) 
                                                                | (IData)(
                                                                          (0x3023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm 
        = (((((- (QData)((IData)(((((0x13U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr)) 
                                    | (0x1bU == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr))) 
                                   | (3U == (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr))) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->cpu__DOT__if_instr)))))) 
              & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                      >> 0x1fU)))) 
                  << 0xcU) | (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                              >> 0x14U))))) 
             | ((- (QData)((IData)((0x23U == (0x7fU 
                                              & vlSelf->cpu__DOT__if_instr))))) 
                & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->cpu__DOT__if_instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->cpu__DOT__if_instr 
                                                      >> 7U)))))))) 
            | ((- (QData)((IData)((0x63U == (0x7fU 
                                             & vlSelf->cpu__DOT__if_instr))))) 
               & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                       >> 0x1fU)))) 
                   << 0xdU) | (QData)((IData)(((0x1000U 
                                                & (vlSelf->cpu__DOT__if_instr 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->cpu__DOT__if_instr 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->cpu__DOT__if_instr 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->cpu__DOT__if_instr 
                                                           >> 7U)))))))))) 
           | ((- (QData)((IData)((0x6fU == (0x7fU & vlSelf->cpu__DOT__if_instr))))) 
              & (((- (QData)((IData)((vlSelf->cpu__DOT__if_instr 
                                      >> 0x1fU)))) 
                  << 0x15U) | (QData)((IData)(((0x100000U 
                                                & (vlSelf->cpu__DOT__if_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->cpu__DOT__if_instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu__DOT__if_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->cpu__DOT__if_instr 
                                                           >> 0x14U))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info 
        = (((0x13U == (0x7fU & vlSelf->cpu__DOT__if_instr)) 
            << 0xbU) | (((0x1bU == (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                         << 0xaU) | (((0x33U == (0x7fU 
                                                 & vlSelf->cpu__DOT__if_instr)) 
                                      << 9U) | (((0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr)) 
                                                 << 8U) 
                                                | (((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cpu__DOT__if_instr)) 
                                                    << 7U) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu__DOT__if_instr)) 
                                                       << 6U) 
                                                      | (((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu__DOT__if_instr)) 
                                                          << 5U) 
                                                         | (((3U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->cpu__DOT__if_instr)) 
                                                             << 4U) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->cpu__DOT__if_instr)) 
                                                                << 3U) 
                                                               | (((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->cpu__DOT__if_instr)) 
                                                                   << 2U) 
                                                                  | (((0x17U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)) 
                                                                      << 1U) 
                                                                     | (0x73U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__id_alu_info = (((((((IData)((0x33U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu__DOT__if_instr))) 
                                          & (0U == 
                                             (vlSelf->cpu__DOT__if_instr 
                                              >> 0x19U))) 
                                         | (IData)(
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu__DOT__if_instr)))) 
                                        | ((IData)(
                                                   (0x3bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu__DOT__if_instr))) 
                                           & (0U == 
                                              (vlSelf->cpu__DOT__if_instr 
                                               >> 0x19U)))) 
                                       | (IData)((0x1bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu__DOT__if_instr)))) 
                                      << 9U) | (((((IData)(
                                                           (0x33U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->cpu__DOT__if_instr))) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->cpu__DOT__if_instr 
                                                       >> 0x19U))) 
                                                  | ((IData)(
                                                             (0x3bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->cpu__DOT__if_instr 
                                                         >> 0x19U)))) 
                                                 << 8U) 
                                                | (((((((IData)(
                                                                (0x1033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->cpu__DOT__if_instr 
                                                            >> 0x19U))) 
                                                       | ((IData)(
                                                                  (0x1013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu__DOT__if_instr 
                                                              >> 0x19U)))) 
                                                      | ((IData)(
                                                                 (0x103bU 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x19U)))) 
                                                     | ((IData)(
                                                                (0x101bU 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->cpu__DOT__if_instr))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->cpu__DOT__if_instr 
                                                            >> 0x19U)))) 
                                                    << 7U) 
                                                   | (((((IData)(
                                                                 (0x2033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu__DOT__if_instr))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->cpu__DOT__if_instr 
                                                             >> 0x19U))) 
                                                        | (IData)(
                                                                  (0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu__DOT__if_instr)))) 
                                                       << 6U) 
                                                      | (((((IData)(
                                                                    (0x3033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu__DOT__if_instr))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->cpu__DOT__if_instr 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     (0x3013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu__DOT__if_instr)))) 
                                                          << 5U) 
                                                         | (((((IData)(
                                                                       (0x4033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->cpu__DOT__if_instr 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu__DOT__if_instr)))) 
                                                             << 4U) 
                                                            | (((((((IData)(
                                                                            (0x5033U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(
                                                                              (0x5013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu__DOT__if_instr 
                                                                          >> 0x19U)))) 
                                                                  | ((IData)(
                                                                             (0x503bU 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->cpu__DOT__if_instr))) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x19U)))) 
                                                                 | ((IData)(
                                                                            (0x501bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu__DOT__if_instr))) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x19U)))) 
                                                                << 3U) 
                                                               | (((((((IData)(
                                                                               (0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x19U))) 
                                                                      | ((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                         & (0x20U 
                                                                            == 
                                                                            (vlSelf->cpu__DOT__if_instr 
                                                                             >> 0x19U)))) 
                                                                     | ((IData)(
                                                                                (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x19U)))) 
                                                                    | ((IData)(
                                                                               (0x501bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x19U)))) 
                                                                   << 2U) 
                                                                  | (((((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x19U))) 
                                                                       | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))) 
                                                                      << 1U) 
                                                                     | (((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr))) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu__DOT__if_instr 
                                                                             >> 0x19U))) 
                                                                        | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__id_u__DOT__rv64_imm = (((((- (QData)((IData)(
                                                                   ((((0x13U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)) 
                                                                      | (0x1bU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                                     | (3U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu__DOT__if_instr))) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->cpu__DOT__if_instr 
                                                                      >> 0x14U))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->cpu__DOT__if_instr))))) 
                                                  & (((- (QData)((IData)(
                                                                         (vlSelf->cpu__DOT__if_instr 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0xfe0U 
                                                                         & (vlSelf->cpu__DOT__if_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1fU 
                                                                           & (vlSelf->cpu__DOT__if_instr 
                                                                              >> 7U)))))))) 
                                              | ((- (QData)((IData)(
                                                                    (0x63U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->cpu__DOT__if_instr))))) 
                                                 & (((- (QData)((IData)(
                                                                        (vlSelf->cpu__DOT__if_instr 
                                                                         >> 0x1fU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlSelf->cpu__DOT__if_instr 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->cpu__DOT__if_instr 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->cpu__DOT__if_instr 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->cpu__DOT__if_instr 
                                                                                >> 7U)))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->cpu__DOT__if_instr))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->cpu__DOT__if_instr 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->cpu__DOT__if_instr 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->cpu__DOT__if_instr) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->cpu__DOT__if_instr 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->cpu__DOT__if_instr 
                                                                                >> 0x14U))))))))));
    vlSelf->cpu__DOT__id_u__DOT__rv64_ecall = ((IData)(
                                                       (0x73U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu__DOT__if_instr 
                                                   >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak = ((IData)(
                                                        (0x73U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu__DOT__if_instr))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu__DOT__if_instr 
                                                    >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_mret = ((IData)(
                                                      (0x73U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->cpu__DOT__if_instr))) 
                                              & (0x302U 
                                                 == 
                                                 (vlSelf->cpu__DOT__if_instr 
                                                  >> 0x14U)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi = (IData)(
                                                       (0x5073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi = (IData)(
                                                       (0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci = (IData)(
                                                       (0x7073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu__DOT__if_instr)));
    vlSelf->cpu__DOT__id_opcode_info = (((0x13U == 
                                          (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                         << 0xbU) | 
                                        (((0x1bU == 
                                           (0x7fU & vlSelf->cpu__DOT__if_instr)) 
                                          << 0xaU) 
                                         | (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                             << 9U) 
                                            | (((0x3bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                                << 8U) 
                                               | (((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu__DOT__if_instr)) 
                                                   << 7U) 
                                                  | (((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu__DOT__if_instr)) 
                                                      << 6U) 
                                                     | (((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu__DOT__if_instr)) 
                                                         << 5U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu__DOT__if_instr)) 
                                                            << 4U) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->cpu__DOT__if_instr)) 
                                                               << 3U) 
                                                              | (((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->cpu__DOT__if_instr)) 
                                                                  << 2U) 
                                                                 | (((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->cpu__DOT__if_instr)) 
                                                                     << 1U) 
                                                                    | (0x73U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu__DOT__if_instr)))))))))))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__bj = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xe0U 
                                                         & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))));
    vlSelf->cpu__DOT__rf_rs1_rdata = ((1U & ((~ (((
                                                   ((((((0x37U 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelf->cpu__DOT__if_instr)) 
                                                        & (0x17U 
                                                           != 
                                                           (0x7fU 
                                                            & vlSelf->cpu__DOT__if_instr))) 
                                                       & (0x6fU 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->cpu__DOT__if_instr))) 
                                                      & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi))) 
                                                     & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi))) 
                                                    & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci))) 
                                                   & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ecall))) 
                                                  & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak))) 
                                                 & (~ (IData)(vlSelf->cpu__DOT__id_u__DOT__rv64_mret)))) 
                                             | (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->cpu__DOT__if_instr 
                                                    >> 0xfU)))))
                                       ? 0ULL : ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->cpu__DOT__if_instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0ULL));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub 
        = (1U & (((IData)(vlSelf->cpu__DOT__id_alu_info) 
                  >> 8U) | ((IData)(vlSelf->cpu__DOT__id_opcode_info) 
                            >> 7U)));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2 
        = ((IData)((0U != (0xc06U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
            ? vlSelf->cpu__DOT__id_u__DOT__rv64_imm
            : ((IData)((0U != (0x60U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
                ? 4ULL : ((1U & ((~ ((((0x33U == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)) 
                                       | (0x3bU == 
                                          (0x7fU & vlSelf->cpu__DOT__if_instr))) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelf->cpu__DOT__if_instr))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->cpu__DOT__if_instr)))) 
                                 | (0U == (0x1fU & 
                                           (vlSelf->cpu__DOT__if_instr 
                                            >> 0x14U)))))
                           ? 0ULL : ((0x1eU >= (0x1fU 
                                                & ((vlSelf->cpu__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U))))
                                      ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                     [(0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                                 >> 0x14U) 
                                                - (IData)(1U)))]
                                      : 0ULL))));
    vlSelf->cpu__DOT__instr_fetch_u__DOT__pc_add_op1 
        = ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__bj)
            ? ((IData)((0U != (0xc0U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))))
                ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
                : ((0x20U & (IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info))
                    ? ((1U & ((~ ((IData)(vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info) 
                                  >> 5U)) | (0U == 
                                             (0x1fU 
                                              & (vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU)))))
                        ? 0ULL : ((0x1eU >= (0x1fU 
                                             & ((vlSelf->cpu__DOT__if_instr 
                                                 >> 0xfU) 
                                                - (IData)(1U))))
                                   ? vlSelf->cpu__DOT__regfile_u__DOT__reg_data
                                  [(0x1fU & ((vlSelf->cpu__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U)))]
                                   : 0ULL)) : 0ULL))
            : vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
        = ((IData)((0U != (0x62U & (IData)(vlSelf->cpu__DOT__id_opcode_info))))
            ? vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r
            : ((4U & (IData)(vlSelf->cpu__DOT__id_opcode_info))
                ? 0ULL : vlSelf->cpu__DOT__rf_rs1_rdata));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res 
        = (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
           ^ vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
        = ((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
            + ((- (QData)((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub))) 
               ^ vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)) 
           + ((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)
               ? 1ULL : 0ULL));
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res 
        = ((((((((((- (QData)((IData)((1U & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x200U 
                                                        & (IData)(vlSelf->cpu__DOT__id_alu_info))) 
                                                      | (0U 
                                                         != 
                                                         (0x66U 
                                                          & (IData)(vlSelf->cpu__DOT__id_opcode_info))))) 
                                             | (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub)))))) 
                   & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                               >> 7U))))) 
                     & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                        << (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                              >> 6U))))) 
                    & ((1U & (IData)((vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res 
                                      >> 0x3fU))) ? 1ULL
                        : 0ULL))) | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                                            >> 5U))))) 
                                     & ((IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__ltu)
                                         ? 1ULL : 0ULL))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                            >> 4U))))) 
                  & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res)) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                           >> 3U))))) 
                 & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                    >> (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                          >> 2U))))) 
                & VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1, 
                                 (0x3fU & (IData)(vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu__DOT__id_alu_info) 
                                         >> 1U))))) 
               & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                  | vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->cpu__DOT__id_alu_info))))) 
              & (vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 
                 & vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2)));
}

void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__if_instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rf_rs1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__id_opcode_info = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__id_alu_info = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__id_csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__id_ilegl_inst = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ex_cgu_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_branch_jump = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_reg_u__DOT__pc_dff__DOT__q_r = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__bj = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__pc_add_op1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->cpu__DOT__instr_fetch_u__DOT__if_bus_u__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__opcode_info = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs1_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rf_rs2_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__csr_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_alu_info_o = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ld_st_info_o = VL_RAND_RESET_I(11);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_csr_rdata_o = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__id_ilegl_instr_o = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ecall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_ebreak = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_mret = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrw = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrs = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_csrrci = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instr_fetch_u__DOT__if_mini_dec_u__DOT__idu__DOT__rv64_imm = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__id_u__DOT__rv64_ecall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_ebreak = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_mret = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_csrrci = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_u__DOT__rv64_imm = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->cpu__DOT__regfile_u__DOT__reg_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->cpu__DOT__regfile_u__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__regfile_u__DOT____Vlvbound2 = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__res_sel_sub = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op1 = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_op2 = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_add_sub_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_xor_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ex_u__DOT__alu_u__DOT__geu = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_wb__DOT__mem_rd_wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__u_wb__DOT__csr_rd_wdata_i = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
