#include<stdio.h>
void main()
{
	int a,b,c,res;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	
	//res= (a>b)  ? (a>c)? a :c : (b>c)? b : c;
	res= (a>b && a>c) ? a : (b>c) ? b :c ;
	
	printf("\n Largest Number is : %d",res);
	getch();
}
