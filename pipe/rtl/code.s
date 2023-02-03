.text
.global _start
_start:
addi x9, x9, 28     # 0
csrrw x0, mtvec, x9 # 4
ecall               # 8
lw   x20, 1(x0)     # 12
ld   x20, 4(x0)     # 16
sw   x20, 2(x0)     # 20
sd   x20, 4(x0)     # 24
csrrw x10, mepc, x0 # 28 excp handle
addi x10, x10, 4    # 32
csrrw x0, mepc, x10 # 36 
addi x6, x6, 6      # 40 
mret                # 44

