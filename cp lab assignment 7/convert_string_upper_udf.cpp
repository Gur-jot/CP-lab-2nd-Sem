#include<stdio.h>
void upper(char []);
int main()
{
 char a[20];
 
 printf("Enter string:\n");
 scanf("%s",a);
  upper(a);
 printf("String in lowercase is: %s\n",a);
 
}

void upper(char p[20])
{
 int i;
 for(i=0;p[i]!='\0';i++)
 {
  if(p[i]>='a'&& p[i]<='z')
  {
   p[i] = p[i]-32;
  }
 }
}
