all: sumas.x datos.txt fig.pdf #verifica que existan los archivos, y si no, los genera

sumas.x : sumaerr.cpp
	g++ $^ -o $@  #banderas para omitir nombres y evitar errores

datos.txt : sumas.x
	./sumas.x > datos.txt #estructura basica

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY: clean
clean:
	rm -f sumas.x datos.txt fig.pdf
