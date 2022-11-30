#include<stdio.h>
void main()
{
	int num= 10;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	
	printf("\n Address of number : %x",&num);
	printf("\n Address stored in ptr : %x",ptr);
	printf("\n value of number using ptr : %d",*ptr);
	printf("\n Address of ptr : %x",&ptr);
	printf("\n Address stored in pptr : %x",pptr);
	printf("\n value of number using pptr : %d",**pptr);
	printf("\n Address of pptr : %x",&pptr);
	printf("\n Address stored in ppptr : %x",ppptr);
	printf("\n value of number using ppptr : %d",***ppptr);
	
	getch();
}
