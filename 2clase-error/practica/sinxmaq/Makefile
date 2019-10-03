OBJ= sinpol.o sinu.o

all: $(OBJ) mainsin.x

%.o: %.cpp
	g++ -c $< -o $@

%.x: %.cpp $(OBJ)
	g++ $^ -o $@


.PHONY: clean
clean:
	rm -f *.o
