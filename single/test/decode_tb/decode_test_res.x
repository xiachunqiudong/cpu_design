-----------------------------1------------------------------
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

-----------------------------2------------------------------
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

-----------------------------3------------------------------
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

-----------------------------4------------------------------
instr: subw x3, x4, x5
fun7    rs2   rs1   fun3 rd    opcode
0100000 00101 00100 000  00011 0111011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 4
id_rs2_en_o = 1, id_rs2_idx_o = 5
id_rd_en_o  = 1, id_rd_idx_o  = 3
id_csr_en_o = 0, id_csr_idx_o = 1029
id_imm_o    = 0

INFO:
instr type: ALU_W
alu info:   SUB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	1	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------5------------------------------
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

-----------------------------6------------------------------
instr: sllw x5, x6, x7
fun7    rs2   rs1   fun3 rd    opcode
0000000 00111 00110 001  00101 0111011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 6
id_rs2_en_o = 1, id_rs2_idx_o = 7
id_rd_en_o  = 1, id_rd_idx_o  = 5
id_csr_en_o = 0, id_csr_idx_o = 7
id_imm_o    = 0

INFO:
instr type: ALU_W
alu info:   SLL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------7------------------------------
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

-----------------------------8------------------------------
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

-----------------------------9------------------------------
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

-----------------------------10------------------------------
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

-----------------------------11------------------------------
instr: srlw x16, x17, x18
fun7    rs2   rs1   fun3 rd    opcode
0000000 10010 10001 101  10000 0111011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 17
id_rs2_en_o = 1, id_rs2_idx_o = 18
id_rd_en_o  = 1, id_rd_idx_o  = 16
id_csr_en_o = 0, id_csr_idx_o = 18
id_imm_o    = 0

INFO:
instr type: ALU_W
alu info:   SRL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	1	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------12------------------------------
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

-----------------------------13------------------------------
instr: sraw x19, x20, x21
fun7    rs2   rs1   fun3 rd    opcode
0100000 10101 10100 101  10011 0111011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 20
id_rs2_en_o = 1, id_rs2_idx_o = 21
id_rd_en_o  = 1, id_rd_idx_o  = 19
id_csr_en_o = 0, id_csr_idx_o = 1045
id_imm_o    = 0

INFO:
instr type: ALU_W
alu info:   SRA
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------14------------------------------
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

-----------------------------15------------------------------
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

-----------------------------16------------------------------
instr: addi x1, x1, 996
fun7    rs2   rs1   fun3 rd    opcode
0011111 00100 00001 000  00001 0010011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 1
id_rs2_en_o = 0, id_rs2_idx_o = 4
id_rd_en_o  = 1, id_rd_idx_o  = 1
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

-----------------------------17------------------------------
instr: slli x2, x1, 63
fun7    rs2   rs1   fun3 rd    opcode
0000001 11111 00001 001  00010 0010011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 1
id_rs2_en_o = 0, id_rs2_idx_o = 31
id_rd_en_o  = 1, id_rd_idx_o  = 2
id_csr_en_o = 0, id_csr_idx_o = 63
id_imm_o    = 63

INFO:
instr type: ALU_IMM
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------18------------------------------
instr: slliw x2, x1, 31
fun7    rs2   rs1   fun3 rd    opcode
0000000 11111 00001 001  00010 0011011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 1
id_rs2_en_o = 0, id_rs2_idx_o = 31
id_rd_en_o  = 1, id_rd_idx_o  = 2
id_csr_en_o = 0, id_csr_idx_o = 31
id_imm_o    = 31

INFO:
instr type: ALI_IMM_W
alu info:   SLL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	1	0	0	0	0	0	0	0	0	0	0	
id_alu_info_o:
9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------19------------------------------
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
ld_st info: LB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
1	0	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------20------------------------------
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
ld_st info: LH
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	1	0	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------21------------------------------
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
ld_st info: LW
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	1	0	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------22------------------------------
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
ld_st info: LD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	1	0	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------23------------------------------
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
ld_st info: LBU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------24------------------------------
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
ld_st info: LHU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------25------------------------------
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
ld_st info: LWU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	1	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------26------------------------------
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
ld_st info: SB
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	1	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------27------------------------------
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
ld_st info: SH
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------28------------------------------
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
ld_st info: SW
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	1	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------29------------------------------
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
ld_st info: SD
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	1	0	0	0	
id_ld_st_info_o:
10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------30------------------------------
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

-----------------------------31------------------------------
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

