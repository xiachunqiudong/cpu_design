RV = riscv64-unknown-elf-
CFLAGS = -nostdlib -march=rv64i -mabi=lp64 -g -Wall
VFLAGS = --trace --cc --exe --build

CC = ${RV}gcc
AS = ${RV}as
OBJDUMP = ${RV}objdump
OBJCOPY = ${RV}objcopy


# verilator
VFLAGS = --trace --cc --exe --build