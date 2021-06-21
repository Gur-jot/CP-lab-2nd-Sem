#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch=getchar();
    if(islower(ch))
             puchar(toupper(ch));
    else
             putchar(tolower(ch));
}
