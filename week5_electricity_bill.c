#include<stdio.h>
int main()
{
  float units,total_bill;
  printf("\nEnter total units comsumed:");
  if(scanf("%f",&units)!=1||units<0)
  {
    printf("\nInvalid input!");
    return 1;
  }
  if(units<=100)
    total_bill=units*1.50;
  else if(units<=200)
    total_bill=units*2.50;
  else if(units<=500)
    total_bill=units*4.0;
  else 
    total_bill=units*6.0;
  printf("\nTotal bill amount is %f",total_bill); 
  return 0;
}