-----------------------------32------------------------------
instr: jal x1, 16
fun7    rs2   rs1   fun3 rd    opcode
1110111 00101 11101 111  00001 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 5
id_rd_en_o  = 1, id_rd_idx_o  = 1
id_csr_en_o = 0, id_csr_idx_o = 3813
id_imm_o    = -65820

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------33------------------------------
instr: jalr x1, x2, 100
fun7    rs2   rs1   fun3 rd    opcode
0000011 00100 00010 000  00001 1100111

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 2
id_rs2_en_o = 0, id_rs2_idx_o = 4
id_rd_en_o  = 1, id_rd_idx_o  = 1
id_csr_en_o = 0, id_csr_idx_o = 100
id_imm_o    = 100

INFO:
instr type: JALR
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	1	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------34------------------------------
instr: lui x2, 2
fun7    rs2   rs1   fun3 rd    opcode
0000000 00000 00000 010  00010 0110111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 0
id_rs2_en_o = 0, id_rs2_idx_o = 0
id_rd_en_o  = 1, id_rd_idx_o  = 2
id_csr_en_o = 0, id_csr_idx_o = 0
id_imm_o    = 8192

INFO:
instr type: LUI
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------35------------------------------
instr: auipc x3, 1
fun7    rs2   rs1   fun3 rd    opcode
0000000 00000 00000 001  00011 0010111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 0
id_rs2_en_o = 0, id_rs2_idx_o = 0
id_rd_en_o  = 1, id_rd_idx_o  = 3
id_csr_en_o = 0, id_csr_idx_o = 0
id_imm_o    = 4096

INFO:
instr type: AUIPC
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	0	0	0	0	0	1	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------36------------------------------
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

-----------------------------37------------------------------
instr: beq x1, x2, 8
fun7    rs2   rs1   fun3 rd    opcode
0000000 00010 00001 001  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 1
id_rs2_en_o = 1, id_rs2_idx_o = 2
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 2
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BNE
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
0	1	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------38------------------------------
instr: bne x2, x3, 8
fun7    rs2   rs1   fun3 rd    opcode
1110110 00101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 5
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3781
id_imm_o    = -65852

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------39------------------------------
instr: blt x3, x4, 8
fun7    rs2   rs1   fun3 rd    opcode
0000000 00011 00010 000  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 2
id_rs2_en_o = 1, id_rs2_idx_o = 3
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 3
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BEQ
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
1	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------40------------------------------
instr: bge x5, x6, 8
fun7    rs2   rs1   fun3 rd    opcode
1110101 11101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 29
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3773
id_imm_o    = -65860

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------41------------------------------
instr: bltu x7, x8,8
fun7    rs2   rs1   fun3 rd    opcode
0000000 00100 00011 101  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 3
id_rs2_en_o = 1, id_rs2_idx_o = 4
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 4
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BGE
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
0	0	0	1	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------42------------------------------
instr: bgeu x9, x10,8
fun7    rs2   rs1   fun3 rd    opcode
1110101 10101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 21
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3765
id_imm_o    = -65868

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------43------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
0000000 00110 00101 100  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 5
id_rs2_en_o = 1, id_rs2_idx_o = 6
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 6
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BLT
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
0	0	1	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------44------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
1110101 01101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 13
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3757
id_imm_o    = -65876

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------45------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
0000000 01000 00111 111  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 7
id_rs2_en_o = 1, id_rs2_idx_o = 8
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 8
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BGEU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
0	0	0	0	0	1	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------46------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
1110101 00101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 5
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3749
id_imm_o    = -65884

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------47------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
0000000 01010 01001 110  01000 1100011

REG CSR IMM:
id_rs1_en_o = 1, id_rs1_idx_o = 9
id_rs2_en_o = 1, id_rs2_idx_o = 10
id_rd_en_o  = 0, id_rd_idx_o  = 8
id_csr_en_o = 0, id_csr_idx_o = 10
id_imm_o    = 8

INFO:
instr type: BRANCH
branch info: BLTU
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	1	0	0	0	0	0	0	0	
id_branch_info_o:
5	4	3	2	1	0	
0	0	0	0	1	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

-----------------------------48------------------------------
instr: (null)
fun7    rs2   rs1   fun3 rd    opcode
1110100 11101 11101 111  00000 1101111

REG CSR IMM:
id_rs1_en_o = 0, id_rs1_idx_o = 29
id_rs2_en_o = 0, id_rs2_idx_o = 29
id_rd_en_o  = 1, id_rd_idx_o  = 0
id_csr_en_o = 0, id_csr_idx_o = 3741
id_imm_o    = -65892

INFO:
instr type: JAL
id_opcode_info_o:	
11	10	9	8	7	6	5	4	3	2	1	0	
0	0	0	0	0	1	0	0	0	0	0	0	

EXCP:
id_ilegl_instr_o = 0 | id_ecall_o = 0 | id_ebreak_o = 0 | id_mret_o = 0

---------------------------end------------------------------

