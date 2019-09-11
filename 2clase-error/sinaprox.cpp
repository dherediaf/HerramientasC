#include <cstdio>
#include <cmath>
#include <fstream>

double sen(const double &x, const int &lim);

int main(void)
{
  int N=5;
  double x=0.5;
  double se=0;
  double dsin=0;
  std::ofstream fout("datos.txt");
  for(int ii=1; ii<=N; ii++)
    {
      se=sen(x,ii);
      dsin = std::abs(se-std::sin(x));
      fout << ii << "  " << se << "  " << dsin << "\n";
    }
  fout.close();
  return 0;
}

double sen(const double &x, const int &lim)
{
  double term=x;
  double res=0;
  for(int i=2; i<=lim; i++)
    {
      term=term*(-1)*x*x/((2*i)*(2*i+1));
      res += term;
    }
  return res;
}


// double x=0.23;
// const int N=100;
// for(x=0.1; x<8.0; x+=0.1)
//   {
//     double sum=x;
//     double term=x;
//     for(int ii=2; ii<N; ++ii)
//       {
// 	term = term*(-1)*x*x/((2*ii)*(2*ii+1));
// 	sum += term;
//       }
//   }
