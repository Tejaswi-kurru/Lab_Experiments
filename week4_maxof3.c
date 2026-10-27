#include<stdio.h>
void main()
{
  float n1,n2,n3,max;
  printf("\nEnter three numbers:");
  scanf("%f %f %f",&n1,&n2,&n3);
  max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
  printf("\nMaximum number among the three is %f",max);
}  