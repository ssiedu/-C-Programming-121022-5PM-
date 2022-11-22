#include<stdio.h>
void main()
{
	int i,num,fact=1;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact = fact *i;//1*1=fact=1//fact = 1*2=2//fact=2*3=6//fact=6*4=24//fact=24*5=120
		
	}
	printf("\n factorial is : %d",fact);
	getch();
	
}
