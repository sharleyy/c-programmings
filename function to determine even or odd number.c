//Function to determine an even or odd number
#include<stdio.h>
int relation(int numb);
int main()

{
int num,result;
printf("Enter the number:");
scanf("%d",&num);
result=(num%2==0);
if(num%2==0){
printf("Number is even:");
}
else{
printf("Number is odd:");
}
return 0;
}
int relation(int num)
{
int answer;
answer=num%2==0;
return answer;
}
