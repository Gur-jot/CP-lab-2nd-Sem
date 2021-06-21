#include<stdio.h>
int main()
{
    int width, length, Area; 
 
    printf("\n Please Enter the Width of a Rectangle  :  ");
    scanf("%d",&width);

    printf("\n Please Enter the Length of a Rectangle :  ");
    scanf("%d",&length);
	   
    Area = length * width;
 
	printf("\n The Area of a Rectangle =  %d", Area);
 
    return 0;
}
