include ../test/common.mk

obj = top_sim

all: code
	verilator ${VFLAGS} ${obj}_main.cpp util.cpp ${obj}.v
	./obj_dir/V${obj} > log.txt

.PHONY: code
code: 
	${CC} ${CFLAGS}  code.s -o code.elf
	${OBJCOPY} -O binary code.elf code.bin
	hexdump -v -e '1/1 "%02x\n"'  code.bin > code.txt

.PHONY: show
show:
	gtkwave wave.vcd

.PHONY: git
git:
	git add .
	git commit -m "add something"
	git push