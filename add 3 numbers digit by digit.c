#include<stdio.h>
int addDigitByDigit(int a,int b,int c)
{
  int d1, d2, d3, sum;
  sum=a%10+b%10+c%10;
  a/=10;
  b/=10;
  c/=10;
  sum+=(a %10+b%10+c%10)*10;
  a/=10;
  b/=10;
  c/=10;
  sum+=(a %10+b%10+c%10)*100;
  return sum;
  }
  