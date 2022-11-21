#include<stdio.h>
int square(int n);
void main()
{
	int number,res;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	res=square(number);
	printf("\n square of a number is : %d",res);
	getch();
	
}
int square(int n)
{
	return n*n;
}
