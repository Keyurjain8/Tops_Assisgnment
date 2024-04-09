//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)
#include<stdio.h>
void main()

{
	int n1,n2;
	char choice;
	printf("Enter :\n\t +Addition\n\t-Subtraction\n\t* multiplication\n\t/ division\n\t %% modulo :");
	printf("\n\n===============================================\n\n");
	printf("Enter your first number:");
	scanf("%d",&n1);
	printf("Enter your choice:");
	scanf(" %c",&choice);
	printf("Enter your second number:");
	scanf("%d",&n2);
	printf("\n\n===============================================\n\n");
	switch(choice){
		case '+':
		printf("Addition of %d and %d is %d",n1,n2,n1+n2);
		break;
			
		case '-':
		printf("Subtraction of %d and %d is %d",n1,n2,n1-n2);
		break;
		case '*':
		printf("Multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
		case '/':
		if(n2==0){
			printf("Can't divide by zero");
		}
		else{
			printf("Division of %d and %d is %d",n1,n2,n1/n2);
		}
		
		
		break;
		case '%':
		printf("Modulo of %d and %d is %d",n1,n2,n1%n2);
		break;
		default :
		printf("Invalid choice");
	}
}
