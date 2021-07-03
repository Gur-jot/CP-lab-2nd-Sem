#include<stdio.h>
int area(int , int);
int peri(int, int);
int main()
{
	int l,b,Ans,result;
	printf("enter length l:");
	scanf("%d",&l);
	printf("enter width b:");
	scanf("%d",&b);
	Ans=area(l,b);
	printf("Area of rectangle:%d\n",Ans);
	result=peri(l,b);
	printf("perimeter of rectangle:%d",result);
	return 0;
}

int area(int a, int b)
{
	int c;
	c=a*b;
	return(c);
}
int peri(int a, int b)
{
	int c;
	c=2*(a+b);
	return(c);
}

