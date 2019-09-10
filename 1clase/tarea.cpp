#include <iostream>

int unint(void);
int unovoble(void);
int unovat(void);

int main(void){

  printf("%10d\n", unint());
  unovoble();
  unovat();
  return 0;
}

int unint(void){

   int a=1;
   int b=0;
   while(a>0){

     b = a;
     a = a+1;
   }

   return b;

}

int unovoble(void){

  double a=1.0;
  double b=0.0;

  while(a != a*2){
    b=a;
    a=a*2;
  }
  // for(int i=1;i<99;i++){
  //   a = a*1.3e3;
  // }

  printf("%20.20e\n",b);
  
  a=1.0;
  
  while(a>0){
    b=a;
    a = a/2.0;
  }

  printf("%20.20e\n",b);
  
  return 0;

  
}

int unovat(void){

  float a=1.0;
  float b=0.0;

  while(a != a*2){
    b=a;
    a=a*2;
  }
  // for(int i=1;i<13;i++){
  //   a = a*1.3e3;
  // }

  printf("%20.16e\n",b);
  
  a=1.0;
  
  while(a>0){
    b=a;
    a = a/2.0;
  }

  printf("%20.20e\n",b);
  
  return 0;
}
