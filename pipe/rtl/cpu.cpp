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

    int clk = 1;
    int rst = 1;
    int load_use = 0;

    while (main_time < 20 && !contextp->gotFinish()) {

        if(main_time == 2) {
            rst = 0;
        }
        
        if(main_time == 4 || main_time == 5) {
            load_use = 1;
        } else {
            load_use = 0;
        }
       
        cpu->clk = clk;
        cpu->rst = rst;
        cpu->eval();
        cpu->load_use = load_use;
        
        clk = 1 - clk;
       
        tfp->dump(main_time);
        main_time++;

    }

    delete cpu;
    tfp->close();	
    delete contextp;
    return 0;
}