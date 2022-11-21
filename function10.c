//function with argument and with return value
#include<stdio.h>
float Addition(float num1, int num2);
void main()
{
	float x,res;
	int y;
	
	printf("\n Enter the value of x : ");
	scanf("%f",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	res= Addition(x,y);
	printf("\n Addition is : %.2f",res);
	getch();
}
float Addition(float num1 , int num2)
{
	return num1+num2;
}
