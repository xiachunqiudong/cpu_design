#include "verilated_vcd_c.h"
#include "Vid.h"  
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;

vluint64_t main_time = 0;  //initial 仿真时间

double sc_time_stamp()
{
	return main_time;
}

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vid* id = new Vid{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    id->trace(tfp, 0);
    tfp->open("wave.vcd");

    while (sc_time_stamp() < 20 && !contextp->gotFinish()) {
        
        id->eval();
            
        //contextp->timeInc(1);
        tfp->dump(main_time);
        main_time++;

    }

    delete id;
    tfp->close();	
    delete contextp;
    return 0;
}