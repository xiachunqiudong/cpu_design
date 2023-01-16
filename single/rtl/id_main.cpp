#include "verilated_vcd_c.h"
#include "Vid.h"  
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;

int instr_arr[4] = {
    0x00238393,
    0x00130313,
    0x007302B3,
    0x00552423
};

vluint64_t main_time = 0;

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

    int index = 0;
    int cnt = 0;
    while (main_time < 20 && !contextp->gotFinish()) {
        
        id->eval();
        id->instr_i = instr_arr[index % 4];
        
        //contextp->timeInc(1);
        tfp->dump(main_time);
        main_time++;
        if(main_time % 2 == 0) {
            index++;
        }
    }

    delete id;
    tfp->close();	
    delete contextp;
    return 0;
}