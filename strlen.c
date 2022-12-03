#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	int len;
	printf("\n Enter string : ");
	gets(str);
	len = strlen(str);
	printf("\n length of string : %d",len);
	getch();
}
