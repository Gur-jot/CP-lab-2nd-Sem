#include<stdio.h>
int avg(int [], int);
int main()
{
	int p[100],i,n,average;
	printf("enter no of elements in array:");
	scanf("%d",&n);
	printf("enter ele,ments in array:\n");
	for(i=0;i<n;i++)
	{
		printf("p[%d]:",i);
		scanf("%d",&p[i]);
	}
	average= avg(p,n);
	printf("average of elements present in array:%d",average);
	return 0;
}

int avg(int a[100], int n)
{
	int i,sum,avg;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	return avg;
}
