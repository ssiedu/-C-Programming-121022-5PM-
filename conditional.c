#include<stdio.h>
void main()
{
	int a,b,res;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	
	res = (b>a) ? b : a;
	
	printf("\n largest Numbers is : %d",res);
	getch();
	
}
