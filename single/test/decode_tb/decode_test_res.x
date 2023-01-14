----------------------------1-----------------------------
instr: add x1, x2, x3
fun7    rs2   rs1   fun3 rd    opcode
0000000 00011 00010 000  00001 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 2
id_rs2_en_o = 1, id_rs2_idx_o = 3
id_rd_en_o  = 1, id_rd_idx_o  = 1
id_csr_en_o = 0, id_csr_idx_o = 3
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   ADD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------2-----------------------------
instr: addw x1, x2, x3
fun7    rs2   rs1   fun3 rd    opcode
0000000 00011 00010 000  00001 0111011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 2
id_rs2_en_o = 1, id_rs2_idx_o = 3
id_rd_en_o  = 1, id_rd_idx_o  = 1
id_csr_en_o = 0, id_csr_idx_o = 3
id_imm_o    = 0

INFO:
instr type: ALU_W
alu info:   ADD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------3-----------------------------
instr: sub x3, x4, x5
fun7    rs2   rs1   fun3 rd    opcode
0100000 00101 00100 000  00011 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 4
id_rs2_en_o = 1, id_rs2_idx_o = 5
id_rd_en_o  = 1, id_rd_idx_o  = 3
id_csr_en_o = 0, id_csr_idx_o = 1029
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SUB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	1	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------4-----------------------------
instr: sll x5, x6, x7
fun7    rs2   rs1   fun3 rd    opcode
0000000 00111 00110 001  00101 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 6
id_rs2_en_o = 1, id_rs2_idx_o = 7
id_rd_en_o  = 1, id_rd_idx_o  = 5
id_csr_en_o = 0, id_csr_idx_o = 7
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SLL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------5-----------------------------
instr: slt x7, x8, x9
fun7    rs2   rs1   fun3 rd    opcode
0000000 01001 01000 010  00111 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 8
id_rs2_en_o = 1, id_rs2_idx_o = 9
id_rd_en_o  = 1, id_rd_idx_o  = 7
id_csr_en_o = 0, id_csr_idx_o = 9
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SLT
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------6-----------------------------
instr: sltu x10, x11, x12
fun7    rs2   rs1   fun3 rd    opcode
0000000 01100 01011 011  01010 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 11
id_rs2_en_o = 1, id_rs2_idx_o = 12
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 12
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SLTU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------7-----------------------------
instr: xor x13, x14, x15
fun7    rs2   rs1   fun3 rd    opcode
0000000 01111 01110 100  01101 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 14
id_rs2_en_o = 1, id_rs2_idx_o = 15
id_rd_en_o  = 1, id_rd_idx_o  = 13
id_csr_en_o = 0, id_csr_idx_o = 15
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   XOR
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------8-----------------------------
instr: srl x16, x17, x18
fun7    rs2   rs1   fun3 rd    opcode
0000000 10010 10001 101  10000 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 17
id_rs2_en_o = 1, id_rs2_idx_o = 18
id_rd_en_o  = 1, id_rd_idx_o  = 16
id_csr_en_o = 0, id_csr_idx_o = 18
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SRL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	1	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------9-----------------------------
instr: sra x19, x20, x21
fun7    rs2   rs1   fun3 rd    opcode
0100000 10101 10100 101  10011 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 20
id_rs2_en_o = 1, id_rs2_idx_o = 21
id_rd_en_o  = 1, id_rd_idx_o  = 19
id_csr_en_o = 0, id_csr_idx_o = 1045
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   SRA
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------10-----------------------------
instr: or  x22, x23, x24
fun7    rs2   rs1   fun3 rd    opcode
0000000 11000 10111 110  10110 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 23
id_rs2_en_o = 1, id_rs2_idx_o = 24
id_rd_en_o  = 1, id_rd_idx_o  = 22
id_csr_en_o = 0, id_csr_idx_o = 24
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   OR
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------11-----------------------------
instr: and x25, x26, x27
fun7    rs2   rs1   fun3 rd    opcode
0000000 11011 11010 111  11001 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 26
id_rs2_en_o = 1, id_rs2_idx_o = 27
id_rd_en_o  = 1, id_rd_idx_o  = 25
id_csr_en_o = 0, id_csr_idx_o = 27
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   AND
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------12-----------------------------
instr: addi x31, x30,  996
fun7    rs2   rs1   fun3 rd    opcode
0011111 00100 11110 000  11111 0010011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 30
id_rs2_en_o = 0, id_rs2_idx_o = 4
id_rd_en_o  = 1, id_rd_idx_o  = 31
id_csr_en_o = 0, id_csr_idx_o = 996
id_imm_o    = 996

INFO:
instr type: ALU_IMM
alu info:   ADD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------13-----------------------------
instr: lb x10, -80(x9)
fun7    rs2   rs1   fun3 rd    opcode
1111101 10000 01001 000  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 9
id_rs2_en_o = 0, id_rs2_idx_o = 16
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 4016
id_imm_o    = -80

