#include<stdio.h>
#include<math.h>

int main()
{
    int a1,sum;
    scanf("%d",&a1);
    sum= a1%10 + a1/1000;
    printf("%d",sum);
    return 0;
}