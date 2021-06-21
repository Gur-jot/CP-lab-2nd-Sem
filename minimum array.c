#include <stdio.h>
 
int main()
{
 
        int size, i, lowest;
 
        printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        int array[size];
 
        printf("\n Enter %d elements of  the array: \n", size);
 
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
        }
 
        lowest = array[0];
 
        for (i = 1; i < size; i++) 
        {
            if (lowest > array[i])
            lowest = array[i];
        }
 
        printf("\n minimum element present in the given array is : %d", lowest);
 
        return 0;
 
}