INFO:
instr type: LOAD
ld_st info:   LB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------14-----------------------------
instr: lh x10, -800(x10)
fun7    rs2   rs1   fun3 rd    opcode
1100111 00000 01010 001  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 10
id_rs2_en_o = 0, id_rs2_idx_o = 0
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 3296
id_imm_o    = -800

INFO:
instr type: LOAD
ld_st info:   LH
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------15-----------------------------
instr: lw x10, -888(x11)
fun7    rs2   rs1   fun3 rd    opcode
1100100 01000 01011 010  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 11
id_rs2_en_o = 0, id_rs2_idx_o = 8
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 3208
id_imm_o    = -888

INFO:
instr type: LOAD
ld_st info:   LW
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------16-----------------------------
instr: ld x10, -99(x12)
fun7    rs2   rs1   fun3 rd    opcode
1111100 11101 01100 011  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 12
id_rs2_en_o = 0, id_rs2_idx_o = 29
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 3997
id_imm_o    = -99

INFO:
instr type: LOAD
ld_st info:   LD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------17-----------------------------
instr: lbu x10, -79(x13)
fun7    rs2   rs1   fun3 rd    opcode
1111101 10001 01101 100  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 13
id_rs2_en_o = 0, id_rs2_idx_o = 17
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 4017
id_imm_o    = -79

INFO:
instr type: LOAD
ld_st info:   LBU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------18-----------------------------
instr: lhu x10, -66(x14)
fun7    rs2   rs1   fun3 rd    opcode
1111101 11110 01110 101  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 14
id_rs2_en_o = 0, id_rs2_idx_o = 30
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 4030
id_imm_o    = -66

INFO:
instr type: LOAD
ld_st info:   LHU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------19-----------------------------
instr: lwu x10, 1000(x15)
fun7    rs2   rs1   fun3 rd    opcode
0011111 01000 01111 110  01010 0000011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 15
id_rs2_en_o = 0, id_rs2_idx_o = 8
id_rd_en_o  = 1, id_rd_idx_o  = 10
id_csr_en_o = 0, id_csr_idx_o = 1000
id_imm_o    = 1000

INFO:
instr type: LOAD
ld_st info:   LWU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	1	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------20-----------------------------
instr: sb x8, 8(x11)
fun7    rs2   rs1   fun3 rd    opcode
0000000 01000 01011 000  01000 0100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 11
id_rs2_en_o = 1, id_rs2_idx_o = 8
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 8
id_imm_o    = 8

INFO:
instr type: STORE
ld_st info:   SB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------21-----------------------------
instr: sh x9, -8(x11)
fun7    rs2   rs1   fun3 rd    opcode
1111111 01001 01011 001  11000 0100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 11
id_rs2_en_o = 1, id_rs2_idx_o = 9
id_rd_en_o  = 0, id_rd_idx_o  = 24
id_csr_en_o = 0, id_csr_idx_o = 4073
id_imm_o    = -8

INFO:
instr type: STORE
ld_st info:   SH
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------22-----------------------------
instr: sw x10, 888(x11)
fun7    rs2   rs1   fun3 rd    opcode
0011011 01010 01011 010  11000 0100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 11
id_rs2_en_o = 1, id_rs2_idx_o = 10
id_rd_en_o  = 0, id_rd_idx_o  = 24
id_csr_en_o = 0, id_csr_idx_o = 874
id_imm_o    = 888

INFO:
instr type: STORE
ld_st info:   SW
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	1	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------23-----------------------------
instr: sd x11, 999(x10)
fun7    rs2   rs1   fun3 rd    opcode
0011111 01011 01010 011  00111 0100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 10
id_rs2_en_o = 1, id_rs2_idx_o = 11
id_rd_en_o  = 0, id_rd_idx_o  = 7
id_csr_en_o = 0, id_csr_idx_o = 1003
id_imm_o    = 999

INFO:
instr type: STORE
ld_st info:   SD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------24-----------------------------
instr: ecall
fun7    rs2   rs1   fun3 rd    opcode
0000000 00000 00000 000  00000 1110011

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 0
id_rs2_en_o = 0, id_rs2_idx_o = 0
id_rd_en_o  = 0, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 0
id_imm_o    = 0

INFO:
instr type: SYSTEM
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 1 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

----------------------------25-----------------------------
instr: mret
fun7    rs2   rs1   fun3 rd    opcode
0011000 00010 00000 000  00000 1110011

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 0
id_rs2_en_o = 0, id_rs2_idx_o = 2
id_rd_en_o  = 0, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 770
id_imm_o    = 0

INFO:
instr type: SYSTEM
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 1

---------------------------end------------------------------

----------------------------26-----------------------------
instr: add x1, x10, x11
fun7    rs2   rs1   fun3 rd    opcode
0000000 01011 01010 000  00001 0110011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 10
id_rs2_en_o = 1, id_rs2_idx_o = 11
id_rd_en_o  = 1, id_rd_idx_o  = 1
id_csr_en_o = 0, id_csr_idx_o = 11
id_imm_o    = 0

INFO:
instr type: ALU
alu info:   ADD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

