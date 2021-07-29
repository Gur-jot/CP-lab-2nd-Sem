#include<stdio.h>
struct result
{
	char name[20];
	int roll_no;
	int pps,chemistry,math,total;
};
int main()
{
	struct result st[5];
	int i,n;
	printf("enter no of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d name: ",i+1);
		scanf("%s",st[i].name);
		printf("roll no: ");
		scanf("%d",&st[i].roll_no);
		printf("pps: ");
		scanf("%d",&st[i].pps);
		printf("chemistry: ");
		scanf("%d",&st[i].chemistry);
		printf("math: ");
		scanf("%d",&st[i].math);
		st[i].total=st[i].pps+st[i].chemistry+st[i].math;
	}
	printf("\nname\troll  no\tpps\tchemistry\tmath\ttotal\n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t\t%d\t%d\t\t%d\t%d\n",st[i].name,st[i].roll_no,st[i].pps,st[i].chemistry,st[i].math,st[i].total);
	}
	return 0;
}
