#include<stdio.h>
int fact(int );
int main()
{
	int i,j;
	printf("Enter number:");
	scanf("%d",&i);
    j=fact(i);
    printf("factorial : %d",j);
    return 0;
}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
