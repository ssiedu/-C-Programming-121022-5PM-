#include<stdio.h>
void main()
{
	int a[10];
	int n,i;
	printf("\n Enter array size");
	scanf("%d",&n);
	printf("\n Enter array Elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0] < a[i])
		 	a[0]=a[i];
	}
	printf("\n Largest element in array : %d",a[0]);
	getch();
	
}
