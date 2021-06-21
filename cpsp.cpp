#include<stdio.h>
int main()
{
	int cp, sp;
	printf("Enter the cost price and selling price");
	scanf("%d %d",&cp, &sp);
	if (cp <= sp)
	{printf("You got profit of %d", sp-cp);
	}
	else
	printf("You got loss of %d",cp-sp);
	return 0;
}
