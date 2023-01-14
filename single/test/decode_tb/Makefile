include ../common.mk

OBJ = id
SRC = decode.s
EXEC = prog

all: 
	${CC} ${CFLAGS} ${SRC} -o ${EXEC}
	${OBJCOPY} -O binary ${EXEC} ${EXEC}.bin
	

.PHONY: decode
decode: 
	${CC} ${CFLAGS} decode.s -o decode.elf
	${OBJCOPY} -O binary decode.elf decode.bin
	hexdump -e '1/4 "%08x\n"'  decode.bin > decode.hex
	verilator ${VFLAGS} ${OBJ}_main.cpp util.cpp ${OBJ}.v
	./obj_dir/V${OBJ} > decode_test_res.x


.PHONY: show
show: decode
	gtkwave wave.vcd

clean:
	rm -f *.elf *.bin *.hex *.res decode_test_prog *.x

