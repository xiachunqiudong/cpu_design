.text
.global _start
_start:
alu:
add x1, x2, x3
addw x1, x2, x3
sub x3, x4, x5
subw x3, x4, x5
sll x5, x6, x7
sllw x5, x6, x7
slt x7, x8, x9
sltu x10, x11, x12
xor x13, x14, x15
srl x16, x17, x18
srlw x16, x17, x18
sra x19, x20, x21
sraw x19, x20, x21
or  x22, x23, x24
and x25, x26, x27
alu_imm:
addi x1, x1, 996
slli x2, x1, 63
slliw x2, x1, 31
ld_st:
lb x10, -80(x9)
lh x10, -800(x10)
lw x10, -888(x11)
ld x10, -99(x12)
lbu x10, -79(x13)
lhu x10, -66(x14)
lwu x10, 1000(x15)
sb x8, 8(x11)
sh x9, -8(x11)
sw x10, 888(x11)
sd x11, 999(x10)
system:
ecall
mret
jal x1, 16
jalr x1, x2, 100
lui x2, 2
auipc x3, 1
add x1, x10, x11
branch:
beq x1, x2, 8
bne x2, x3, 8
blt x3, x4, 8
bge x5, x6, 8
bltu x7, x8,8
bgeu x9, x10,8
