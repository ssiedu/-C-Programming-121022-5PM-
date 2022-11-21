#include<stdio.h>
float simple_interest();
void main()
{
	float res;
	res=simple_interest();
	printf("\n simple interest : %.2f",res);
	getch();
}
float simple_interest()
{
	float p,r,t;
	printf("\n Enter principle amount : ");
	scanf("%f",&p);
	printf("\n Enter rate of interest : ");
	scanf("%f",&r);
	printf("\n Enter time in year : ");
	scanf("%f",&t);
	return (p*r*t)/100;
}
