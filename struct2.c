#include<stdio.h>
typedef struct employee
{
	int id;
	char name[10];
	float sal;
}emp;
int main()
{
	emp e;
	printf("\n Enter Employee id : ");
	scanf("%d",&e.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e.sal);
	
	printf("\n Employee information : \n");
	printf("\n Employee Id : %d",e.id);
	printf("\n Employee Name : %s",e.name);
	printf("\n Employee Salary : %.2f",e.sal);
	
	getch();
		
}
