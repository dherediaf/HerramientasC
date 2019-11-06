#include <cstdio>

int main(void)
{
#pragma omp parallel
  {
    std::printf("Hola mundo\n");
  }
  return 0; 
}
