#include <stdio.h>
#include "Discriminant.c"

int main ()
{
  printf("Enter the coefficients (a,b,c) of quadratic equation:\n");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int D;
  D= D1(a,b,c);
  printf("Discriminant of The euation is %d.",D);
  return 0;
}
