#include<stdio.h>
void main()
{
	FILE *fp;
	char text[25];
	fp=fopen("myfile3.txt","w");
	fputs("Welcome to ssi",fp);
	fclose(fp);
	fp=fopen("myfile3.txt","r");
	printf("%s",fgets(text,20,fp));
	fclose(fp);
	getch();
}
