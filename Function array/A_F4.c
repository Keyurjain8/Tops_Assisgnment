//WAP to find factorial using recursion
#include<stdio.h>
int fact(int num);
int main()
{
	int n;
	printf("Enter number to find factorial:");
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int num)
{
	if(num>=1)
	{
		return num*fact(num-1);
	}
	else{
		return 1;
	}
}

