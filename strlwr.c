#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("\n Enter String : ");
	gets(str);
	printf("\n String is : %s",strlwr(str));
	getch();
}
