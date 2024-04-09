//Calculate compound interest
#include <stdio.h>

int main() {
    float principal, rate, time, compoundInterest;

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate  ");
    scanf("%f", &rate);

    printf("Enter time period : ");
    scanf("%f", &time);

        compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

   
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
