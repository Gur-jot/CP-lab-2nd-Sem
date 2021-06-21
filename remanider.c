#include<stdio.h>
int main()
{
	int num1 , num2, rem;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	rem = num1 % num2;
	printf("Remanider of two numbers: %d",rem);
	return 0;
}
