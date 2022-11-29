#include<stdio.h>
void main()
{
	int a,b,sum;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("\n Enter First Value : ");
	scanf("%d",&a);
	printf("\n Enter Second value : ");
	scanf("%d",&b);
	sum = *ptr1 + *ptr2;
	printf("\n sum of two numbers : %d",sum);
	getch();
	
}
