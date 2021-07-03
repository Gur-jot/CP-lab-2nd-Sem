#include<stdio.h>
int sum(int , int);
int main()
{
    int x,y,total;
    printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    total=sum(x,y);
    printf("sum=%d",total);
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	return(c);
}
