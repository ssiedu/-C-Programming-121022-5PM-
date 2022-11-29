#include<stdio.h>
void main()
{
	int n,res;
	int *ptr=&n;// pointer initialization
	printf("\n Enter any number : ");
	scanf("%d",&n);
	res=*ptr * *ptr;
	printf("\n square of a number : %d",res);
	getch();
}
