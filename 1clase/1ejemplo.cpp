#include <iostream>
 
void f(int  b);
 
int main(void)
{
  int a = 9;
  std::cout << "&a inside main = " << &a << std::endl;
  
  std::cout << "a before f(a)  = " <<  a << std::endl;
  f(a);
  std::cout << "a after f(a)   = " <<  a << std::endl;
       
  return 0;
}
 
void f(int & b) // & asigna el mismo lugar en la memoria de la constante en la funcion main que en esta funcion
{
  std::cout << "b  inside f = " <<  b << std::endl;
  std::cout << "&b inside f = " << &b << std::endl;
  b = -9;
}
