//dynamic calculator
#include<stdio.h>
int main()
{
	int no1,no2;
	char choice;
	printf("Enter\n\t+ for Addititon\n\t- for Subtraction\n\t* for Multiplication\n\t/ for Divison\n\t%% for Modulo");
	printf("\n\n=================================\n\n");
	printf("\nEnter your first number");
	scanf("%d",&no1);
	printf("\nEnter your operator");
	scanf(" %c",&choice);
	printf("\nEnter your second number");
	scanf("%d",&no2);
	printf("\n\n==========================\n\n");
	switch(choice)
	{
		case '+':
			printf("Addition of %d and %d is %d",no1,no2,no1+no2);
			break;
		case '-':
			printf("Subtraction of %d and %d is %d",no1,no2,no1-no2);
			break;	
		case '*':
			printf("Multiplication of %d and %d is %d",no1,no2,no1*no2);
			break;
		case '/':
			if(no2==0)
			{
				printf("Can't Divided by zero");
			}
			else{
				printf("Divison of %d and %d is %d",no1,no2,no1/no2);
			}
			break;
			case '%':
			    printf("Multiplication of %d and %d is %d",no1,no2,no1%no2);
			    break;
			default:
				printf("enter valid operator");
			
	}
	
	
	
}
