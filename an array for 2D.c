//An array of 6 marks
#include<stdio.h>
int main()
{
  int i,j,marks[2][3]={{10,29,36},
                       {45,67,90}};
  
  for(i=0;i<3;i++){
  for(j=0;j<3;j++)

    {
      printf("%d ",marks[i][j]);
      }
    }
  return 0;
}
