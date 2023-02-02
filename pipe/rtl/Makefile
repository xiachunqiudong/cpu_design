include ./common.mk

obj = top_sim

all: code
	@verilator ${VFLAGS} ${obj}.cpp ${obj}.v
	@./obj_dir/V${obj} > log.txt

.PHONY: code
code: 
	@${CC} ${CFLAGS}  code.s -o code.elf
	@${OBJCOPY} -O binary code.elf code.bin
	@hexdump -v -e '1/1 "%02x\n"'  code.bin > code.txt

.PHONY: show
show:
	@gtkwave wave.vcd


.PHONY: git
git:
	git add .
	git commit -m "支持 前递 load-use冒险处理 分支跳转指令"
	git push