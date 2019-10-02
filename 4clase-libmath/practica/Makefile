all: cubic.x datos.txt fig.pdf 

cubic.x: cubic-distri.cpp
	g++ -std=c++11 $< -o $@

datos.txt: cubic.x
	./$< > $@

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY: clean
clean:
	rm -f cubic.x datos.txt

