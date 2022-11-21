//function with argument and with return value
#include<stdio.h>
int Addition(int num1, int num2);
void main()
{
	int x,y,res;
	
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	res= Addition(x,y);
	printf("\n Addition is : %d",res);
	getch();
}
int Addition(int num1 , int num2)
{
	return num1+num2;
}
