#include<stdio.h> 
 
int main() 
{
float km, m, ft, in, cm;

printf("Enter the distance in kilometers : ");
scanf("%f",&km);
m = km * 1000;

in = km*39370.07;

ft = km*3280.8;

cm = km*100000;
printf("The equivalent distance in meters is : %f",m);

printf("The equivalent distance in feets is : %f",ft);
printf("The equivalent distance in inches is : %f",in);
printf("The equivalent distance in centimetres is : %f",cm);

return 0;
}
