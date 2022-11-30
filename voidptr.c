#include<stdio.h>
void main()
{
	int i;
	char c;
	float f;
	void *ptr;
	
	ptr=&i;
	i=10;
	printf("\n value of i : %d ",i);//10
	printf("\n value of ptr : %d",*(int*)ptr);//10
	
	ptr = &c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*(char*)ptr);//A
	
	ptr=&f;
	f=12.33;
	printf("\n value of f : %.2f",f);//12.33
	printf("\n value of fptr : %.2f",*(float*)ptr);//12.33
	
	getch();
	
	
	
	
}
