#include <cmath>
#include <cstdio>

int main(void){

  const double nu=1.0;
  const double xmin=0.0;
  const double xmax=20.0;
  const double dx=0.1;
  const int NSTEPS=(xmax-xmin)/dx;

  for(int ii=0; ii<=NSTEPS; ++ii) //hacer loops sobre enteros es mejor que con flotantes
    {
      double x= xmin + ii*dx;
      std::printf("%25.16e\t %25.16e\n", x, std::cyl_bessel_i(nu,x));
    }
  
  return 0;
}
