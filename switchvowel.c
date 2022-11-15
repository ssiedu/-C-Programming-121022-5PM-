#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter any character choice : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("Vowel");
			break;
		case 'i':
			printf("Vowel");
			break;
		case 'o':
			printf("Vowel");
			break;
		case 'u':
			printf("Vowel");
			break;
		default:
			printf("Consonent");
			break;
	}
	getch();
	
}
