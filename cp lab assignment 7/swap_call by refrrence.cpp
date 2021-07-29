#include<stdio.h>
void swap(int * , int *); 
int main()
{
	int m = 22, n = 44;
    printf("values before swap m = %d \n and n = %d",m,n);  
	swap(&m, &n);
    return 0;
}

void swap(int *a, int *b)
{
   int tmp;  tmp = *a;
   *a = *b;
   *b = tmp;
    printf("\n values after swap m = %d \nand n = %d", *a, *b);
}

