#include "expserie.h"

double expserie(double x)
{
  double res=1.0;
  double abefore=1.0;
  double aafter=0.0;
  for(int i=1; i<=25; i++)
    {
      aafter=(abefore*x)/i;
      if(aafter>1.0e-6)
	{
	  res+=aafter;
	  abefore=aafter;
	}
      else
	{
	  return res;
	}
    }

  return res;
}
