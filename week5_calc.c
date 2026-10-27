#include <stdio.h>
int main() 
{
    float num1,num2;
    int choice;
    printf("Enter two numbers:");
    if(scanf("%f %f",&num1,&num2)!= 2)
    {
        printf("\nInvalid input");
        return 1;
    }
    printf("\n--- Calculator Menu ---");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4. Division");
    printf("Enter your choice(1-4):");
    scanf("%d",&choice);
    switch(choice) 
    {
        case 1:
            printf("\nResult:%.3f", num1 + num2);
            break;
            
        case 2:
            printf("\nResult:%.3f", num1 - num2);
            break;
        case 3:
            printf("\nResult:%.3f", num1 * num2);
            break;
        case 4:
            if(num2 == 0) 
                printf("\nDivision by zero is not possible");
            else 
                printf("\nResult:%.3f",num1 / num2);
            break;
        default:
            printf("\nInvalid option!");
            break;
    }
    return 0;
}