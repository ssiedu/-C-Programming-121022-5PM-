#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile4.txt","w+");
	fputs("This is c class",fp);
	fseek(fp,8,SEEK_SET);
	fputs("Python class",fp);
	fclose(fp);
	getch();
	
}
