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


int prev_ram[8192];

void show_data(CData *ram, int begin, int n, string msg) {
    int end   = begin + ((n-1) << 2);
    for(int i = begin; i <= end; i++) {
        if(ram[i] != prev_ram[i]) {
            cout << msg << endl;
            puts("---begin---");
            for(int i = 0; i < n; i++) {
                int index = begin + (i << 2);
                printf("ram[%d] = %d ", index, ram[index]);
            }
            puts("");
            puts("---end---");

        }
    }
    for(int i = begin; i <= end; i++) {
        prev_ram[i] = ram[i];
    }
}

void show_ram(CData *ram) {
    show_data(ram, 4096, 10, "bubble:");
    show_data(ram, 4136, 10, "quick:");
}

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

    while (main_time < 10000) {

        if(main_time == 2) {
            rst = 0;
        }
        
        top->clk = clk;
        top->rst = rst;
        top->eval();
        CData *ram = top->ram_data_o;
        show_ram(ram);
        clk = 1 - clk;
       
        tfp->dump(main_time);
        main_time++;

    }

    delete top;
    tfp->close();	
    delete contextp;
    return 0;
}