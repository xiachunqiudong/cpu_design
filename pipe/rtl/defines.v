
`define REG_INIT


`define INSTR_WIDTH 32
`define PC_WIDTH 64
`define XLEN 64

// OPCODE INFO
`define OP_INFO_WIDTH 12

`define OP_ALU_IMM    11
`define OP_ALU_IMM_W  10
`define OP_ALU        9
`define OP_ALU_W      8
`define OP_BRANCH     7
`define OP_JAL        6
`define OP_JALR       5
`define OP_LOAD       4
`define OP_STORE      3
`define OP_LUI        2
`define OP_AUIPC      1
`define OP_SYSTEM     0

// ALU INFO
`define ALU_INFO_WIDTH 10

`define ALU_ADD   9
`define ALU_SUB   8
`define ALU_SLL   7
`define ALU_SLT   6
`define ALU_SLTU  5
`define ALU_XOR   4
`define ALU_SRL   3
`define ALU_SRA   2
`define ALU_OR    1
`define ALU_AND   0

// BRANCH INFO
`define BRANCH_INFO_WIDTH 6

`define BRANCH_BEQ  5
`define BRANCH_BNE  4
`define BRANCH_BLT  3
`define BRANCH_BGE  2
`define BRANCH_BLTU 1
`define BRANCH_BGEU 0

// LOAD STORE INFO
`define LD_ST_INFO_WIDTH 11

`define LD_LB  10
`define LD_LH  9
`define LD_LW  8
`define LD_LD  7
`define LD_LBU 6
`define LD_LHU 5
`define LD_LWU 4
`define ST_SB  3
`define ST_SH  2
`define ST_SW  1
`define ST_SD  0

// SYSTEM INFO
`define CSR_INFO_WIDTH 6

`define CSR_CSRRW  5
`define CSR_CSRRS  4
`define CSR_CSRRC  3
`define CSR_CSRRWI 2
`define CSR_CSRRSI 1
`define CSR_CSRRCI 0

// REGFILE
`define REG_X0 0
`define REG_X1 1
