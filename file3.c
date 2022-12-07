#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	int id;
	char name [10];
	float sal;
	fp=fopen("Emp.txt","a");
	if(fp==NULL)
	{
		printf("\n Sorry ! file does not exist");
		exit(0);
	}
	printf("\n Enter Employee Id : ");
	scanf("%d",&id);
	fprintf(fp,"\nId = %d\n",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name = %s\n",name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&sal);
	fprintf(fp,"Salary = %.2f\n",sal);
	getch();
}
