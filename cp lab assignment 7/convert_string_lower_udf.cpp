#include<stdio.h>
void lower(char []);
int main()
{
	char a[20];
	printf("enter string: ");
	scanf("%s",a);
	lower(a);
	printf("lower conver string: %s",a);
	return 0;
}

void lower(char p[20])
{
	
	int j;
	for(j=0;p[j]!='\0';j++)
	{
		if(p[j]>='A' && p[j]<='Z')
		{
			p[j]=p[j]+32;
		}
		
	}

	
}
