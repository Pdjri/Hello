#include<stdio.h>
int main()
{
    int m,n,b,v,sum;
    scanf("%d %d %d %d",&m,&n,&b,&v);
    sum = m*1000 + n*100 + b*10 + v;
    printf("%d",sum);
    return 0;
}