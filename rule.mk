.PHONY: show
show: all
	gtkwave wave.vcd

all:
	verilator ${VFLAGS} ${OBJ}_main.cpp ${OBJ}.v

.PHONY : clean
clean:
	rm -rf ./obj_dir *.vcd