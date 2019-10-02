#include "exph.h"
#include "expserie.h"

double exph(double x)
{
  if(x<0)
    return 1.0/expserie(-1.0*x);
  else
    return expserie(x);
}
