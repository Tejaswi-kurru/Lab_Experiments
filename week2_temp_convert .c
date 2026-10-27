#include<stdio.h>
void main()
{
  float F,C;
  int choice;
  printf("\nSelect the type of conversion:");
  printf("\n1.Fahrenheit to Celsius");
  printf("\n2.Celcius to Fahrenheit");
  scanf("%d",&choice);
  if(choice==1)
  {
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&F);
    printf("\nTemperature in Celsius:%f",((F-32)*5/9));
  }
  else if(choice==2)
  {
    printf("\nEnter temperature in Celsius:");
    scanf("%f",&C);
    printf("\nTemperature in Fahrenheit:%f",((C*9/5)+32));
  }
  else
    printf("\nInvalid choice!");
}  