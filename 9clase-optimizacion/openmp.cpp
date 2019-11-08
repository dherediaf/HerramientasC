#include <cstdio>
#include <omp.h>

int main(void)
{
  //todo lo que esta fuera del pragma esta compartido con los threads
  int a=9.0; //no cambia la direccion de memoria para cada thread

  //todo lo que esta dentro del pragma es privado para cada thread
#pragma omp parallel // private (a) //si se agrega 'private (a) se crea una copia en cada thread de la variable a'
  {
    double x=0.0; //cambia la direccion de memoria para cada thread
    std::printf("Hola mundo\n");
    a += 3; // al hacer esto dentro del pragma para la variable compartida 'a', se puede dar el caso que varios threads accedan a la memoria al mismo tiempo
    printf("%p\n", &x);
    printf("%p\n", &a);
    printf("%p\n", a);
  }

  printf("%p\n", a);
  
  return 0; 
}
