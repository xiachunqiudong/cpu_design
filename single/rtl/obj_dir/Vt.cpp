// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vt.h"
#include "Vt__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vt::Vt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vt__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
}

Vt::Vt(const char* _vcname__)
    : Vt(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vt::~Vt() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vt___024root___eval_initial(Vt___024root* vlSelf);
void Vt___024root___eval_settle(Vt___024root* vlSelf);
void Vt___024root___eval(Vt___024root* vlSelf);
QData Vt___024root___change_request(Vt___024root* vlSelf);
#ifdef VL_DEBUG
void Vt___024root___eval_debug_assertions(Vt___024root* vlSelf);
#endif  // VL_DEBUG
void Vt___024root___final(Vt___024root* vlSelf);

static void _eval_initial_loop(Vt__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vt___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vt___024root___eval_settle(&(vlSymsp->TOP));
        Vt___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vt___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("t.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vt___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vt___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vt___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("t.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vt___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vt::final() {
    Vt___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vt::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vt::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vt___024root__traceInitTop(Vt___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vt___024root*>(voidSelf);
    Vt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vt___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vt___024root__traceRegister(Vt___024root* vlSelf, VerilatedVcd* tracep);

void Vt::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vt___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
