#include<stdio.h>
void str_copy(char [], char []);
int main()
{
	char a[20],b[20];
	int i;
	printf("enter any string: ");
	scanf("%s",a);
	str_copy(a,b);
	printf("copy string: ");
	printf("%s",b);
	return 0;
}

void str_copy(char p[20], char q[20])
{
	int j;
	j=0;
	for(j=0;p[j]!='\0';j++)
	{
		q[j] = p[j];
	}
	q[j]='\0';
}
