/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather Temp 10-20 then Cold weather Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	int temp;
	printf("Enter Temperature :");
	scanf("%d",&temp);
	
	if(temp<0)
	printf("Freezing weather");
	else if(temp<10)
	printf("Very Cold weather");
	else if(temp<20)
	printf("Cold weather");
	else if(temp<30)
	printf("Normal in Temp");
	else if(temp<40)
	printf("Its Hot Temp");
	
	else 
	printf("Its Very Hot");
	
}
