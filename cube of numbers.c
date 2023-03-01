//Program to find cube of numbers
#include<stdio.h>
int main(){

int i,n,cube;
printf("Enter the number of terms:");
scanf("%d",&n);

printf("The cube of the numbers up to %d are:\n",n);
for(i = 1;i <= n;i++){
cube = i*i*i;
printf("%d^3 = %d\n",i,cube);
}

return 0;
}
