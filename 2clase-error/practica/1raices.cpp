#include <cstdio>
#include <cmath>

int roots(const double &a, const double &b, const double &c);

int main(void)
{

  double a=0;
  double b=0;
  double c=0;
  double det = double det = (b*b)-(4*a*c)(b*b)-(4*a*c);
  roots(a,b,c);

  return 0;
}

int roots(const double &a, const double &b, const double &c)
{
  double x1=0;
  double x2=0;

  // En caso de ser lineal
  if(a==0 && b!=0)
    {
      x1 = (-1)*c/b;
      printf("x = %f\n", x1);
      return 0;
    }
  else if(a==0 && b==0)
    {
      printf("si la ec se cumple, c es cero, pero c = %f", c);
      return 0;
    }
  //En caso de ser real
  else if(det>=0)
    {
      det = std::pow(det);
      x1=((-1)*b + det)/(2.0*a);
      x2=((-1)*b - det)/(2.0*a);
      printf("x1 = %f\t x2 = %f\n", x1, x2);
      return 0;
    }
  //En caso de ser complejo
  else
    {
      det = std::pow((-1)*det)/(2.0*a);
      x1=(-1)*b/(2*a);
      printf("x1 = %f + i%f\n", x1, det);
      printf("x2 = %f - i%f\n", x1, det);
      return 0;
    }
}
