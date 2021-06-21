#include <stdio.h>

int main()
{
  int weekday;
  printf(" Please Enter the Day Number 1 to 7 :  ");
  scanf("%d", &weekday);
  
  switch (weekday)
  {
  	case 1:
  		printf("Monday");
		  break;
  	case 2:
  		printf("Tuesday");
		  break;
  	case 3:
  		printf("Wednesday"); 
		  break;
  	case 4:
  		printf("Thursday"); 
		  break;
  	case 5:
  		printf("Friday"); 
		  break;
  	case 6:
  		printf(" Saturday");
		  break;
  	case 7:
  		printf("Sunday");
		  break;
	default:
		printf("\n Please enter Valid Number between 1 to 7");
  }
  return 0;
}
