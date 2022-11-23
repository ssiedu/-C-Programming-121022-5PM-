#include<stdio.h>
int sum(int n); // function declaration
void main()
{
	int number,res;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	res=sum(number);
	printf("\n Sum of Natural Number : %d",res);
	getch();
}
int sum(int n)
{
	if(n==0)
		return 0;
	else 
		return n+sum(n-1);
}
