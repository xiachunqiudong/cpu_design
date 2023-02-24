RV = riscv64-unknown-elf-
CFLAGS = -nostdlib -march=rv64i -mabi=lp64 -g -Wall
VFLAGS = --trace --cc --exe --build

CC = ${RV}gcc
AS = ${RV}as
OBJDUMP = ${RV}objdump
OBJCOPY = ${RV}objcopy

prog: my.o
	$(CC) $(CFLAGS) my.o -T my.ld -o my.elf
	

my.o: my.c
	$(CC) $(CFLAGS) -c my.c -o my.o

.PHONY: clean code dump

code: prog
	${OBJCOPY} -O binary my.elf my.bin
	hexdump -v -e '1/1 "%02x\n"'  my.bin > log

dump: prog
	${OBJDUMP} -D my.elf > dump.log
