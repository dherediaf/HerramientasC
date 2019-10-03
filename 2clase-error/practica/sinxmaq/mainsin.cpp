#include <cmath>
#include <cstdio>
#include "sinu.h"

int main(void)
{

  double x=0.4;
  std::printf("%10.16f\t %10.16f\n", std::sin(x), sinu(x));
  return 0;
}
