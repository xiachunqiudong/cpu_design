#include "verilated_vcd_c.h"
#include "Vtop_sim.h"  
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
    Vtop_sim* top = new Vtop_sim{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    int clk = 1;
    int rst = 1;

    while (main_time < 20) {

        if(main_time == 2) {
            rst = 0;
        }
        
       
        top->clk = clk;
        top->rst = rst;
        top->eval();

        clk = 1 - clk;
       
        tfp->dump(main_time);
        main_time++;

    }

    delete top;
    tfp->close();	
    delete contextp;
    return 0;
}