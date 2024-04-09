//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("Enter Selling price : ");
	scanf("%d",&sp);
	printf("Enter cost price : ");
	scanf("%d",&cp);
	
	if(sp>cp){
		profit = sp-cp;
	printf("\nProfit is %d");
	
	}
	else 
	{
		loss=cp-sp;
		printf("loss is %d");
	
	}
	
	
	}
