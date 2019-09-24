#include <cmath>
#include <fstream>

double sinested(double x, double a, int n, int N);
double sin(double x, int N);

int main(void)
{
  double x=1.0;
  int N=100;
  for(int i=1; i<=15; i++)
    {
      printf("%10.10f\t %10.10f\n", (x-sin(x,N))/(x*x*x), -1.0*sinested(x,1.0,1,N));
      x/=10.0;
    }
  return 0;
}

//factorizando desde el segundo termino de la serie de taylor x³ se obtiene que sin(x) es lo que se pone en el return de la funcion sin(x,N)

double sin(double x, int N)
{
  return x+x*x*x*sinested(x,1.0,1,N);
}

// a es el termino (n-1)-esimo que acompaña a la serie de taylor correspondiente y n es el indice de la suma

double sinested(double x, double a, int n, int N) 
{
  double b=(-1)*a/((2*n)*(2*n+1));
  if(n<N)
    {
      return b+x*x*(sinested(x,b,n+1,N));
    }
  else
    {
      return 0.0;
    }
}
