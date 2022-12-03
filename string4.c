#include<stdio.h>
void main()
{
	char str[30];
	printf("\n Enter any string : ");
	fgets(str,sizeof(str),stdin);
	printf("\n string is : %s",str);
	getch();
}
