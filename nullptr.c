#include<stdio.h>
void main()
{
	int a,b;
	int *ptr=NULL;
	
	if(ptr==NULL)
	{
		a=10;
		ptr=&a;
	}
	if(ptr == NULL)
	{
		b=20;
		ptr=&b;
	}
	printf("\n value of a : %d",a);//10
	printf("\n value of b : %d",b);//gr
	printf("\n value of ptr : %d",*ptr);//10
	getch();
}
