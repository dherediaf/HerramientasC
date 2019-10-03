#include "sinu.h"
#include <cmath>
#include "sinpol.h"

double sinu(double x)
{
  int stepy=int(x/M_PI);
  double y=0.0;
  if(stepy%2==0)
    {
      y=x-stepy*M_PI;
    }
  else
    {
      y=stepy*M_PI-x;
    }
  
  double u=y/3.0;
  
  if(std::fabs(y)<1.0e-8)
    {
      return y;
    }
  else if(std::fabs(y)>M_PI/6.0) //corregir
    {
      return (3.0-4.0*sinpol(u)*sinpol(u))*sinpol(u);
    }
  else
    {
      return sinpol(y);
    }
}
