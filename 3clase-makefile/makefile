OBJ= S1.o S2.o S3.o

all: $(OBJ) main-sumas.x

%.o : %.cpp
	g++ -c $< -o $@

%.x: %.cpp
	g++ $^ -o $@

main-sumas.x: sumaerr.cpp $(OBJ)

.PHONY: clean
clean: 
	rm -f *.o
