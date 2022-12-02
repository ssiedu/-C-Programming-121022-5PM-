#include<stdio.h>
void main()
{
	char str[11]="Ssidigital";
	int i=0;
	int count=0;
	while(i<=11)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u'|| str[i]=='i')
		{
			count++;//1//2//3//4
		}
		i++;
	}
	printf("Total number of vowel : %d",count);
	getch();
}
