//. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
	int num,rem=0,rev;
	printf("Enter number");
	scanf("%d",&num);
	for ( ; num != 0; num /= 10) 
	{
		
		rem=num%10;
		rev=rev*10+rem;
		
		
	}
	printf("%d is reverse",rev);
}
