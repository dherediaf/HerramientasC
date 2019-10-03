#include <cmath>
#include <cstdio>

double rho(double n);

int main(void)
{

  for(int n=1; n<=100; n++)
    {
      double ro=rho(n);
      double des=4.0*std::log(2.0*n+1.0)/(M_PI*M_PI)+1.0-ro;
      std::printf("%3d  %10.8f  %10.8f\n", n, ro, des);
    }
  
  return 0;
}

double rho(double n)
{
  double sum=0.0;
  for(int k=1; k<=n; k++)
    {
      sum+= std::tan(M_PI*k/(2.0*n+1.0))/k;
    }

  return (1.0/(2.0*n+1.0)) + 2*sum/M_PI;
}
