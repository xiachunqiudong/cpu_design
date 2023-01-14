RV = riscv64-unknown-linux-gnu-
CFLAGS = -nostdlib

CC = ${RV}gcc
OBJDUMP = ${RV}objdump
OBJCOPY = ${RV}objcopy


# verilator
VFLAGS = --trace --cc --exe --build

.PHONY: veri
veri:
	verilator ${VFLAGS} ${OBJ}_main.cpp ${OBJ}.v
	./obj_dir/V${OBJ}

