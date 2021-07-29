#include<stdio.h>
int str_len(char [] );
int main()
{
	char p[20];
	int i;
	printf("enter any string: ");
	scanf("%s",p);
	i=str_len(p);
	printf("length of string: %d",i);
	return 0;
}

int str_len(char a[20])
{
	int j=0;
	while(a[j]!='\0')
	{
		j++;
	}
	return j;
}
