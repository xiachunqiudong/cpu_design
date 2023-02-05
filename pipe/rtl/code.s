.text
.global _start
_start:
addi x10, x0, 10       # 0
addi x10, x0, 100      # 4
addi x11, x0, -1       # 8
add  x12, x10, x11     # 12
bne x10, x11, foo      # 16
addi x0, x0, 0         # 20
addi x0, x0, 0         # 24
addi x0, x0, 0         # 28
addi x0, x0, 0         # 32
foo:
sd x10, 16(x0)         # 36
ld x20, 16(x0)         # 40
addi x20, x20, 19      # 44
addi x21, x0, 64       # 48 
csrrw x0, mtvec, x21   # 52
ecall                  # 56
jal _start             # 60
excp_handle:            
csrrw x30, mepc, x0    # 64
addi x30, x30, 4       # 68
csrrw x0, mepc, x30    # 72
mret                   # 76
