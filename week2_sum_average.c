#include<stdio.h>
void main()
{
  float a,b,c,sum;
  printf("\nEnter the three numbers:");
  scanf("%f %f %f",&a,&b,&c);
  sum=a+b+c;
  printf("\nSum of three numbers:%f",sum);
  printf("\nAverage of three numbers:%f",sum/3.0);
}  