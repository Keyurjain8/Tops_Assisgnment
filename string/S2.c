//Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int l=0;
	char s[100];
	printf("Separate the individual characters from a string :\n");
	printf("------------------------------------------------------\n");
	printf("Enter your String :");
	fgets(s, sizeof s, stdin);
	printf("The Character of string are :");
	while(s[l]!='\0')
	{
		printf("%c",s[l]);
		l++;
	}
	printf("\n");
	printf("\nLength of string is %d",l);
	
	 
}

