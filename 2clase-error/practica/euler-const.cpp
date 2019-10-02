#include <cstdio>
#include <cmath>

double harmonic(int n);

int main(void)
{
  double res=0.0;
  double res1=0.0;
  double gamma=0.5772156649;
  for(int i=1; i<=5000; i+=100)
    {
      res=harmonic(i)-std::log(1.0*i);
      res1=harmonic(i)-std::log(1.0*i+0.5);
	printf("%10d\t %10.10f\t %10.10f\t %10.10f\t %10.10f\n", i, res, res1, std::fabs((res-gamma)/gamma), std::fabs((res1-gamma)/gamma)); 
    }

  return 0;
}

double harmonic(int n)
{
  if(n==1)
    return 1.0;
  else
    return (1.0/n) + harmonic(n-1);
}
