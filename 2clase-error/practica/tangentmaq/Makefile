OBJ= tanpol.o tanu.o

all: $(OBJ) maintan.x datos.txt plot.pdf

%.o: %.cpp
	g++ -c $< -o $@

%.x: %.cpp $(OBJ)
	g++ $^ -o $@

datos.txt: maintan.x
	./$< > $@

plot.pdf: plot.gp datos.txt
	gnuplot $^

.PHONY: clean
clean:
	rm -f *.o
