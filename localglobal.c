#include<stdio.h>
int a=20;//global
void main()
{
	int a=10;//local in main function
	{
		int a=5;//local for block 
		printf("\n value of a in block : %d",a);//5
	}
	printf("\n value of  a : %d",a);//10
	getch();
}
