#include<stdio.h>
void table(int );
int main()
{
	int a;
	printf("Enter number that we want to print table:");
	scanf("%d",&a);
	printf("table of a:%d\n",a);
	table(a);
	return 0;
}

void table(int i)
{
	int j,c;
	for(j=1;j<=10;j++)
	{
		c=i*j;
		printf("%d*%d=%d\n",i,j,c);
	}
}

