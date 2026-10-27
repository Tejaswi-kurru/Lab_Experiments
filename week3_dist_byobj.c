#include<stdio.h>
void main()
{
  float u,t,a;
  printf("\nEnter required details of object:");
  printf("\nInitial velocity in m/s:");
  scanf("%f",&u);
  printf("\nAcceleration in m/s^2:");
  scanf("%f",&a);
  printf("\nTime period in sec:");
  scanf("%f",&t);
  printf("\nDistance travelled by object(in m) is %f",((u*t)+(0.5*a*t*t)));
}  