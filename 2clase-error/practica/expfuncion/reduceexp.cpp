#include <cstdio>
#include <vector>
#include <cmath>
#include "expfrac.h"
//#include "exph.h"
//#include "expserie.h"


int main(void)
{
  std::vector<double> xs{0.0,1.0,-1.05,-0.123,-25.5,-1776,3.14159};

  for(int i=0; i<xs.size(); i++)
    {
      double z=xs[i]/std::log(2.0);
      int m=0;
      if(xs[i]<0)
	{
	  m=int(z-0.5);
	}
      else
	{
	  m=int(z+0.5);
	}
      double w=z-m;
      double u=w*std::log(2.0);
      double res=std::pow(2.0,m)*expfrac(u);
      double real=std::exp(xs[i]);
      
      std::printf("%5.5e   %10.10e  %10.10e  %5.5e\n", xs[i], res, real, std::fabs(res-real));
    }
  
  return 0;
}
