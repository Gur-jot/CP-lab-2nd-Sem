#include<stdio.h>

int main()
{
FILE *f;
char c;
f= fopen("my_detail.txt","w");
while((c=getchar())!=EOF)
{
     putc(c,f);	
}
fclose(f);
f= fopen("my_detail.txt","r");
while((c=getc(f))!=EOF)
{
	putc(c,f);
}
fclose(f);
return 0;
}
