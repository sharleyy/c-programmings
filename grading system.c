//program of a grading system
#include<stdio.h>
int main ()
{
  int mathematics,english,kiswahili,average;
  printf("\nEnter the mark of mathematics,english and kiswahili:");
  scanf("%d%d%d",&mathematics,&english,&kiswahili);

  average=(mathematics+english+kiswahili)/3;
if(average>=70 && average<=100){
    printf("\nA:");
    }
      
else if(average>=60 && average<=69){
    printf("\nB:");
      }
  
else if(average>=50 && average<=59){
    printf("\nC:");
  }
    
else if(average>=40 && average<=49){
          printf("\nD:");
        }
  
else if(average<=0 && average<=39){
        printf("\nE(fail):");
      }
  
  return 0;
}
