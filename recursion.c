#include<stdio.h>
int fact(int n); // function declaration
void main()
{
	int num,res;
	printf("\n Enter any Number : ");
	scanf("%d",&num);//5
	res=fact(num);//5
	printf("\n factorial of a number is : %d",res);
	getch();
}
int fact(int n)//n=5//n=4//n=3//n=2//n=1//n=0
{
	if(n==0)//5==0//4==0//3==0//2==0//1==0//0==0
		return 1;
	else
	 	return n*fact(n-1);
	//5*fact(4)//5*4*fact(3)//5*4*3*fact(2)//5*4*3*2*fact*(1)//5*4*3*2*1*1
}
