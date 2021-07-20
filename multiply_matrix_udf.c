#include<stdio.h>
int multiply(int, int,int [][2], int, int, int[][3]);
int multiply(int m1, int m2, int mat1[][2] , int n1, int n2, int mat2[][3])
{
	int k,i,j;
	int res[m1][n2];
	if(m2!=n1)
	{
		printf("not compactible\n");
		return 0;
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			res[i][j]=0;
			for(k=0;k<m2;k++)
			{
				res[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{printf("%d",res[i][j]);
		}
		printf("\n");

    }
}

int main()
{
	int mat1[2][2] ={{1,2},{-1,0}};
	int mat2[2][3] ={{1,2,0},{1,-1,3}};
	int m1=2, m2=2, n1=2, n2=3, m;
	m=multiply(m1,m2,mat1,n1,n2,mat2);
	return 0;
}
