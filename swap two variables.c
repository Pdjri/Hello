#include <stdio.h>
int main()
{
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  int c=num1;
  num1=num2;
  num2=c;
  printf("%d\n%d",num1,num2);
}