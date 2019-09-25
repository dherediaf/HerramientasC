#include <cmath>
#include <fstream>
#include <cstdio>

#include "S1.h"
#include "S2.h"
#include "S3.h"

typedef float REAl;

int main(void)
{

  for(int n=1; n<=1000; n++)
    {
      float s1=S1(n);
      float s2=S2(n);
      float s3=S3(n);
      float delta1=std::fabs((S1(n)-s3)/s3);
      float delta2=std::fabs((S2(n)-s3)/s3);
      std::printf("%3d %10.6e %10.6e %10.6e %10.6e %10.6e\n", n, delta1, delta2, s1, s2, s3);
    }
  return 0;
}
