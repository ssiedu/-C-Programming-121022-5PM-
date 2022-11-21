#include<stdio.h>
void square(int n);
void main()
{
	int number;
	printf("\n Enter any Number : ");
	scanf("%d",&number);
	square(number);
	getch();
}
void square(int n)
{
	printf("\n value of n : %d",n);
	printf("\n square of a number : %d",n*n);
}

