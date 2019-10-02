OBJ= expserie.o exph.o

all: $(OBJ) main.x

%.o: %.cpp
	g++ -c $< -o $@

%.x: %.cpp
	g++ $< $(OBJ) -o $@

#main-res.x: main.cpp $(OBJ)

.PHONY: clean
clean:
	rm -f *.o
