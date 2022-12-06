#include<stdio.h>
#include<string.h>
union employee
{
	int id;
	char name[10];
	float sal;
}emp;
int main()
{
	emp.id=101;
	printf("\n Employee Id : %d",emp.id);
	strcpy(emp.name,"ram");
	printf("\n Employee Name : %s",emp.name);
	emp.sal=45000;
	printf("\n Employee Sal : %.2f",emp.sal);
	printf("\n size of union : %d",sizeof(emp));
	getch();
}
