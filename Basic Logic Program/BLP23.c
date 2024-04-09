//23.WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int a=40,b=10 ;
 printf("\nbeforeswap a=%d b=%d",a,b);
 a =a*b;
 b =a/b;
 a =a/b;
 printf("\nafterswap a=%d b=%d",a,b);
 return 0;
}
