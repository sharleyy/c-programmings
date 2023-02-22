//Program to find sum of the first 10 natural numbers 
#include<stdio.h>
int main(){

int i,sum = 0;
//loop through the first 10 natural numbers
for(i = 1; i <=10;i++){
sum +=i;
}

printf("\nThe sum of the first 10 natural numbers:" );
scanf("%d", &sum);

return 0;
}
