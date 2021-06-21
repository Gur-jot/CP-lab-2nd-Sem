#include<stdio.h>

int main()
{
    float f, c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)*5/9;

    printf("The Temperature in Centigrade Degree: %.2f", c);
    return (0);
}

