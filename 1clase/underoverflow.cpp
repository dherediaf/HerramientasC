#include <iostream>
#include <cstdio>

int unint(void);
int unovoble(void);
int unovat(void);

int main(void){

  unint();
  unovoble();
  unovat();
  return 0;
}

int unint(void){

   int a=1;
   int b=0;
   while(a>b){

     b = a;
     a = a+1;
   }

   std::printf("%10d\n", b);

   return 0;

}

int unovoble(void){

  double a=1.0;
  double b=0.0;

  while(a != a*2){
    b=a;
    a=a*2;
  }

  std::printf("%20.20e\t",b);
  
  a=1.0;
  
  while(a>0){
    b=a;
    a = a/2.0;
  }

  std::printf("%20.20e\n",b);
  
  return 0;

  
}

int unovat(void){

  float a=1.0;
  float b=0.0;

  while(a != a*2){
    b=a;
    a=a*2;
  }

  std::printf("%20.16e\t",b);
  
  a=1.0;
  
  while(a>0){
    b=a;
    a = a/2.0;
  }

  std::printf("%20.20e\n",b);
  
  return 0;
}


// while(isif(a)==false) sirve para double y float y long double
//   {
//     b=a;
//     a*=2.0;
//   }
