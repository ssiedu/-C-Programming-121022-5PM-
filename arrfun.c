#include<stdio.h>
void getarray(int a[]);// function declaration
void main()
{
	int arr[5]={11,22,33,44,55};
	getarray(arr);
	getch();
}
void getarray(int a[])
{
	int i;
	printf("Array Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : ",i+1);
		printf("%d",a[i]);
	}
}
