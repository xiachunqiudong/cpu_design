#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <exception>

using namespace std;

string decode(int code, vector<string> &decode_info);
void put_decode_info(vector<string> decode_info);
bool is_empty_line(string line);
string get_bin(int num, int len);
string get_bin_bit(int num, int len);
string get_bin_opcode(int num);

