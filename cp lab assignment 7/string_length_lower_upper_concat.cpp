#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter 1st string: ");
	gets(str1);
	printf("enter 2nd string: ");
	gets(str2);
	printf("length of string 1: %d\n length of string 2: %d\n",strlen(str1),strlen(str2));
	printf("concat of string: %s\n",strncat(str1,str2,20));
	printf("in upper case\n string: %s\n",strupr(str1));
	printf("in lower case\n string 1st: %s\n",strlwr(str1));
	return 0;
	
}
