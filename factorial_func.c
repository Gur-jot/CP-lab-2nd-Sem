#include<stdio.h>
int fact(int );
int main()
{
	int a,udf;
	printf("please enter number that we want to fond factorial:");
	scanf("%d",&a);
	udf=fact(a);
	printf("factorial:%d",udf);
	return 0;
}

int fact(int i)
{
	int c,b;
	b=1;
	for(c=1;c<=i;c++)
	{
		b=b*c;
	}
	return(b);
}
