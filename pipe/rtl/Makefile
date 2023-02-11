include ./common.mk

obj = top_sim

all: code
	@verilator ${VFLAGS} ${obj}.cpp ${obj}.v
	@./obj_dir/V${obj} > log.txt

my.o: my.c
	$(CC) $(CFLAGS) -c my.c -o my.o

start.o: start.s
	$(CC) $(CFLAGS) -c start.s -o start.o
	
prog: my.o start.o
	@$(CC) $(CFLAGS) start.o my.o -T my.ld -o my.elf

code: prog
	@${OBJCOPY} -O binary my.elf my.bin
	@hexdump -v -e '1/1 "%02x\n"'  my.bin > code.txt

dump: prog
	@${OBJDUMP} -D my.elf > dump.log

show:
	@gtkwave wave.vcd

git:
	git add .
	git commit -m "测试冒泡排序"
	git push

clean:
	rm -f *.o *.bin *.elf 

.PHONY: git show code