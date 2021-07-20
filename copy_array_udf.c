#include<stdio.h>
void copy(int [], int );
int main()
{
	int a[100],i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\tcopy array:\n");
	copy(a,n);
	
	return 0;
}

void copy(int x[100], int n)
{
	int y[100],j, copy;
	for(j=0;j<5;j++)
	{
		y[j] = x[j];
		printf("\t[%d]: %d\n",j,x[j]);
	}
}
