#include<stdio.h>
void main()
{
	int fnum,snum,tnum;
	printf("\n Enter First Number : ");
	scanf("%d",&fnum);
	printf("\n Enter Second Number : ");
	scanf("%d",&snum);
	printf("\n Enter Third Number : ");
	scanf("%d",&tnum);
	
	if(fnum>snum && fnum>tnum)//(a>b && a>c)
	printf("\n %d is greater than %d and %d",fnum,snum,tnum);
	else if(snum>tnum)//(b>c)
	printf("\n %d is greater tha %d and %d ",snum,fnum,tnum);
	else
	printf("\n %d is greater tha %d and %d ",tnum,fnum,snum);
	
	getch();
}
