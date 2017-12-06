#include <stdio.h>
#include <math.h>
#include "Discriminant.c"
#include "insolution.c"
#include "inroot.c"

int main ()
{
  float a,b,c;
  printf("enter the coefficients of quadratic equation.");
  scanf("%d%d%d",&a,&b,&c);
  float D,pr1,pr2,rt1,rt2;
  D=D1(a,b,c);
  pr1=ins1(b,D);
  pr2=ins2(b,D);
  rt1=sol1(a,pr1);
  rt2=sol1(a,pr2);
  printf("\nroots of the equation are %d %d.",rt1,rt2);
  return 0;
}
