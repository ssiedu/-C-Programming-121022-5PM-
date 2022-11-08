// swap two value without using arithmetic operator 
#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	x=x^y;
	y=x^y;
	x=x^y;
	
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	
	getch();
}
