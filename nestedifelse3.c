#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	if(num1!=num2)
	{
		printf("\n %d is not equal to %d",num1,num2);
		if(num1>num2)
		{
			printf("\n num1 is greater than num2");
		}
		else
		{
			printf("\n num2 is greater than num1");
		}
		
	}
	else
	{
		printf("\n %d is equal to %d",num1,num2);
	}
	getch();
}
