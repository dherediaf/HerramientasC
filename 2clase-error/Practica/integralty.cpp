#include <cstdio>
#include <cmath>

double integral(double x1, double x2, double y, int n);

int main(void)
{
  double x1=1.0;
  double x2=2.0;
  double y=-1.0;
  int n=4000000;
  //double res=(std::pow(x2,y+1.0)-std::pow(x1,y+1.0))/(y+1.0);
  double res=std::log(x2/x1);
  std::printf("%10.10f\t %10.10f\n", integral(x1,x2,y,n), res);
  return 0;
}

double integral(double x1, double x2, double y, int n)
{
  double dx=(x2-x1)/n;
  double res=0.0;
  for(int i=0; i<=n; i++)
    {
      res+=dx*std::pow(x1+i*dx,y);
    }

  return res;
}
