#include "verilated_vcd_c.h"
#include "Vtop.h"  
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
    Vtop* top = new Vtop{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    while (main_time < 5 && !contextp->gotFinish()) {
        
        top->a = 5;
        top->b = -4;
        
        top->eval();
        
        printf("c = %d, cout = %d\n", top->c, top->cout);

        tfp->dump(main_time);
        main_time++;

    }

    delete top;
    tfp->close();	
    delete contextp;
    return 0;
}