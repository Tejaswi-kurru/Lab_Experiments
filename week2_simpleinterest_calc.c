#include<stdio.h>
void main()
{
  float amount,timeperiod,rate_of_interest;
  printf("\nEnter principal amount:");
  scanf("%f",&amount);
  printf("\nEnter time period in years:");
  scanf("%f",&timeperiod);
  printf("\nEnter rate of interest:");
  scanf("%f",&rate_of_interest);
  printf("\nSimple interest is %f",((amount*timeperiod*rate_of_interest)/100.0));
}  