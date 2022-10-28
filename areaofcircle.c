#include<stdio.h>
void main()
{
	float r;//declaration
	float area;
	printf("\n Enter radius of circle : ");
	scanf("%f",&r);
	area= 3.14*r*r;
	printf("\n area of circle : %.2f",area);
	getch();
}
