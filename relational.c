#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter the value of num1 : ");
	scanf("%d",&num1);//20
	printf("\n Enter the value of num2 : ");
	scanf("%d",&num2);//20
	
	printf("\n %d is grater than %d  = %d",num1,num2,num1>num2);//F
	printf("\n %d is less than  %d   = %d",num1,num2,num1<num2);//F
	printf("\n %d is greater than or equal to %d = %d",num1,num2,num1>=num2);//T
	printf("\n %d is less than or equal to %d = %d ",num1,num2,num1<=num2);//T
	printf("\n %d is equal too %d = %d ",num1,num2,num1==num2);//T
	printf("\n %d is not equal too %d = %d ",num1,num2,num1!=num2);//F
	getch();
}
