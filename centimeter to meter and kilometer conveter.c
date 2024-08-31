#include <stdio.h>
int main()
{
  float f1;
  scanf("%f",&f1);
  float f2,f3;
  f2=f1/100;
  f3=f1/100000;
  scanf("%f%f",&f2,&f3);
  printf("%.2f %.2f",f2,f3);
    return 0;
}