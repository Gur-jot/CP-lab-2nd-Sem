#include<stdio.h>
struct date{
	int date;
	int month;
	int year;
};
int main()
{
	struct date p[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("\ndate:");
		scanf("%d",&p[i].date);
		printf("month:");
		scanf("%d",&p[i].month);
		printf("year:");
		scanf("%d",&p[i].year);
	}
	for(i=0;i<1;i++)
	{ 
		if(p[i].date==p[i+1].date && p[i].month==p[i+1].month && p[i].year==p[i+1].year)
		printf("\n\t equal date");
	    else
	    printf("\n\t unequal date");   
}
}
