all: cubic.x datos.txt #plot

cubic.x: cubic-distri.cpp
	g++ -std=c++11 $< -o $@

datos.txt: cubic.x
	./$< > $@

#plot: datos.txt
#	gnuplot plot.gp datos.txt

.PHONY: clean
clean:
	rm -f sumas.x datos.txt fig.pdf

