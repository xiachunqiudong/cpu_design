.text
.global _start
_start:
addi x10, x10, 80      # 0
csrrw x0, mtvec, x10   # 4
csrrw x0, mtvec, x0    # 8
csrrw x11, mtvec, x0   # 12
addi x12, x11, -1
