//30.WAP to convert years into days and days into year
#include<stdio.h>
int main()
{
	
{
	int years, days;
	//years into days 
	printf(" Enter years :");
	scanf("%d",&years);
	days = years*365;
	printf("years convert into days %d",days);
	
}


  float years, days;
//days into years
   printf(" \nEnter Days:");
	scanf("%f",&days);
	years = days/365;
	printf("\nDays Convert into years %.2f",years);
	return 0;

}

