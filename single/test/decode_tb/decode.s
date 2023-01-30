.text
.global _start
_start:
beq x1, x2, test
add x1, x2, x1
test:
add x1, x2, x1
blt x1, x2, 4
bne x1, x2, 4