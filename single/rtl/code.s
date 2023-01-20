.text
.global _start
_start:
addi x2, x0, 80
jal x1, main
sb x10, 0(x2)

main:
addi x5,  x0, 5
addi x6,  x0, 6
add  x10, x5, x6
ret