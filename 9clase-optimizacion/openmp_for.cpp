#include <omp.h>
#include <stdio.h>
#include <cmath>
#include <ctime>
#include <omp.h>

int main(int argc, char *argv[]) {
  const int N = 30000000;
  int i, nthreads, *a;
  a = new int [N];


  clock_t begin = clock();
  
#pragma omp parallel for
    for(i = 0; i < N; i++){
      a[i] = 2*std::sin(i)*std::cos(i)/3.98; //trunca a un entero
    }

#pragma omp parallel
    if(omp_get_thread_num()==0){
      nthreads = omp_get_num_threads();
    }
    
  clock_t end = clock();
  double elapsed_secs = double(end - begin) / (nthreads*CLOCKS_PER_SEC);
  printf("%d\t %f\n", nthreads, elapsed_secs);
  
  return 0;
}


