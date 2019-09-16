#include <cmath>
#include <fstream>

double expested(double x, double a, int n, int N);
double exp(double x, int N);

int main(void)
{
  double x=2.0;
  int N=100;
  printf("\t%.16f\n", exp(x,N));
  return 0;
}

//factorizando desde el segundo termino de la serie de taylor x se obtiene que exp(x) es lo que se pone en el return de la funcion exp(x,N)

double exp(double x, int N)
{
  return 1+x*expested(x,1.0,1,N);
}

// a es el termino (n-1)-esimo que acompaña a la serie de taylor correspondiente y n es el indice de la suma

double expested(double x, double a, int n, int N) 
{
  double b=a/n;
  if(n<N)
    {
      return b+x*(expested(x,b,n+1,N));
    }
  else
    {
      return 0.0;
    }
}
