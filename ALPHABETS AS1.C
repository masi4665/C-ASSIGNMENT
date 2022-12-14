#include<stdio.h>
main()
{
	char AB;
	printf("Enter the Alphabate  : ");
	scanf("%c",&AB);
	
	if(AB>='A' && AB<='Z' || AB>='a' && AB<='z')
	{
			switch(AB)
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf("\n%c is Vowel.\n",AB);
					break;
				default:
					printf("\n%c is Consonant.\n",AB);
				
			}
	}
	else
	{
		printf("\n%c is not an alphabate.");
	}



}
