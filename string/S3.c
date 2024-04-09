//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int l,i;
	char s[100];
	printf("Print individual characters of string in reverse order :\n");
	printf("------------------------------------------------------\n");
	printf("Enter your String :");
	fgets(s, sizeof s, stdin);
	l=strlen(s);
	printf("Lenght of string is %d\n",l);
	
	printf("The Character of string are :");
     for(i=l;i>=0;i--)
	{
		printf("%c",s[i]);
		l++;
	}
	printf("\n");
}
	

