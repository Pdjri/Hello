#include <stdio.h>
int main()
{
  int length,breath;
  scanf("%d%d",&length,&breath);
  int area=length*breath;
  int perimeter=2*(length+breath);
  printf("%d %d",area,perimeter);
    return 0;
}