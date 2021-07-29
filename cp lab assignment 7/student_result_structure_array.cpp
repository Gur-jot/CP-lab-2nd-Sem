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
	printf("\nenter Roll no: ");
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
	printf("total marks: %d\n",input.total);
	return(input);
}

int main()
{
	struct student real[5];
	int i;
	for(i=0;i<5;i++)
	{
	real[i]=input();
	detail(real[i]);
	real[i]=result();
}
    printf("\ns.no\t name\t roll no\t pps\t chemistry\t math\t total\n");
    printf("..................................................................\n\n");
    for(i=0;i<5;i++)
    {
    	printf("%d\t %s\t %d\t\t %d\t %d\t\t %d\t %d\n",i+1,real[i].name,real[i].Roll_no,real[i].pps,real[i].chemistry,real[i].math,real[i].total);
	}
	return 0;
}

