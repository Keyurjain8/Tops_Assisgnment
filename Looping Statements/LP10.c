//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>
void main()
{
	int n,sum,digit1,digit2;
	printf("Enter the number :");
	scanf("%d",&n);
	digit1=n%10;
	if (n < 0) {
        n = -n;
    }
        while((n>=10)){
        	n=n/10;
		}
		digit2=n;
		sum=digit1+digit2;
		printf("summation of first and last Digit %d",sum);
		
		
}
