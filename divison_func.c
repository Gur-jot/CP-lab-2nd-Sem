#include<stdio.h>
int divide(int ,int );
int main()
{
	int x,y,ans;
	printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    ans=divide(x,y);
    printf("Answr=%d",ans);
}
int divide(int a,int b)
{
	int c;
	c=a/b;
	return(c);
}
