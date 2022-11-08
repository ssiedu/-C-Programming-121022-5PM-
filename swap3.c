// Swap two values without using +/- operator
#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	x=x*y; // x= 200
	y=x/y; // y=200/20 = 10
	x=x/y; // x= 200/10 = 20
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
	
}
