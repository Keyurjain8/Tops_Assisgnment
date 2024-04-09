//Calculate person’s insurance premium based on salary c language
#include<stdio.h>
int main()
{
	float salary, premium;
	printf("Enter the salary :");
	scanf("%f",&salary);
	//20% preimum rate for salary
	
	premium = salary*0.2;
	printf("person’s insurance premium based on salary %f",premium);
	return 0;
}
