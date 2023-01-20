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
void show_ram(CData *ram_data);

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
    
    // 开始仿真
    while (main_time < MAX_TIME) {
        
        if(main_time == 3) {
            reset = 0;    
        }

        top->clk = clk;
        top->reset = reset;
        top->eval();

            // for moniter
        CData *ram_data = top->ram_data_o;
        QData *reg_data = top->reg_data_o;

        int index = top->IF_pc_o/4;

        if(clk == 1 && main_time >= 2) {
            puts("After:");
            show_reg(reg_data, 10, top->id_rs1_idx_o, top->id_rs2_idx_o);
            show_ram(ram_data);
            printf("-----------------------------%d------------------------------\n", index+1);
            unsigned long IF_pc = top->IF_pc_o;
            printf("pc = %lu\n", IF_pc);
            cout << "instr = " << instr_ass_vec[index] << endl;
            show_reg(reg_data, 10, top->id_rs1_idx_o, top->id_rs2_idx_o);
            show_ram(ram_data);
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

    long ex_alu_res = top->ex_alu_res_o;
    long ex_mem_addr = top->ex_mem_addr_o;
    unsigned long ex_branch_jump = top->ex_branch_jump_o;

    long mem_rdata = top->mem_rdata_o;


    puts("");
    printf("id_rs1_idx = %lu id_rs1_rdata = %ld\n", id_rs1_idx, id_rs1_rdata);
    printf("id_rs2_idx = %lu id_rs2_rdata = %ld\n", id_rs2_idx, id_rs2_rdata);
    printf("id_imm = %ld\n", id_imm);

    printf("id_rd_wen = %lu ", id_rd_wen);
    printf("id_rd_idx = %lu\n", id_rd_idx);
    printf("ex_alu_res = %ld\n", ex_alu_res);
    printf("ex_mem_addr = %ld\n", ex_mem_addr);
    printf("ex_branch_jump = %lu\n", ex_branch_jump);
    printf("mem_rdata = %ld\n", top->mem_rdata_o);
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

int ram_prev[1024];

void show_ram(CData *ram) {
    puts("memory status:");
    int cnt = 0;
    for(int i = 0; i < 1000; i++) {
        if(ram_prev[i] != ram[i]) {
            cnt++;
            printf("ram[%d]\t: %d\t -> %d\t| ", i, ram_prev[i], ram[i]);
            if(cnt == 4) {
                puts("");
                cnt = 0;
            }
        }
    }
    puts("");
    for(int i = 0; i < 1024; i++) {
        ram_prev[i] = ram[i];
    }
}