#include <cstdio>
#include <cmath>
#include <fstream>

typedef double REAl;

int main(void)
{
  float a=1.0;
  float b=1.0;
  float c=1.0;
  float x1p=0.0;
  float x1m=0.0;
  float x2p=0.0;
  float x2m=0.0;

  for(int n=1; n<=18; n++)
    {
      c=std::pow(10.0,-n);
      float det=std::sqrt(b*b-4*a*c);
      x1p=(-b+det)/(2*a);
      x1m=(-b-det)/(2*a); //util pues va sin resta
      x2p=(-2*c)/(b+det); //util pues va sin resta
      x2m=(-2*c)/(b-det);
      std::printf("%10d %10.6f %10.6f %10.6f %10.6f\n", n, x1p, x1m, x2p, x2m);
    }


  return 0;
}
