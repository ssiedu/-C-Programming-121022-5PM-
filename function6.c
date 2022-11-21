#include<stdio.h>
void Addition(int a,int b);//function declaration
void main()
{
	int a,b;//actual argument
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	Addition(b,a);
	getch();
}
void Addition(int a, int b)//formal argument
{
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	printf("\n Addition is : %d",a+b);
}
