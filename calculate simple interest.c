#include<stdio.h>
int main()
{
    float pr,rate,time,interest;
    scanf("%f %f %f",&pr,&rate,&time);
    interest=(pr*rate*time)/100.0;
    printf("%.2f",interest);
    return 0;
}