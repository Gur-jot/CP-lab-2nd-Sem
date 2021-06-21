#include<stdio.h>
int main()
{
	int choice;
	printf("Enter your choice(1-3)\n");
	scanf("%d",&choice);
	
	switch(choice){
		case (1):
			printf("your choice mercury\n");
			printf("mercury is close to sun\n");
			printf("wheater is too hot\n");
			printf("it cost around 5200IGS\n");
			break ;
			case (2):
			printf("your choice venus\n");
			printf("venus is second plant from sun\n");
			printf("wheater is  hot and poisonous\n");
			printf("it cost around 3200IGS\n");
			break ;
			case (3):
			printf("your choice mars\n");
			printf("mars is closent to earth\n");
			printf("wheater is excellent\n");
			printf("it cost around 1200IGS\n");
			break ;
			default :
			printf("Enter valid choice\n");
			
			}
			return 0;
			
}
