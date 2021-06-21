#include <stdio.h>

int main() 
{
	int PPS, BEE, Chemistry,Maths,CAMD,sum ;
	float per;
	printf("Enter marks of PPS=");
	scanf("%d",&PPS);
	printf("Enter marks of BEE=");
	scanf("%d",&BEE);
	printf("Enter marks of Chemistry=");
	scanf("%d",&Chemistry);
	printf("Enter marks of Maths=");
	scanf("%d",&Maths);
	printf("Enter marks of CAMD=");
	scanf("%d",&CAMD);
	sum=PPS+BEE+Chemistry+Maths+CAMD;
	per=(float)sum/5;
	printf("\nPercentage of marks=%0.2f",per);
	
	if(per>=90&&per<=100)
	{
		printf("\nA Grade");
	}
	else if(per>=70&&per<90)
	{
		printf("\nB Grade");
	}
	else if(per>=50&&per<70)
	{
		printf("\nC Grade");
	}
	else if(per<50)
	{
		printf("\nFAIL");
	}
}
