// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_SIM_H_
#define VERILATED_VTOP_SIM_H_  // guard

#include "verilated_heavy.h"

class Vtop_sim__Syms;
class Vtop_sim___024root;
class VerilatedVcdC;
class Vtop_sim_VerilatedVcd;


// This class is the main interface to the Verilated model
class Vtop_sim VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop_sim__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT64(&IF_pc_o,63,0);
    VL_OUT64((&reg_data_o)[31],63,0);
    VL_OUT8(&id_rs1_idx_o,4,0);
    VL_OUT64(&id_rs1_rdata_o,63,0);
    VL_OUT8(&id_rs2_idx_o,4,0);
    VL_OUT64(&id_rs2_rdata_o,63,0);
    VL_OUT64(&id_imm_o,63,0);
    VL_OUT8(&id_rd_wen_o,0,0);
    VL_OUT8(&id_rd_idx_o,4,0);
    VL_OUT64(&ex_alu_rd_wdata_o,63,0);
    VL_OUT64(&ex_agu_mem_addr_o,63,0);
    VL_OUT8(&ex_branch_jump_o,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop_sim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop_sim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop_sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop_sim();
  private:
    VL_UNCOPYABLE(Vtop_sim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
