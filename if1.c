#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter the age of person : ");
	scanf("%d",&age);
	
	if(age>17)
	{
		printf("\n Person is Eligible for vote ");
	}
	if(age<18 && age>0)
	{
		printf("\n Person is not Eligible for vote");
	}
	if(age<=0)
	{
		printf("\n Person does not Exist");
	}
	
	//printf("\n Program End");
	getch();
}
