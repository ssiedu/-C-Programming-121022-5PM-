#include<stdio.h>
void main()
{
	char i,j;
	for(i='a';i<='e';i++)//row
	{
		for(j='a';j<=i;j++)//column
		{
			printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
