#include<stdio.h>
void main()
{
	FILE *fp;
	char text[20];
	fp=fopen("myfile1.txt","w");
	fprintf(fp,"Welcome to ssi Digital");
	fclose(fp);
	fp=fopen("myfile1.txt","r");
	while((fscanf(fp,"%s",text))!=EOF)
	{
		printf("%s",text);
	}
	fclose(fp);
	getch();
}
