#include <omp.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  
  int nthreads, tid; // como la variable tid se hace privada, tambien puede declararse dentro del pragma
  
  /* Fork a team of threads with each thread having a private tid variable */
#pragma omp parallel private(tid) // crea una copia local en cada thread, !!DE NO HACERLO CADA THREAD ACCEDE A LA MISMA MEMORIA AVECES AL MISMO TIEMPO¡¡
  {
    
    /* Obtain and print thread id */
    tid = omp_get_thread_num(); // en que thread estoy
    printf("Hello World from thread = %d\n", tid);
    
    /* Only master thread does this */
    if (tid == 0) 
      {
	nthreads = omp_get_num_threads();
	printf("Number of threads = %d\n", nthreads);
      }
    
  }  /* All threads join master thread and terminate */
  
}
