#include<stdio.h>
int main()
{
    int n,d4,d3,d2,d1,re;
    scanf("%d",&n);
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    re=d4*1000+d3*100+d2*10+d1;
    printf("%ld\n",re);
    return 0;
}