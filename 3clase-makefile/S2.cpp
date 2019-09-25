#include "S2.h"

float S2(int n)
{
  float s1=0;
  float s2=0;
  for(int i=1; i<=n; i++)
    {
      s1+=(2.0*i-1.0)/(2*i);
      s2+=(2.0*i)/(2.0*i+1.0);
    }
  return s2-s1;
}
