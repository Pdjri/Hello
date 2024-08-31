#include<stdio.h>
int main()
{
int n;
    int r,ans=0,i=0;
    scanf("%d",&n);
    while(n>0){
        if(n%10==9){
            r=0;
        }
        else{
            r=(n%10)+1;
        }
        ans=(r*(pow(10,i)))+ans;
        i=i+1;
        n=n/10;
    }
    printf("%d",ans);

    return 0;
}
