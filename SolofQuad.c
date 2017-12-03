#include <stdio.h>
#include <math.h>
#include "Discriminant.c"
#include "root.c"

int main ()
{
  printf("Enter the coefficients (a,b,c) of quadratic equation:\n");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int D;
  D= D1(a,b,c);
  printf("Discriminant of The euation is %d.",D);
  int rt1=sf1(a,b,c);
  int rt2=sf2(a,b,c);
  printf("\nroots of the equation are %d %d.",rt1,rt2);
  return 0;
}
