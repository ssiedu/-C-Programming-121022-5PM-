#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("\n Enter string1 : ");
	gets(str1);
	printf("\n Enter string2 : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
		printf("\n strings are equal");
	else
		printf("\n Strings are not equal");
	
	
	getch();
}
