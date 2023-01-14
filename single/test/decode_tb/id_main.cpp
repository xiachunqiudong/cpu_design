#include "verilated_vcd_c.h"
#include "Vid.h"  
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <iostream>
#include "util.h"

using namespace std;

string opcode_info_name[12] = {"SYSTEM", "AUIPC", "LUI", "STORE", "LOAD", "JALR", "JAL",
                          "BRANCH", "ALU_W", "ALU", "ALI_IMM_W", "ALU_IMM"};

string alu_info_name[10] = {"ADD", "SUB", "SLL", "SLT", "SLTU", "XOR", "SRL", "SRA", "OR", "AND"};

string ld_st_info_name[11] = {"LB", "LH", "LW", "LD", "LBU", "LHU", "LWU", "SB", "SH", "SW", "SD"};

vluint64_t main_time = 0;

double sc_time_stamp(){
	return main_time;
}

int main(int argc, char** argv, char** env) {

    // 读入指令
    ifstream in("decode.hex");

    string line;
    vector<string> instr_vec;

    while(getline(in, line)) {
        if(is_empty_line(line)) {
            continue;
        } else {
            instr_vec.push_back(line);
        }
    }

    // 读入汇编指令
    ifstream in1("decode.s");
    string line1;
    vector<string> instr_ass_vec;
    while (getline(in1, line1)) {
        if(is_empty_line(line1) || line1[0] == '.' || line1[line1.size()-1] == ':') {
            continue;
        } else {
            instr_ass_vec.push_back(line1);
        }
    }
    
    // verilator初始化
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vid* id = new Vid{contextp};

    // 生成波形
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    id->trace(tfp, 0);
    tfp->open("wave.vcd");

    int index = 0;
    while (main_time < instr_vec.size() && !contextp->gotFinish()) {
        string instr_str = instr_vec[index % instr_vec.size()];

        long instr = stol(instr_str, 0, 16);
        
        id->instr_i = instr;
        id->eval();
        // id单元输出
        printf("----------------------------%d-----------------------------\n", (index + 1));
        // c
        vector<string> decode_info;
        string code = decode(instr, decode_info);
        printf("instr: %s\n", instr_ass_vec[index].c_str());
        put_decode_info(decode_info);
        string opcode = decode_info[5];
        string fun3   = decode_info[3];

        // verilog
        // regfile
        int id_rs1_en_o  = id->id_rs1_en_o;
        int id_rs1_idx_o = id->id_rs1_idx_o;
        int id_rs2_en_o  = id->id_rs2_en_o;
        int id_rs2_idx_o = id->id_rs2_idx_o;
        int id_rd_en_o   = id->id_rd_en_o;
        int id_rd_idx_o  = id->id_rd_idx_o;
        // csr
        int id_csr_en_o  = id->id_csr_en_o;
        int id_csr_idx_o = id->id_csr_idx_o;
        // info
        int id_opcode_info_o = id->id_opcode_info_o;
        int id_alu_info_o    = id->id_alu_info_o;
        int id_branch_info_o = id->id_branch_info_o;
        int id_ld_st_info_o  = id->id_ld_st_info_o;
        int id_csr_info_o    = id->id_csr_info_o;
        // excp
        int id_ilegl_instr_o = id->id_ilegl_instr_o;
        int id_ecall_o       = id->id_ecall_o;
        int id_ebreak_o      = id->id_ebreak_o;
        int id_mret_o        = id->id_mret_o;
        int id_imm_o         = id->id_imm_o;

        puts("");
        puts("REG CSR IMM:");
        printf("id_rs1_en_o = %d, id_rs1_idx_o = %d\n", id_rs1_en_o, id_rs1_idx_o);
        printf("id_rs2_en_o = %d, id_rs2_idx_o = %d\n", id_rs2_en_o, id_rs2_idx_o);
        printf("id_rd_en_o  = %d, id_rd_idx_o  = %d\n", id_rd_en_o,  id_rd_idx_o);
        printf("id_csr_en_o = %d, id_csr_idx_o = %d\n", id_csr_en_o,  id_csr_idx_o);
        printf("id_imm_o    = %d\n", id_imm_o);
        
        puts("");
        puts("INFO:");

        string opcode_info = get_bin(id_opcode_info_o, 12);
        for(int i = 0; i < 12; i++) {
            if( opcode_info[i] == '1') {
                cout << "instr type: " << opcode_info_name[11 - i] << endl;
            }            
        }
        

        string alu_info = get_bin(id_alu_info_o, 10);
        for(int i = 0; i < 10; i++) {
            if( alu_info[i] == '1') {
                cout << "alu info:   " << alu_info_name[i] << endl;
            }            
        }
        string ld_st_info = get_bin(id_ld_st_info_o, 11);
        for(int i = 0; i < 11; i++) {
            if( ld_st_info[i] == '1') {
                cout << "ld_st info:   " << ld_st_info_name[i] << endl;
            }            
        }

        // OPCODE
        puts("id_opcode_info_o:\t");
        cout << get_bin_bit(id_opcode_info_o, 12) << endl;

        // ALU
        if(opcode == "0010011" || opcode == "0011011" || opcode == "0110011" || opcode == "0111011") {
            puts("id_alu_info_o:");
            cout << get_bin_bit(id_alu_info_o, 10) << endl;
        }

        // BRANCH
        if(opcode == "1100011") {
            puts("id_branch_info_o:");
            cout << get_bin_bit(id_branch_info_o, 6) << endl;
        }
        
        // LOAD STORE
        if(opcode == "0000011" || opcode == "0100011") {
            puts("id_ld_st_info_o:");
            cout << get_bin_bit(id_ld_st_info_o, 11) << endl;  
        }
        
        // CSR
        if(opcode == "1110011" && fun3 != "000") {
            puts("id_csr_info_o:");
            cout << get_bin_bit(id_csr_info_o, 6) << endl;
        }
        
        puts("");
        puts("EXCP:");
        // excp
        printf("id_ilegl_instr_o = %d | ", id_ilegl_instr_o);
        printf("id_ecall_o = %d | ", id_ecall_o);
        printf("id_ebreak_o = %d | ", id_ebreak_o);
        printf("id_mret_o = %d\n", id_mret_o);
        puts("");
        puts("---------------------------end------------------------------");
        puts("");

        index++;
        tfp->dump(main_time);
        main_time++;
    }

    delete id;
    tfp->close();	
    delete contextp;
    return 0;
}