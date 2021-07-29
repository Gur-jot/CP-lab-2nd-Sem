#include<stdio.h>
int main()
{
	
	char name[20];
	int marks;
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *p1;
	p1= fopen("student.txt","w");
	for(i=0;i<n;i++)
	{
	printf("Enter student name :");
	scanf("%s",name);
	printf("Enter marks :");
	scanf("%d",&marks);
	fprintf(p1,"name: %s\n",name);
	fprintf(p1,"marks: %d\n",marks);
    }
	fclose(p1);
	return 0;
}
