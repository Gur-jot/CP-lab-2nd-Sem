#include<stdio.h>
int main()
{
  
          char c;
    
         printf("Enter any character : ");
         scanf("%c",&c);

        if(c>='A' && c<='Z')
             printf("character is  an upper case");
     
        else if(c>='a' && c<='z')
            printf("character is a lower case");
   
       else if(c>='0'&& c<='9')
           printf("it is a digit");
 
         else
          printf("character is a special character");
    
   return 0;

}
