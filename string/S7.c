// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s1[100];
	char s2[100];
	printf("Enter string :");
	gets(s1);
	printf(" str1 = %s\n",s1);
	strcpy(s2, s1);
	printf("str2 = %s",s2);
	getch();	
}
