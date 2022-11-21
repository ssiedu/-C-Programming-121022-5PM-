//function without argument and with return value
#include<stdio.h>
int Addition();//function declaration
void main()
{
	int res;
	res=Addition();
	printf("\n addition is : %d",res);
	getch();
}
int Addition()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	c=a+b;
	return c;
}
