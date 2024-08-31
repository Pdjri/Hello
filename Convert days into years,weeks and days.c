#include<stdio.h>
int main()
{
    int day,years,weeks,days;
    scanf("%d",&day);
    years=(day/365);
    weeks=(day%365)/7;
    days=day-((years*365)+(weeks*7));
    printf("%d %d %d",years,weeks,days);
    return 0;
}