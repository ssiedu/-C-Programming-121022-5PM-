#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,i,sum=0;
	printf("\n Enter Array size : ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Sorry Unble to allocate memory ");
		exit(0);
	}
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum= sum + *(ptr+i);
	}
	printf("\n Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	printf("\n Sum of array Elements : %d",sum);
	free(ptr);
	getch();
}
