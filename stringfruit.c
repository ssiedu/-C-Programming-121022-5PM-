#include<stdio.h>
#include<string.h>
void main()
{
	char fruit[10] = "mango";
	char f[10];
	do
	{
		printf("\n Enter Fruit : ");
		scanf("%s",&f);
	}while(strcmp(f,fruit)!=0);
	printf("you are correct !");
}
