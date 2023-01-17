.text
.global _start
_start:
addi x5, x0, 4
addi x6, x0, -4
add  x7, x5, x6 
sub  x8, x6, x5
slli x9, x5, 2
srli x9, x6, 3
srai x9, x6, 2
bge  x5, x6, _start
