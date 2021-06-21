#include<stdio.h>

 
int main() {
   int length, breadth, area,perimeter;
 
   printf("\nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 
   area = length * breadth;
   
   perimeter=2*(length+breadth);

   printf("\nArea of Rectangle : %d", area);
   printf("\nPerimeter of Rectangle : %d", perimeter);

 
   return (0);
}
