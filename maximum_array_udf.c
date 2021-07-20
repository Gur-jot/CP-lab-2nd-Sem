#include<stdio.h>
int max(int [], int);
int main()
{
	int p[100],i,n,maximum;
	printf("enter no of element in array:");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		printf("p[%d]:",i);
		scanf("%d",&p[i]);
	}
	maximum=max(p,n);
	printf("maximum element in array:%d",maximum);
	return 0;
}

int max(int a[100], int j)
{
	int max,k;
	max=a[0];
	for(k=0;k<j;k++)
	{
		if(max<a[k])
		max=a[k];
	}
	return max;
}
