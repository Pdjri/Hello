#include<stdio.h>
int main()
{
    int basicsalary,hra,da,grosssalary;
    scanf("%d",&basicsalary);
    hra=0 . 1*basicsalary;
    da=0 . 2*basicsalary;
    grosssalary= basicsalary + hra + da;
    printf("%d",grosssalary);
    return 0;
}