#include "sinpol.h"

double sinpol(double u)
{
  double n2n=(29593.0/207636.0);
  double n4n=(34911.0/7613320.0);
  double n6n=(479249.0/11511339840.0);

  double d2d=(1671.0/69212.0);
  double d4d=(97.0/351384.0);
  double d6d=(2623.0/1644477120.0);
  
  double numerador=1.0 - u*u*n2n + u*u*u*u*n4n - u*u*u*u*u*u*n6n;
  double denominador=1.0 + u*u*d2d + u*u*u*u*d4d + u*u*u*u*u*u*d6d;

  return u*numerador/denominador;

  
}
