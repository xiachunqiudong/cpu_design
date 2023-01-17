#include "verilated_vcd_c.h"
#include "Vtop_sim.h"  
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "util.h"

using namespace std;

#define MAX_TIME 100

vluint64_t main_time = 0;

void show_detail(Vtop_sim* top);
void show_reg(QData *reg_data, int limit, int rs1, int rs2);

int main(int argc, char** argv, char** env) {

        // 读入汇编指令
    ifstream in("code.s");
    string line;
    vector<string> instr_ass_vec;
    while (getline(in, line)) {
        if(is_empty_line(line) || line[0] == '.' || line[line.size()-1] == ':') {
            continue;
        } else {
            instr_ass_vec.push_back(line);
        }
    }

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop_sim* top = new Vtop_sim{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    int clk = 1;
    int reset = 1;
    
    while (main_time < MAX_TIME) {
        
        if(main_time == 3) {
            reset = 0;    
        }

        top->clk = clk;
        top->reset = reset;
        top->eval();

        int index = top->IF_pc_o/4;

        if(clk == 1 && main_time >= 2) {
            printf("-----------------------------%d------------------------------\n", index+1);
            unsigned long IF_pc = top->IF_pc_o;
            printf("pc = %lu\n", IF_pc);
            cout << "instr = " << instr_ass_vec[index] << endl;
            show_detail(top);
        }
        
        tfp->dump(main_time);
        clk = 1 - clk;
        main_time++;

    }

    delete top;
    tfp->close();	
    delete contextp;
    return 0;
}


void show_detail(Vtop_sim* top) {

    unsigned long id_rs1_idx = top->id_rs1_idx_o;
    long id_rs1_rdata = top->id_rs1_rdata_o;
    unsigned long id_rs2_idx = top->id_rs2_idx_o;
    long id_rs2_rdata = top->id_rs2_rdata_o;
    unsigned long id_imm = top->id_imm_o;

    unsigned long id_rd_wen = top->id_rd_wen_o;
    unsigned long id_rd_idx = top->id_rd_idx_o;

    long ex_alu_rd_wdata_o = top->ex_alu_rd_wdata_o;
    long ex_agu_mem_addr_o = top->ex_agu_mem_addr_o;
    unsigned long ex_branch_jump_o = top->ex_branch_jump_o;

    // 显示当前寄存器的值
    show_reg(top->reg_data_o, 10, id_rs1_idx, id_rs2_idx);


    
    printf("id_rs1_idx = %lu id_rs1_rdata = %ld\n", id_rs1_idx, id_rs1_rdata);
    printf("id_rs2_idx = %lu id_rs2_rdata = %ld\n", id_rs2_idx, id_rs2_rdata);
    printf("id_imm = %ld\n", id_imm);

    printf("id_rd_wen = %lu ", id_rd_wen);
    printf("id_rd_idx = %lu\n", id_rd_idx);
    printf("ex_alu_rd_wdata_o = %ld\n", ex_alu_rd_wdata_o);
    printf("ex_agu_mem_addr_o = %ld\n", ex_agu_mem_addr_o);
    printf("ex_branch_jump_o = %lu\n", ex_branch_jump_o);
    puts("---------------------------end------------------------------");
    puts("");
}

void show_reg(QData *reg_data, int limit, int rs1, int rs2) {
    int cnt = 0;
    puts("regfile status:");
    for(int i = 0; i < limit; i++) {
        if(i == rs1 -1 || i == rs2 - 1) {
            printf("[x%d\t = %ld]\t", i + 1, reg_data[i]);
        } else {
            printf("x%d\t = %ld\t", i + 1, reg_data[i]);
        }   
        cnt++;
        if(cnt == 5 ||i == 30) {
            puts("");
            cnt = 0;
        }
    }
    puts("");
}