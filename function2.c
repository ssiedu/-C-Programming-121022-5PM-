#include<stdio.h>
void square();
void main()
{
	square();
	getch();
}
void square()
{
	int num;
	printf("\n Enter any Number : ");
	scanf("%d",&num);
	printf("\n square of a number : %d",num*num);
}
