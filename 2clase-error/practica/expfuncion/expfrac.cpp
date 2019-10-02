#include "expfrac.h"

double expfrac(double u)
{
  double s=2+u*u*(2520+28*u*u)/(15120+420*u*u+u*u*u*u);
  return (s+u)/(s-u);
}
