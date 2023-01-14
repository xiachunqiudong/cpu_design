#include "util.h"

// 获取二进制信息
string get_bin(int num, int len) {
    string res;
    for(int i = len-1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        res += to_string(bit);
    }
    return res;
}


string get_bin_bit(int num, int len) {
    string res;
    
    for(int i = len - 1; i >= 0; i--) {
        res += to_string(i);
        res += "\t";
    }

    res += "\n";
    for(int i = len-1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        res += to_string(bit);
        res += "\t";
    }
    return res;
}

// 译码
string decode(int code, vector<string> &decode_info) {
    string res;
    string info;
    for(int i = 31; i >= 0; i--) {
        int bit = (code >> i) & 1;
        if(i == 24 || i == 19 || i == 14 || i == 11 || i == 6) {
            decode_info.push_back(info);
            info = "";
            res += "_";
        }
        res += to_string(bit);
        info += to_string(bit);
        if(i == 0) {
            decode_info.push_back(info);
        }
    }
    return res;
}

// 打印译码信息
void put_decode_info(vector<string> decode_info) {        
        // decode info
        string fun7 = decode_info[0];
        string rs2 = decode_info[1];
        string rs1 = decode_info[2];
        string fun3 = decode_info[3];
        string rd = decode_info[4];
        string opcode = decode_info[5];

        printf("fun7    rs2   rs1   fun3 rd    opcode\n");
        printf("%s %s %s %s  %s %s\n", fun7.c_str(), rs2.c_str(), rs1.c_str(), fun3.c_str(), rd.c_str(), opcode.c_str()); 
}

bool is_empty_line(string line) {
   for (char c : line ){
      if (!std::isspace(c)){
         return false;
      }
   }
   return true;
}