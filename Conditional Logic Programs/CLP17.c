//Write a C program to check whether a triangle can be formed with the given values for the angles
#include<stdio.h>
int main()
{
	int Ta,Tb,Tc,sum;
	printf("Enter three angle of triangle");
	scanf("%d%d%d",&Ta,&Tb,&Tc);
	sum = Ta +Tb + Tc ;
	printf("\nSum of three angle of Triangle is %d",sum);
	(sum==180)?
	printf("\nTriangle is valid\n"):
		printf("\nTriangle is invalid\n");
}
