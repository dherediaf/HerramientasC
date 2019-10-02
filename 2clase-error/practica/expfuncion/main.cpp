#include <cstdio>
#include <vector>
#include <cmath>
#include "exph.h"
//#include "expserie.h"


int main(void)
{
  std::vector<double> xs{0.0, 1.0, -1.0, 0.5, -0.123, -25.5, -1776, 3.14159};
  for(int i=0; i<xs.size(); i++)
    {
      double real=std::exp(xs[i]);
      double relative=std::fabs(exph(xs[i])-real);
      std::printf("%10.10e\t %10.10e\n", relative, relative/std::fabs(real));
    }
  return 0;
}
