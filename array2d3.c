#include<stdio.h>
void main()
{
	int a[2][3]= {11,22,33,44,55,66};
	int i,j;
	for(i=0;i<2;i++) // row
	{
		for(j=0;j<3;j++)//column
		{
				printf("\t%d",a[i][j]);	
		}
		printf("\n\n");
	}

	getch();
}
