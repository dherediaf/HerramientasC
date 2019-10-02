#include <cmath>
#include <fstream>

double cosested(double x, double a, int n, int N);
double cos(double x, int N);

int main(void)
{
  double x=M_PI;
  int N=100;
  printf("\t%.16f\n", cos(x,N));
  return 0;
}

//factorizando desde el segundo termino de la serie de taylor x² se obtiene que cos(x) es lo que se pone en el return de la funcion cos(x,N)

double cos(double x, int N)
{
  return 1+x*x*cosested(x,1.0,1,N);
}

// a es el termino (n-1)-esimo que acompaña a la serie de taylor correspondiente y n es el indice de la suma

double cosested(double x, double a, int n, int N) 
{
  double b=(-1)*a/((2*n)*(2*n-1));
  if(n<N)
    {
      return b+x*x*(cosested(x,b,n+1,N));
    }
  else
    {
      return 0.0;
    }
}
