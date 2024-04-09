/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main()
{
	float basic_S,gross_S,HRA,DA;
	printf("Enter Basic Salary of Employee :");
	scanf("%f",&basic_S);
	
	if(basic_S <= 10000)
	{
		HRA= basic_S*0.2;
		DA= basic_S*0.8;	
	}
	else if (basic_S<=20000)
	{
	
		HRA= basic_S*0.25;
		DA= basic_S*0.9;
	}
	else
	{
		HRA= basic_S*0.3;
		DA= basic_S*0.95;
	}
	gross_S = basic_S + HRA + DA;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross_S);
	

}
