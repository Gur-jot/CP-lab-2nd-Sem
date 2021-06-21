#include<stdio.h>
int main()
{
	int num1,num2,rem;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	rem=num1%num2;
	printf("\nRemainder: %d",rem);
	return 0;
}

