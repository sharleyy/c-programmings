//Function of an area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()

{
int r,result;
printf("Enter the radius:");
scanf("%d",&r);

result=pi*r*r;
printf("Area of a circle is %d",result);
return 0;
}

int area(int r)
{
int answer=pi*r*r;
return answer;
}
