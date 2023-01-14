#include "util.h"

int main() {
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

    for(int i = 0; i < instr_vec.size(); i++) {

        cout << instr_vec[i] << endl;

        vector<string> decode_info;
        int instr = stoi(instr_vec[i], 0, 16);
        string code = decode(instr, decode_info);
        puts("-----------------------------------------");
        put_decode_info(code, decode_info);
        puts("-----------------------------------------");
        puts("");
    }

}



