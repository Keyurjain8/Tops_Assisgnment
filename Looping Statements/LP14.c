//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
void main()
{
	int num,i,fact=1;
	printf("enter 5 number : ");
	for(i=1;i<=5;i++){
printf("\nenter number %d ",i);
		scanf("%d",&num);
	fact = fact*i;
	}
	printf(" Factorial of numbers \n:");
	printf("%d is factorials of numbers",fact);
		
}
