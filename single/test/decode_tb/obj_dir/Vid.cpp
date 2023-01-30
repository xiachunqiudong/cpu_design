// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vid.h"
#include "Vid__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vid::Vid(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vid__Syms(_vcontextp__, _vcname__, this)}
    , instr_i{vlSymsp->TOP.instr_i}
    , id_rs1_idx_o{vlSymsp->TOP.id_rs1_idx_o}
    , id_rs2_idx_o{vlSymsp->TOP.id_rs2_idx_o}
    , rf_rs1_rdata_i{vlSymsp->TOP.rf_rs1_rdata_i}
    , rf_rs2_rdata_i{vlSymsp->TOP.rf_rs2_rdata_i}
    , id_csr_wen_o{vlSymsp->TOP.id_csr_wen_o}
    , id_csr_idx_o{vlSymsp->TOP.id_csr_idx_o}
    , csr_rdata_i{vlSymsp->TOP.csr_rdata_i}
    , id_opcode_info_o{vlSymsp->TOP.id_opcode_info_o}
    , id_alu_info_o{vlSymsp->TOP.id_alu_info_o}
    , id_branch_info_o{vlSymsp->TOP.id_branch_info_o}
    , id_ld_st_info_o{vlSymsp->TOP.id_ld_st_info_o}
    , id_csr_info_o{vlSymsp->TOP.id_csr_info_o}
    , id_rs1_rdata_o{vlSymsp->TOP.id_rs1_rdata_o}
    , id_rs2_rdata_o{vlSymsp->TOP.id_rs2_rdata_o}
    , id_imm_o{vlSymsp->TOP.id_imm_o}
    , id_rd_wen_o{vlSymsp->TOP.id_rd_wen_o}
    , id_rd_idx_o{vlSymsp->TOP.id_rd_idx_o}
    , id_csr_rdata_o{vlSymsp->TOP.id_csr_rdata_o}
    , id_ilegl_instr_o{vlSymsp->TOP.id_ilegl_instr_o}
    , id_ecall_o{vlSymsp->TOP.id_ecall_o}
    , id_ebreak_o{vlSymsp->TOP.id_ebreak_o}
    , id_mret_o{vlSymsp->TOP.id_mret_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vid::Vid(const char* _vcname__)
    : Vid(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vid::~Vid() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vid___024root___eval_initial(Vid___024root* vlSelf);
void Vid___024root___eval_settle(Vid___024root* vlSelf);
void Vid___024root___eval(Vid___024root* vlSelf);
QData Vid___024root___change_request(Vid___024root* vlSelf);
#ifdef VL_DEBUG
void Vid___024root___eval_debug_assertions(Vid___024root* vlSelf);
#endif  // VL_DEBUG
void Vid___024root___final(Vid___024root* vlSelf);

static void _eval_initial_loop(Vid__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vid___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vid___024root___eval_settle(&(vlSymsp->TOP));
        Vid___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vid___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("id.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vid___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vid::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vid::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vid___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vid___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vid___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("id.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vid___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vid::final() {
    Vid___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vid::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vid::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vid___024root__traceInitTop(Vid___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vid___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vid___024root*>(voidSelf);
    Vid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vid___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vid___024root__traceRegister(Vid___024root* vlSelf, VerilatedVcd* tracep);

void Vid::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vid___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
