VFLAGS = --trace --cc --exe --build

all:
	verilator ${VFLAGS} ${obj}_main.cpp ${obj}.v
	./obj_dir/V${obj}

.PHONY: show
show: all
	gtkwave wave.vcd

.PHONY : clean
clean:
	rm -rf ./obj_dir *.vcd