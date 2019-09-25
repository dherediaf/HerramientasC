#include "S1.h"

float S1(int n)
{
  float res=0;
  int sign=-1;
  for(int i=1; i<=2*n; i++)
    {
      res+=sign*i/(i+1.0);
      sign*=-1;
    }
  return res;
}
