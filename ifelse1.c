#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter age of person : ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n Person is Eligible for vote");
	}
	else
	{
		printf("\n Person is not eligible for vote");
	}
	getch();
}
