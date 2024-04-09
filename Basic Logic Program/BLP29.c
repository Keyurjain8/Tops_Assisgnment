//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	int minutes,seconds, hours;
	printf("Enter minutes :");
	scanf("%d",&minutes);
	seconds = minutes*60;
	hours = minutes/60;
	printf("Minutes into seconds %d and \nhours %d", seconds,hours);
	return 0;
	
}
