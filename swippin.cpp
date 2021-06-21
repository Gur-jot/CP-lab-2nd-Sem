#include<stdio.h>
int main()
{
	int first, second, temp;
	printf("Enter first number: ");
	scanf("%d", &first);
	printf("Enter second number: ");
	scanf("%d", &second);
	
	temp = first;
	first = second;
	second = temp;
	
	printf("\nAfter swapping, first Number = %d\n", first);
	printf("\nAfter swapping , second Number = %d", second);
	return 0;
}
