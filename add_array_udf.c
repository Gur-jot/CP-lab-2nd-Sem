#include<stdio.h>
void add(int [][20], int , int , int [][20], int , int );
int main()
{
	int  p[20][20],q[20][20],k,l,n,m,r,s,u,v;
	printf("enter size of 1st array:");
	scanf("%d%d",&n,&m);
	printf("nter size of 2nd array:");
	scanf("%d%d",&r,&s);
	for(u=0;u<n;u++)
	{
		for(v=0;v<m;v++)
		{
			printf("p[%d][%d]:",u+1,v+1);
			scanf("%d",&p[u][v]);
		}
	}
	for(k=0;k<r;k++)
	{
		for(l=0;l<s;l++)
		{
			printf("q[%d][%d]:",k+1,l+1);
			scanf("%d",&q[k][l]);
		}
	}
	add(p,n,m,q,r,s);
	return 0;
}

void add(int a[20][20], int n, int m, int b[20][20], int x, int y)
{
	int i,j,add[20][20];
	printf("\nsum of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
}
