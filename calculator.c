#include<stdio.h>
void main()
{
	int ch,num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: 
			printf("\n Addition is : %d",num1+num2);
			break;
		case 2:
			printf("\n Subtraction is : %d",num1-num2);
			break;
		case 3:
			printf("\n Multiplication is : %d",num1*num2);
			break;
		case 4:
			printf("\n Division is : %.2f",(float)num1/num2);
			break;
		default:
			printf("\n Please Enter valid choice");
			break;
			
	}
	getch();
}
