#include<stdio.h>
void rev(int );
int main()
{
	int a;
    printf("Enter number that we want to reverse:");
    scanf("%d",&a);
    rev(a);
	return 0;
}

void rev(int i)
{
	int sum;
	sum=0;
	while(i!=0)
	{
	sum=sum*10+i%10;
	i=i/10;
   }
	printf("reverse:%d",sum);
}

