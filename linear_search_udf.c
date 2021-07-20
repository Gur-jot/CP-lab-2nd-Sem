#include<stdio.h>
int lin_sea(int [], int , int);
int main()
{
	int a[100],n,i,x,find;
	printf("enter no of element in array:");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
{
	printf("a[%d]:",i);
	scanf("%d",&a[i]);
}
printf("enter element that want to search:");
scanf("%d",&x);
find=lin_sea(a,n,x);
if(find==1)
printf("%d is present in array ",x);
else
printf("%d is not present in array",x);
	return 0;
}
int lin_sea(int p[100], int j,int y)
{
	int k,search;
	for(k=0;k<j;k++)
	{
		if(y==p[k])
		return 1;
	}
}

