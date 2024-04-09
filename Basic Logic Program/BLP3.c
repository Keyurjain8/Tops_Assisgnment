//WAP to Find Area And Circumference of Circle = pi.r2 , 2.pi.r
#include<stdio.h>
int main()
{
	float  radius , area , circumference;
	printf("Enter the Radius ", radius);
	scanf("%f",&radius);
	
	//area of cirle =pi.r2
	 area = 3.14 * radius * radius;
	  printf("Area of Circle %.2f",area);
	  
	  //circumference of circle
	  circumference = 2 * 3.14 * radius;
	  printf("\nCircumference  Circle %.2f",circumference);
	  
}
