#include<stdio.h>
int main()
{
    int cp,sp, amt;

    scanf("%d%d",&cp,&sp);
    if(sp > cp)
    {
        amt = sp - cp;
        scanf("%d",&amt);
        printf("Profit\n%d",amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        scanf("%d",&amt);
        printf("Loss\n%d",amt);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}
