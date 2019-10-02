OBJ= expfrac.o #expserie.o

all: $(OBJ) reduceexp.x

%.o: %.cpp
	g++ -c $< -o $@

%.x: %.cpp
	g++ $< $(OBJ) -o $@

#main-res.x: main.cpp $(OBJ)

.PHONY: clean
clean:
	rm -f *.o
