#include <cstdio>

int main(void)
{
  float a=1.0;
  float b=1.0;
  int count=1;

  while(a+b != a)
    {
      b=b/2.0;
      printf("%3d   %10.16e   %10.16e\n", count, b, a+b);
      count+=1;
    }
  return 0;
}
