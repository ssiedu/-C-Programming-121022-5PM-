//putw and getw
#include<stdio.h>
void main()
{
	FILE *fp;
	int n,i;
	fp=fopen("myfile5.txt","w");
	for(i=1;i<=10;i++)
		putw(i,fp);
	fclose(fp);
	fp=fopen("myfile5.txt","r");
	for(i=1;i<=10;i++)
	{
		n=getw(fp);
		printf("\t%d",n);
	}
	fclose(fp);
	getch();
}
