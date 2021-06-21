#include <stdio.h>
int main()
{
   int circle_radius;
   float PI_VALUE=3.14, circle_area, circle_circumf;
   printf("\nEnter radius of circle: ");
   
   scanf("%d",&circle_radius);
   circle_area = PI_VALUE * circle_radius * circle_radius;
   printf("\nArea of circle is: %f",circle_area);
   circle_circumf = 2 * PI_VALUE * circle_radius;
   printf("\nCircumference of circle is: %f",circle_circumf);

   return 0;
}
