#include<stdio.h>
int main()
{
	
	char name[20];
	int marks;
	int i,n;
	
	FILE *p1;
	p1= fopen("student.txt","w");
	while((i=getc(p1))!=EOF)
	{
		fprintf(p1,"name: %s,marks: %d",name,marks);
	}
	fclose(p1);
	p1= fopen("student.txt","r");
	while((i=getc(p1))!=EOF)
	{
	printf("student name :%c\n",i);
	printf("marks :%d\n",marks);
    }
    fclose(p1);
    return 0;
}
