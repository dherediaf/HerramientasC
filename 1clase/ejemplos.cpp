#include <iostream>

void f(int a)
{
  std::cout <<  a << std::endl;
  std::cout << &a << std::endl;
  a = -9;
}

int main(void)
{
  int a = 9;
  std::cout << &a << std::endl;
 
  f(a);
 
  std::cout << a << std::endl;
      
  return 0;
}
