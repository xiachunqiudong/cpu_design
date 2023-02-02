.text
.global _start
_start:
addi x10, x10, 10 #0
addi x9, x9, 9    #4
bne x9, x10, foo  #8
add x11, x9, x10  #12
sltu x11, x9, x10 #16
foo:
addi x0, x0, 0    #20
