#include <stdio.h>

int main() {
    float salary, insurance_premium, loan_installment, remaining_salary;

    // Input monthly salary from the user
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    
    insurance_premium = salary * 0.1;

    
    remaining_salary = salary - insurance_premium;

    
    loan_installment = remaining_salary * 0.1;

   
    remaining_salary -= loan_installment;

   
    printf("\nYour monthly salary: $%.2f\n", salary);
    printf("Insurance premium (10%%): $%.2f\n", insurance_premium);
    printf("Loan installment (10%% of remaining salary): $%.2f\n", loan_installment);
    printf("Remaining salary after deductions: $%.2f\n", remaining_salary);

    return 0;
}

