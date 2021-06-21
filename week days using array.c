#include<stdio.h>
int main() 
{
 
     
 
    char *(a[7])={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"},m; 
    printf("Enter the week day:");
 
    scanf("%d",&m);
    if(m>7 || m<1)
    {
    	
    
    	printf("invalid input");
    }
    else
    printf("%s",a[m-1]);
    
   
 
}
