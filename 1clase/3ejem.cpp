#include <iostream>

inline std::string concatenate (const std::string& a, const std::string& b)
{
  return a+b;
}

int main(void)
{
  std::string a = "cara";
  std::string b = "col";
  std::cout << concatenate(a,b) << "\n";
  return 0;
}
