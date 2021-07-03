#include<stdio.h>
float area(float );
float cir(float );
#define pi (3.14)
int main()
{
	int r;
	float ans,result;
	printf("enter radius:");
	scanf("%d",&r);
	ans=area(r);
	printf("Area of circle:%.2f\n",ans);
	result=cir(r);
	printf("circumference of circle:%.2f",result);
	
	return 0;
}

float area(float a)
{
	float c;
	c=pi*a*a;

	return(c);
}
float cir(float a)
{
	float c;
	c=2*pi*a;
	return(c);
}
