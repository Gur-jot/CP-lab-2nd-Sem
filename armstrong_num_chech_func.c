#include<stdio.h>
int armstrong(int);
int main()
{
	int num, sum;
	printf("give an interger number:\n");
	scanf("%d",&num);
	sum=armstrong(num);
	if(sum==num)
	printf("the number %d is armstrong",num);
	else
	printf("the number %d is not armstrong",num);
	return 0;
}

int armstrong(int n)
{
	int nr,digit=0, i,rem,j=0, k=1;
	nr=n;
	while(nr>0)
	{
		nr=nr/10;
		digit+=1;
	}
	nr=n;
	while(nr!=0)
	{
	rem=nr%10;
	nr=nr/10;
	for(i=1;i<=digit;i++)
	{
		k=k*rem;
	}
	j+=k;
	k=1;
}
return(j);
}
