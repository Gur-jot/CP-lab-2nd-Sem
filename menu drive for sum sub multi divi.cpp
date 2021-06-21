#include <stdio.h> 
 
int main() 
{ 
	
	int result, num1, num2; 
	printf("Press 1 to calculate sum of two num\n"); 
	printf("Press 2 to calculate Multiplication of two num\n"); 
	printf("Press 3 to calculate divispn of two num\n"); 
	printf("Press 4 to calculate subtraction of two num\n");
	printf("Enter your choice:\n"); 
	 
	switch (result) { 
	case 1: { 
		printf("Enter two positive numbers:\n"); 
		
		result = num1 + num2; 
		printf("sum of two num=%d",result); 
		
		break; 
	} 
	case 2: { 
		printf("Enter two posotive numbers:\n"); 
		
		result = num1 * num2; 
		printf("Multiplication of two num= %d",result); 
		
		break; 
	} 
	case 3: { 
		printf("Enter two positive numbers:\n"); 
		
		result = num1 / num2; 
		printf("divispn of two num= %d",result); 
		 
		break; 
	}
	case 4: {
		printf("Enter two positive numbers:\n"); 
	
		result = num1 - num2; 
		printf("subtraction of two num= %d",result); 
		
		break;
	} 
	default: 
		printf("wrong Input\n"); 
	} 
	return 0; 
}

