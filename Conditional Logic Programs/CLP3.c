//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year :");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)
	{
		printf("%d Year is Leap year",year);
	}
	else
	{
		printf("%d Year is not a Leap year",year);
	}
}

