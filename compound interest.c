//program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
  float t,n,r,p,interest;
  printf("\nEnter the principal_amount:");
  scanf("%f",&p);

  printf("\nEnter time_value:");
  scanf("%f",&t);

  printf("\nEnter the rate_value:");
  scanf("%f",&r);

  interest=p * pow((1+r),t);
  //pow(2,8)
  printf("interest=%.2f",interest);
  return 0;
}
