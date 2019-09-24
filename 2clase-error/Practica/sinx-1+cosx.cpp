#include <cmath>
#include <fstream>

double sinested(double x, double a, int n, int N);
double sin(double x, int N);

int main(void)
{
  int N=50;
  for(double x=0.1; x<M_PI/4; x+=0.05)
    {
      double y=x*0.5;
      double res=std::sin(x)-2*std::sin(y)*std::sin(y);
      printf("%10.16f\t %10.16f\t %10.16f\n", x, sin(x,N)-2*sin(y,N)*sin(y,N), res);
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
