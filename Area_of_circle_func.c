#include<stdio.h>
int area(int );
int cir(int );
#define pi (3.14)
int main()
{
	int r,ans,result;
	printf("enter radius:");
	scanf("%d",&r);
	ans=area(r);
	printf("Area of circle:%.2d\n",ans);
	result=cir(r);
	printf("circumference of circle:%.2d",result);
	
	return 0;
}

int area(int a)
{
	int c;
	c=pi*a*a;

	return(c);
}
int cir(int a)
{
	int c;
	c=2*pi*a;
	return(c);
}
