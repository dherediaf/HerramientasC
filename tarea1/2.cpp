#include <cstdio>
#include <fstream>

double harmonic(int &N);

int main(void)
{
  std::ofstream fout("armonica.txt");
  for(int N=1; N<=1000; N++)
    {
      fout << N << "\t" << harmonic(N) << "\n";
    }
  fout.close();
  return 0;
}

double harmonic(int &N)
{
  double res=0;
  for(int i=1; i<=N; i++)
    {
      res += 1.0/i;
    }
  return res;
}
