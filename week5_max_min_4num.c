#include<stdio.h>
void main()
{
  float n1,n2,n3,n4,max1,max2,min1,min2;
  printf("\nEnter four numbers:");
  scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
  if(n1>n2)
  {
    max1=n1;
    min1=n2;
  }  
  else
    max1=n2;
    min1=n1;
  if(n3>n4)
  {
    max2=n3;
    min2=n4;
  }
  else
  {
    max2=n4;
    min2=n3;
  }
  if(max1>max2)
    printf("\nMaximum number is %f",max1);
  else
    printf("\nMaximum number is %f",max2);
  if(min1<min2)
    printf("\nMinimum number is %f",min1);
  else
    printf("\nMinimum number is %f",min2);
}    
     
    
    
  
  
    