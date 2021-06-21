#include <stdio.h>
int main ()
{
	int number,d1,d2,d3,sum ;
    printf("Enter the three digit number\n");
    scanf("%d", &number);
    d1= number%10;
    number=number/10;
    d2= number%10;
    number= number/10;
    d3= number;
    sum= d1+d2+d3;
    printf("The value of sum of three digit is%d\n",sum);
    return 0;
}

