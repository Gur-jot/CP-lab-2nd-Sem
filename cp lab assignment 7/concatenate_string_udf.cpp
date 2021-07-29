
#include<stdio.h>
void con(char [], char []);
int main()
{
	char a[20],b[20];
	printf("enter string: ");
	scanf("%s",a);
	printf("enter string: ");
	scanf("%s",b);
	con(a,b);
	printf("string: %s",a);
    return 0;
}

void con(char p[20], char q[20])
{
	int i,j;
	j=0;
	for(i=0;p[i]!='\0';i++)
	{
		j++;
	}
	for(i=0;q[i]!='\0';i++)
	{
		p[j+i]=q[i];
	}
	p[j+i]='\0';
}
