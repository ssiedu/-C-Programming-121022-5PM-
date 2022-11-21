#include<stdio.h>
void Addition(int a,int b);//function declaration
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	Addition(num1,num2);
	getch();
}
void Addition(int a, int b)
{
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	printf("\n Addition is : %d",a+b);
}
