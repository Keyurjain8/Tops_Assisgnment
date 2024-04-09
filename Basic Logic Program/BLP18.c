//.Calculate person’s Annual salary
#include<stdio.h>
int main()
{
	float  salary, AnnualSalary;
	printf("Enter the salary :");
	scanf("%f",&salary);
	//annual salary = salary x 12 months
	
	AnnualSalary = salary* 12;
	printf("person’s Annual Salary %f",AnnualSalary);
}
