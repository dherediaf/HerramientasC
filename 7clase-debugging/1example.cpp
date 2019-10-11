#include <iostream>
#include <cstdlib> 

int main(int argc, char **argv) // ./a.out 5 6 3.5 ; ["./a.out","5","6","3.5"]
{
  // declare variables
  const int N = 10;
  double * array;
  //reserve memory
  array = new double [N];
  // initialise array
  for (int ii = 0; ii < N; ++ii) {
    array[ii] = 2*(++ii); // != 2*(ii++) ? ; mal definido, se modifica ii
  }
  // print some values 
  int idx = 2;
  std::cout << array[idx] << std::endl;
  idx = 10;
  std::cout << array[idx] << std::endl; // compiles, but ... 

  // free memory
  delete [] array;

  return EXIT_SUCCESS;
}
