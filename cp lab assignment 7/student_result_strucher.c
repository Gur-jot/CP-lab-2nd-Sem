#include<stdio.h>
struct student input();
void detail(struct student print);
struct student result();

struct student
{
	int Roll_no;
	char name[20];
	int math;
	int chemistry;
	int total;
};

struct student input()
{
	struct student s1;
	printf("enter Roll no: ");
	scanf("%d",&s1.Roll_no);
	printf("enter name: ");
	scanf("%s",s1.name);
	printf("enter marks in math: ");
	scanf("%d",&s1.math);
	printf("enter marks in chemistry: ");
	scanf("%d",&s1.chemistry);
	return(s1);
}


void detail(struct student print)
{
	
	printf("\nstudent Roll no: %d\n",print.Roll_no);
	printf("\nstudent name: %s\n",print.name);
	printf("\nmarks in math: %d\n",print.math);
	printf("\nmarks in chemistry: %d\n",print.chemistry);
	
}

int main()
{
	struct student real;
	real=input();
	detail(real);
	real=result();
}

struct student result()
{
	struct student r1;
	detail(r1);
	r1.total=r1.chemistry+r1.math;
	printf("\ntotal marks: %d",r1.total);
	return(r1);
}
