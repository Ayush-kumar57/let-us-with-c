#include <stdio.h>

int main() {
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    // Input basic salary from the user
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate dearness allowance (40% of basic salary)
    dearness_allowance = 0.40 * basic_salary;

    // Calculate house rent allowance (20% of basic salary)
    house_rent_allowance = 0.20 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Display the results
    printf("\nBasic Salary: %.2f\n", basic_salary);
    printf("Dearness Allowance (DA): %.2f\n", dearness_allowance);
    printf("House Rent Allowance (HRA): %.2f\n", house_rent_allowance);
    printf("\nGross Salary: %.2f\n", gross_salary);

    return 0;
}