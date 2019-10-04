#include "tanpol.h"

double tanpol(double u)
{
  double n2n=17336.106;
  double n4n=379.23564;
  double n6n=1.0118625;

  double d2d=62381.106;
  double d4d=3154.9377;
  double d6d=28.17694;
  
  double numerador=135135.0 - u*u*n2n + u*u*u*u*n4n - u*u*u*u*u*u*n6n;
  double denominador=135135.0 - u*u*d2d + u*u*u*u*d4d + u*u*u*u*u*u*d6d;

  return u*numerador/denominador;

  
}
