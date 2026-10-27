#include<stdio.h>
void main()
{
  int s1,s2,s3,s4,s5;
  float total,avg;
  printf("\nEnter subject marks of students:");
  scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
  total=s1+s2+s3+s4+s5;
  avg=total/3.0;
  printf("\nTotal of all subject marks:%f",total);
  printf("\nAverage of all marks:%f",avg);
}  