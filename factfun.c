#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	res= fact(num);
	printf("\n factorial is : %d",res);
	getch();	
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f = f *i;//1*1=fact=1//fact = 1*2=2//fact=2*3=6//fact=6*4=24//fact=24*5=120
		
	}
	return f;
}
