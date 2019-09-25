#include <cmath>
#include <fstream>
#include <cstdio>

typedef float REAl;

float S1(int n);
float S2(int n);
float S3(int n);

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


float S3(int n)
{
  float res=0;
  for(int i=1; i<=n; i++)
    {
      res+=1.0/((2.0*i+1.0)*(2.0*i));
    }
  return res;
}
