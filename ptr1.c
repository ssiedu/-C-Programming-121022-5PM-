#include<stdio.h>
void main()
{
	int num=10;
	int *ptr;
	ptr= &num;
	printf("\n address of number : %u",&num);
	printf("\n address of number : %u",ptr);
	printf("\n address of number : %p",&num);
	printf("\n address of number : %p",ptr);
	printf("\n address of number : %x",&num);
	printf("\n address of number : %x",ptr);
	printf("\n value of number : %d",num);
	printf("\n value of ptr  : %d",*ptr);
	getch();
}
