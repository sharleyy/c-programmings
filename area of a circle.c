//calculating the area of a circle
#include<stdio.h>
int main()
{
  int r,area;
  float pi=3.14;
  printf("\nEnter the radius:");
  scanf("%d",&r);

  area=pi*r*r;
  printf("Area of circle=%f",area);
  
  return 0;
}