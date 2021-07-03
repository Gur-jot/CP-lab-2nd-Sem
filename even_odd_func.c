#include<stdio.h>
int even_odd(int );
int main()
{
	int x,check;
	printf("\nenter number that we want to check:");
	scanf("%d",&x);
	check=even_odd(x);
	
	if(check==1)
	{
		printf("\nnumber:%d \n that is even",x);
	}
	if(check==0)
	{
		printf("\nnumber:%d\n that is odd",x);
	}
	return 0;
}


int even_odd(int a)
{
	if(a%2==0)
	{
		
		return(1);
	}
	else
	{
		return(0);
	}
	return 0;
}
