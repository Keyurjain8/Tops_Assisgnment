//Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>
int main()
{
	int a , b;
	printf("Enter first number ",a);
	scanf("%d",&a);
	printf("Enter second number",b);
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("Both are equal");
		
	}
	else {
		printf("\nBoth are different");
		
	}
	return 0;
	
	
}
