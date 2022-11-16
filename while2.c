#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	printf("\n Natural Numbers : \n");
	i=1;
	while(i<=n)
	{
		printf("\t%d",i);
		i++;
	}
	getch();
}
