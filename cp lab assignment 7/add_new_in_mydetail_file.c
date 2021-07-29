#include <stdio.h> 
int main()
{
	FILE *f1;
	char a;
	f1= fopen("my_detail.txt","w");
	while((a=getc(f1))!= EOF)
	{
		putc(a,f1);
	}
	fclose(f1);
	return 0;
}
