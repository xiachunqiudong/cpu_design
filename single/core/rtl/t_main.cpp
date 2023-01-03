#include "verilated_vcd_c.h"
#include "Vt.h"  
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
    Vt* t = new Vt{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    t->trace(tfp, 0);
    tfp->open("wave.vcd");

    int clk = 0;
    int reset = 1;
    while (main_time < 20 && !contextp->gotFinish()) {

        t->clk = clk;

        t->eval();

        
        // clk翻转
        clk = 1 - clk;
    
        tfp->dump(main_time);
        main_time++;

    }

    delete t;
    tfp->close();	
    delete contextp;
    return 0;
}