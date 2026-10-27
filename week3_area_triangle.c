#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,s;
  printf("\nEnter lengths of three sides of triangle:");
  scanf("%f %f %f",&a,&b,&c);
  s=(a+b+c)/2.0;
  printf("\nArea of triangle is %f",sqrt(s*(s-a)*(s-b)*(s-c)));
}  