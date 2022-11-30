#include<stdio.h>
void main()
{
	int i;
	char c;
	float f;
	
	int *iptr=NULL;
	char *cptr = NULL;
	float *fptr=NULL;
	
	iptr=&i;
	i=10;
	printf("\n value of i : %d ",i);//10
	printf("\n value of ptr : %d",*iptr);//10
	
	cptr = &c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*cptr);//A
	
	fptr=&f;
	f=12.33;
	printf("\n value of f : %.2f",f);//12.33
	printf("\n value of fptr : %.2f",*fptr);//12.33
	
	getch();
	
	
	
	
}
