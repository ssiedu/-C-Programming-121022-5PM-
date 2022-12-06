#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
};
int main()
{
	struct employee e1;
	
	e1.id=101;
	e1.name="Ram";
	e1.sal=78000;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee salary : %.2f",e1.sal);
	
	getch();
}
