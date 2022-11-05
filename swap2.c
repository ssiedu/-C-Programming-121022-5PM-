#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	
	printf("\n First Number : %d",num1);
	printf("\n Second Number : %d",num2);
	
	getch();
}
