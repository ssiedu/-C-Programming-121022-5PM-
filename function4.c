#include<stdio.h>
int square();
void main()
{
	int res;
	res=square();
	printf("\n square of a number is : %d",res);
	getch();
}
int square()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	return num*num;
}
