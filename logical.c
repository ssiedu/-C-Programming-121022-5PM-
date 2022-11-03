#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);//10
	printf("\n Enter the value of y : ");
	scanf("%d",&y);//20
	
	printf("\n AND : %d",(x>y && x==y));//(10>20 && 10==20) (0 && 0) =0
	printf("\n OR  : %d", (x<y || x!=y));//(10<20 || 10!=20)(1 || 1) = 1
	printf("\n NOT : %d", !(x>y));//(10>20)   (f) // T
	printf("\n AND Not : %d",!(x<y && x==y));//1 && 0 = 0 = 1
	printf("\n OR not  : %d", !(x<y || x==y));// 1 || 0 =1 =0
	printf("\n NOT : %d", !((x>y) || (x==y)));// F || F = F = T
	getch();
	
	
	
}
