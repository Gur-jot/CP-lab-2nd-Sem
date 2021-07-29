#include <stdio.h> 
int main()
{
FILE *f1,*f2; 
 char c;
f1= fopen("number1.txt", "w"); 
 while((c=getchar()) != EOF)  
 {
 putc(c,f1);
}
fclose(f1);

f1=fopen("number1.txt", "r");
f2=fopen("number2.txt", "w"); 
 while((c=getc(f1))!=EOF)  
 {
 putc(c, f2);
}
 fclose(f2);
 fclose(f1);
} 
