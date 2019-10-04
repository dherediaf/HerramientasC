#include "tanu.h"
#include <cmath>
#include "tanpol.h"

double tanu(double x)
{
  int stepy=int(x/M_PI);
  double y=0.0;
  if(stepy%2==0) {
      y=x-stepy*M_PI;
    }
  else{
      y=stepy*M_PI-x;
    }

  if(std::fabs(y)<=1.7e-9){
    return y;
    }
  else if(y>M_PI/4.0){
    return 1.0/tanpol(M_PI/2.0 -y);
  }
   else if(y<-M_PI/4.0){
     return 1.0/tanpol(-M_PI/2.0 -y);
  }
   else{
    return tanpol(y);
  }
  
}
