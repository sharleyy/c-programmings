//Bank loan
#include<stdio.h>
int main(){
  
int age,salary;
printf("Enter your age in years and your salary: ");
  
scanf("%d%d",&age,&salary);
if(age>=21&&salary>=21000){
printf("congratulations you qualify for the loan");}
  
else{
printf("sorry you do not qualify for the loan");}
  
return 0;
}


