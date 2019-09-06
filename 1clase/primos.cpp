#include <iostream>

int isprime(int a);
int sumprime(int min, int max);

int main(void){
  std::cout << sumprime(1,10) << std::endl;
  return 0;
}

int isprime(int a){

  if(a==1) return 0;
  for(int i=2; i<a; i++){
    if(a % i == 0){
      return 0;
    }
  }
  return a;
}

int sumprime(int min, int max){
  int sum=0;
  for(int i=min; i<=max; i++){
    sum = sum + isprime(i);
  }
  return sum;
}
