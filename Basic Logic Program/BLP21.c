//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable.
#include<stdio.h>
int main()
{


{
	int n1 ,n2 ;
	printf("before swapEnter the first and second number :");
	scanf("%d %d",&n1, &n2);
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nAfterswapb two numbers %d %d",n1 , n2);
	
}



int a=10,b=20 ;
 printf("\nbeforeswap a=%d b=%d",a,b);
 a =a+b;
 b =a-b;
 a =a-b;
 printf("\nafterswap a=%d b=%d",a,b);
 return 0;
}
