#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("\n Enter string : ");
	gets(str1);
	strcpy(str2,str1);
	printf("\n destination string str2 is : %s",str2);
	getch();
}
