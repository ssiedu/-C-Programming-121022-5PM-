#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter Any Number : ");
	scanf("%d",&number);
	
	if(number!=0)
	{
		if(number>0)
		{
			printf("\n Number is positive ");
		}
		if(number<0)
		{
			printf("\n Number is negative");
		}
	}
	
	getch();
}
