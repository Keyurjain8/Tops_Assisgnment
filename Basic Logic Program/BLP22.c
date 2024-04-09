#include <stdio.h>
int main() {
    float principal, rate, time, amount, compound_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    amount = principal * pow((1 + rate / 100), time);

   
    compound_interest = amount - principal;

    
    printf("\nPrincipal Amount: $%.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Amount after %.2f years: $%.2f\n", time, amount);
    printf("Compound Interest: $%.2f\n", compound_interest);

    return 0;
}

