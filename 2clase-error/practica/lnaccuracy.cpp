#include <cstdio>
#include <cmath>

int main(void)
{
  double x=640320.0;
  double res=std::log(x*x*x-744.0)/M_PI;
  double resop=3.0*std::log(x)/M_PI;
  std::printf("%4.16f   %4.16f\n", res*res, resop*resop);

  return 0;
}
