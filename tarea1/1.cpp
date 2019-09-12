#include <cstdio>

int prime(int n);

int main(void)
{
  int count=0;
  int sum=0;
  int aux=0;
  for(int i=500; i<=12400; i++)
    {
      aux=prime(i);
      count+=aux;
      if(aux==1)
	{
	  sum+=i;
	}
    }
  printf("#primos=%d\t sumaprimos=%d\n", count, sum);

  return 0;
}

int prime(int n)
{
  int a=2;
  while(n % a != 0)
    {
      ++a;
    }
  if(a==n)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}
