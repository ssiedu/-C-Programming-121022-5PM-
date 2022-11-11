#include<stdio.h>
void main()
{
	int fnum,snum;
	printf("\n Enter First Number : ");
	scanf("%d",&fnum);
	printf("\n Enter Second Number : ");
	scanf("%d",&snum);
	
	if(fnum==snum)
	printf("\n %d is equal too %d",fnum,snum);
	else if(fnum>snum)
	printf("\n %d is greater than %d ",fnum,snum);
	else
	printf("\n %d is graeter than %d ",snum,fnum);
	getch();
}
