//Convert years into days and months
#include<stdio.h>
int main()
{
	int  days,years, month;
	printf("Enter the years :");
	scanf("%d",&years);
	month = years*12;
	days = years*365;
	printf("years convert into months %d and \ndays %d",month,days);
	return 0;
	
}
