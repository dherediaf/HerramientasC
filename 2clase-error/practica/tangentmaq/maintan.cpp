#include <cmath>
#include <cstdio>
#include "tanu.h"

int main(void)
{
  double x=-M_PI/2.3;
  double xf=M_PI/2.3;
  double dx=0.01;
  int n=(xf-x)/dx;
  for(int i=1; i<=n; i++)
    {
      std::printf("%10.16f  %10.16f   %10.16f\n", x, std::tan(x), tanu(x));
      x+=0.01;
    }
  
  return 0;
}
