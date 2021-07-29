#include<stdio.h>
int main()
{
	char a[100];
	int i,n;
	printf("enterb no of elements in array: ");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	FILE *fp;
	fp= fopen("number1.txt","w");
	fwrite(a,1,n,fp);
	fclose(fp);
}
