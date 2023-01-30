-----------------------------1------------------------------
instr: beq x1, x2, test
fun7    rs2   rs1   fun3 rd    opcode
0000000 00010 00001 000  01000 1100011

REG CSR IMM:
id_rs1_idx_o = 1
id_rs2_idx_o = 2
id_rd_wen_o  = 0, id_rd_idx_o  = 8
id_csr_wen_o = 0, id_csr_idx_o = 2
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

-----------------------------2------------------------------
instr: add x1, x2, x1
fun7    rs2   rs1   fun3 rd    opcode
0000000 00001 00010 000  00001 0110011

REG CSR IMM:
id_rs1_idx_o = 2
id_rs2_idx_o = 1
id_rd_wen_o  = 1, id_rd_idx_o  = 1
id_csr_wen_o = 0, id_csr_idx_o = 1
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
