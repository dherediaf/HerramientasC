#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocate(int n, float ***a){
  
  b = malloc(n*sizeof(float **));
  for (int i=0; i<n; i++){
    b[i] = malloc(n*sizeof(float*));
    for (int j=0; j<n; j++)
      b[i][j] = malloc(n*sizeof(float));
  }
}

void kji(clock_t cputime1, clock_t cputime2, int n, float ***a){
  
  cputime1 = clock(); //cambia indices k j i
  for (int k=0; k<n; ++k)
    for (int j=0; j<n; ++j)
      for (int i=0; i<n; ++i)
        a[i][j][k] = 1.0;
  cputime2=clock() - cputime1;
  printf("Time with fast index inside: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);

}

void ijk(clock_t cputime1, clock_t cputime2, int n, float ***a){

  cputime1 = clock(); //cambia indices i j k
  for(int i=0; i<n; ++i)
    for (int j=0; j<n; ++j)
      for (int k=0; k<n; ++k)
        a[i][j][k] = 2.3;
  cputime2=clock() - cputime1;
  printf("Time with fast index outside: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);
}

void ijkrev(clock_t cputime1, clock_t cputime2, int n, float ***a){

    cputime1 = clock(); //cambia indices i j k, de n-1 hasta 0
    for(int i=n-1; i>=0; --i)
      for (int j=n-1; j>=0; --j)
	for (int k=n-1; k>=0; --k)
	  a[i][j][k] = 2.3;
    cputime2=clock() - cputime1;
    printf("Time with fast index outside substracting: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);
  }

void clean(int n, float ***a){
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++)
      free(a[i][j]);
    free(a[i]);
  }
  free(a);
}

int main(){
  const int n = 256; //Potencias de 2
  clock_t cputime1, cputime2;
  float ***a;

  
  allocate(n,a);// Allocating memory for array/matrix

  a=b;

  kji(cputime1,cputime2,n,a);

  ijk(cputime1,cputime2,n,a);

  ijkrev(cputime1,cputime2,n,a);

  clean(n,a); // Clearing memory

  return 0;
}


