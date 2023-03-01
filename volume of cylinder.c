//Program to find volume of a cylinder
#include<stdio.h>
float cylinder_volume(float,float);
float cylinder_volume(float,float);
int main(int argc,char** argv){

  float cylinder volume;
  float radius,height;

  printf("Enter the radius of the cylinder:");
  printf("Enter the height of the cylinder:");

  scanf("%f%f",&radius,&height);
  cylinder_volume = cylinder_volume(radius,height);

    printf("the  volume of cylinder:%.2f\n",cylinder_volume);
    return 0;
    
}
float cylinder_volume(float radius,float height){
  return 3.142*radius*radius*height;
  }
