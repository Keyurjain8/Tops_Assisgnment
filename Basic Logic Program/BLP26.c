//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	float f ,c ;
	printf("Enter temperature into fahrenheit :");
	scanf("%f",&f);
	c=(f-32)*0.555;
	printf("\n %.2f Fahrenheit = %.2f Celsius", f,c);
	return 0;
}
