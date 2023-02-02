VFLAGS = --trace --cc --exe --build
OBJ = top


all:
	verilator ${VFLAGS} ${OBJ}_main.cpp ${OBJ}.v
	./obj_dir/Vtop
	
.PHONY: show
show:	
	gtkwave wave.vcd