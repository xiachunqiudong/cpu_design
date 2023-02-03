.text
.global _start
_start:
addi x10, x10, 10 # 0
ecall             # 4
lh   x20, 1(x0)   # 8
lwu  x20, 2(x0)   # 12
ld   x20, 4(x0)   # 16
sh   x20, 1(x0)   # 20
sw   x20, 2(x0)   # 24
sd   x20, 4(x0)   # 28
addi x7, x7, 7    # 32
ebreak            # 36
addi x6, x6, 6    # 40 excp handle
mret              # 44

