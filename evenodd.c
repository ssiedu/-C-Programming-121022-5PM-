#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
	
		printf("\n Number is Even ");
		//printf("Hello");
	}
	else
	
		printf("\n Number is Odd");
	
	getch();
}
