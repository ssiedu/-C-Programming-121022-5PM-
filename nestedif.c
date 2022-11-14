#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	if(number>10)
	{
		printf("\n Number is greater than 10 ");
		if(number < 50)
		{
			printf("\n Number is less than 50 but greater than 10");
		}
	}
	getch();
}
