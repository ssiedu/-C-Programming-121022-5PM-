#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	
	if(num!=0)
	{
		if(num>0)
		{
			printf("\n Number is positive");
		}
		else
		{
			printf("\n Number is negative");
		}
	}
	else
	{
		printf("\n Number is zero");
	}
	getch();
}
