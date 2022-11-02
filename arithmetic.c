#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	printf("\n Addition     %d + %d   : %d",num1,num2,num1+num2);
	printf("\n Subtraction %d - %d    : %d",num1,num2,num1-num2);
	printf("\n Multiplication %d * %d : %d",num1 , num2, num1*num2);
	printf("\n Division 	%d / %d   : %f",num1,num2,(float)num1/num2);
	printf("\n Modulus  (%d) (%) (%d) : %d",num1,num2,num1%num2);
	
	getch();
}
