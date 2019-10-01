#include <random>
#include <iostream>
#include <vector>
#include <cmath>


int histocubic(const double xmin,const double xmax, const double dx, const int samples, const int seed);

int main()
{
  const int seed=1;
  const double xmin=1.0;
  const double xmax=3.0;
  const double dx=0.01;
  const int samples=100000;

  histocubic(xmin,xmax,dx,samples,seed);
  return 0;
}

int histocubic(const double xmin, const double xmax, const double dx, const int samples, const int seed)
{
  const double ymin=std::log(xmin);
  const double ymax=std::log(xmax);
  std::mt19937 gen(seed); //mersen twister
  std::uniform_real_distribution<> dis(ymin, ymax);
  
  const int nbins=(xmax-xmin)/dx;
  std::vector<double> histograma(nbins);
  
  for(int n=0; n<samples; n++)
    {
      double r=std::exp(dis(gen));
      int idx=int((r-xmin)/dx); //no esta desde 0,0
      if(0<=idx and idx<nbins)
       	{
       	  histograma[idx]+=1;
       	}
    }

  for(int i=0; i<nbins; i++)
    {
      std::cout << xmin + i*dx << "\t" << histograma[i]/(samples*dx) << "\n";
    }
  return 0;
}
