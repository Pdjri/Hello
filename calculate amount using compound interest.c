#include<stdio.h>
int main()
{
    float principalamount,rate,time,ci;
    scanf("%f%f%f",&principalamount,&rate,&time);
    ci=principalamount*pow((1+rate/100),time);
    printf("%.1f\n"ci);
    return 0;
}