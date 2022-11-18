#include<stdio.h>
void main()
{
	int i,j;
	for(i=97;i<=102;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
