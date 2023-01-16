#include "verilated_vcd_c.h"
#include "Vcpu.h"  
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;


vluint64_t main_time = 0;

double sc_time_stamp()
{
	return main_time;
}

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vcpu* cpu = new Vcpu{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    cpu->trace(tfp, 0);
    tfp->open("wave.vcd");

    int clk = 0;
    int reset = 1;
    while (main_time < 20 && !contextp->gotFinish()) {
        
        if(main_time > 1) {
            reset = 0;    
        }

        cpu->clk = clk;
        cpu->reset = reset;

        cpu->eval();

        
        // clk翻转
        clk = 1 - clk;
    
        tfp->dump(main_time);
        main_time++;

    }

    delete cpu;
    tfp->close();	
    delete contextp;
    return 0;
}