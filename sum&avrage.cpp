#include <stdio.h>
 
int main()
{
    int a,b,sum;
    float avg;
 
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
 
    sum=a+b;
    avg= (float)(a+b)/2;
 
    printf("\nSum of %d and %d is = %d",a,b,sum);
    printf("\nAverage of %d and %d is = %f",a,b,avg);
 
    return 0;
}
