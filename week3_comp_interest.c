#include<stdio.h>
#include<math.h>
void main()
{
  float amount,rate,timeperiod,total;
  printf("\nEnter principal amount:");
  scanf("%f",&amount);
  printf("\nEnter rate of interest:");
  scanf("%f",&rate);
  printf("\nEnter time period:");
  scanf("%f",&timeperiod);
  total=amount*pow((1+rate/100),timeperiod);
  printf("\nCompound interest is %f",(total-amount));
  printf("\nTotal amount is %f",total);
}  
  