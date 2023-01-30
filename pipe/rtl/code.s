.text
.global _start
_start:
add x1, x2, x3
jal x1, foo
addi x1, x1, -1
foo:
bne x1, x2, _start
