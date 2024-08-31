#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a,b,c,d,e;
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  int aggregate,percentage;
  aggregate=a + b + c + d + e;
  percentage=aggregate/5;
  printf("%d %d",aggregate,percentage);
    return 0;
}