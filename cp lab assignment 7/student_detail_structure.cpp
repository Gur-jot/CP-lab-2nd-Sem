#include<stdio.h>
struct student input();
void detail(struct student print);
struct student result();

struct student
{
	int Roll_no;
	char name[20];
	int pps;
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
	printf("enter marks in pps: ");
	scanf("%d",&s1.pps);
	printf("enter marks in math: ");
	scanf("%d",&s1.math);
	printf("enter marks in chemistry: ");
	scanf("%d",&s1.chemistry);
	return(s1);
}


void detail(struct student print)
{
	
	printf("\nstudent Roll no: %d\n",print.Roll_no);
	printf("student name: %s\n",print.name);
	printf("marks in pps: %d\n",print.pps);
	printf("marks in math: %d\n",print.math);
	printf("marks in chemistry: %d\n",print.chemistry);
	
}

struct student result()
{
	struct student input;
	input.total=input.chemistry+input.math+input.pps;
	printf("\ntotal marks: %d",input.total);
	return(input);
}

int main()
{
	struct student real;
	real=input();
	detail(real);
	real=result();
	return 0;
}

