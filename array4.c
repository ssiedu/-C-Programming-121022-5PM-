#include<stdio.h>
void main()
{
	int a[10];
	int i,n;
	printf("\n Enter array size :  ");
	scanf("%d",&n);
	printf("\n Enter Array Elements:\n ");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : %d",i+1,a[i]);
	}
	getch();
}
