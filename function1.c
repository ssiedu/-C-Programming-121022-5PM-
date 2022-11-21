//funtion without argument and without return value
#include<stdio.h>
void Addition();//function declaration

void main()
{

	Addition();//function call
	getch();
}
void Addition()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Addition is : %d",a+b);
}

