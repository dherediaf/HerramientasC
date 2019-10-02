#include <cmath>
#include <cstdio>

int main(void)
{

  double res=0.0;
  double res1=0.0;
  for(double x=0.0; x<=1.0; x+=0.001)
    {
      res=(-1.0)*x*x/(5+std::sqrt(25+x*x));
      res1=5.0-std::sqrt(25+x*x);
      printf("%10.10f\t %10.10f\t %10.10f\n", x, res, res1);
    }

  return 0;
}
