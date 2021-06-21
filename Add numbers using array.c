#include<stdio.h>

int main()
{
    
    int n, sum = 0, c, array[100];

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

    printf("\nEnter %d integers \n", n);

    for(c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c];    
    }

    printf("\nSum = %d\n", sum);
  
    return 0;
}
