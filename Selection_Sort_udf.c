#include<stdio.h>
#define SIZE 25
void selection_Sort(int [],int);
void selection_Sort(int number[],int count)
{
int i,j,temp;
for(i=0;i<count;i++)
{
for(j=i+1;j<count;j++)
{
if(number[i]>number[j])
{
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
}
}
int main(){
int i, j, count, temp, number[SIZE];
printf("How many numbers u are going to enter?: ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
{
printf("\n enter the value at %d index",i);
scanf("%d",&number[i]);
}
printf("unsorted elements: \n");
for(i=0;i<count;i++)
printf(" %d\n ",number[i]);
selection_Sort(number,count);
printf("Sorted elements: \n");
for(i=0;i<count;i++)
printf(" %d\n",number[i]);
return 0;
}
