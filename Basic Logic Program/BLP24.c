#include <stdio.h>

int main() {
    float total_salary = 0, average_salary;
    float salary1, salary2, salary3, salary4, salary5;
    

   
    
    printf("Enter salary of employee 1: ");
    scanf("%f", &salary1);

   
    printf("Enter salary of employee 2: ");
    scanf("%f", &salary2);

    
    printf("Enter salary of employee 3: ");
    scanf("%f", &salary3);

    
    
    printf("Enter salary of employee 4: ");
    scanf("%f", &salary4);

    
    
    printf("Enter salary of employee 5: ");
    scanf("%f", &salary5);

    
    total_salary = salary1 + salary2 + salary3 + salary4 + salary5;

   
    average_salary = total_salary / 5;

    printf("\nTotal Salary of all employees: $%.2f\n", total_salary);
    printf("Average Salary of all employees: $%.2f\n", average_salary);

    return 0;
}

