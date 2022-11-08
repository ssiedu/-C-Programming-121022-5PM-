#include<stdio.h>
void main()
{
	int num,a,b,c,d,sum;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	
	a= num%10;
	b=num/10;
	c=b%10;
	d=b/10;
	
	sum = a+c+d;
	printf("\n sum of three digit number : %d",sum);
	getch();
	
}
