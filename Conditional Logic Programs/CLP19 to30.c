/*19-30.Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, 
and unit consumed by the user shouldbe captured from the keyboard to display the total amount to be paid to the customer. 
The charge are as follow :*/
#include <stdio.h>
int main()
{
	int Customer_ID;
	
	float Total_amount , charge_rate,units;
	printf("Enter customer ID :");
	scanf("%d",&Customer_ID);
	
	printf("Enter Units consumed :");
	scanf("%f",&units);
	
	
	
	if(units < 350 ){
		charge_rate =1.20;
	}
	else if(units <600)
	{
		charge_rate=1.50;
	}
	else if(units<800)
	{
		charge_rate=1.80;
		
	}
	else {
		charge_rate=2.00;
	}
	 printf("Charge Rate: $%.2f per unit\n", charge_rate);
   
   Total_amount = units * charge_rate;
   
   if(Total_amount > 800) {
        Total_amount += Total_amount * 0.18;
    }

    
    if(Total_amount < 256) {
        Total_amount = 256;
    }
    printf("\nCustomer ID: %d\n", Csustomer_ID);

    printf("Charge Rate: Rs. %.2f per unit\n", charge_rate);
    
		 printf("Total Amount to be Paid: $%.2f\n",Total_amount);
	}

		
	 
	 
	 
	
	


