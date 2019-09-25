#include "S3.h"

float S3(int n)
{
  float res=0;
  for(int i=1; i<=n; i++)
    {
      res+=1.0/((2.0*i+1.0)*(2.0*i));
    }
  return res;
}
