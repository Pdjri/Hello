#include <stdio.h>
int main()
{
  float radius;
  scanf("%f",&radius);
  float diameter=2*radius;
  float area=3.14*radius*radius;
  printf("%.2f %.2f",diameter,area);
    return 0;
}