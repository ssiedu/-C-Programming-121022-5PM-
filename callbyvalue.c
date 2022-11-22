#include<stdio.h>
void swap(int a, int b); //function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("Before swap : \n");
	printf("\n value of x : %d",x);//100
	printf("\n value of y : %d",y);//200
	swap(x,y);
	printf("\n After Swap : \n");
	printf("\n value of x : %d",x);//100
	printf("\n value of y : %d",y);//200
	getch();
}
void swap(int a, int b)
{
	printf("\n In Function : \n");
	int temp = a;
	a=b;
	b=temp;
	printf("\n value of a : %d",a);//200
	printf("\n value of b : %d",b);//100
}
