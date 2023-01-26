//program to calculate simple interest
#include<stdio.h>
int main()
{
  float t,r,p,interest;
  printf("\nEnter the principal amount: ");
scanf("%f",&p);

  printf("\nEnter time: ");
  scanf("%f",&t);

  printf("\nEnter rate: ");
  scanf("%f",&r);

 interest=p*t*r/100;
  printf("interest=%f",interest);
  return 0;
}
