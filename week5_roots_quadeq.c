#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,det,root1,root2,realPart,imagPart;
    printf("Enter coefficients a,b,c:");
    if(scanf("%f %f %f",&a,&b,&c)!= 3)
    {
        printf("\nInvalid input!");
        return 1;
    }
    if(a == 0)
    {
        printf("\nCoefficient 'a' cannot be zero for a quadratic equation");
        return 1;
    }
    det = b * b - 4 * a * c;
    if(det > 0) 
    {
        root1 = (-b + sqrt(det))/(2 * a);
        root2 = (-b - sqrt(det))/(2 * a);
        printf("\nRoots are real and distinct");
        printf("\nRoot 1 = %.3f",root1);
        printf("\nRoot 2 = %.3f",root2);
    }
    else if(det==0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("\nRoots are real and equal");
        printf("\nRoot 1 = Root 2 = %.3f", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-det) / (2 * a);
        printf("\nRoots are complex and distinct");
        printf("\nRoot 1 = %.3f+ i%.3f", realPart, imagPart);
        printf("\nRoot 2 = %.3f - i%.3f", realPart, imagPart);
    }
    return 0;
}