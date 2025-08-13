#include <stdio.h>

int main() {
    float grossSalary, allowance, deduction, netSalary;

    printf("Enter gross salary: ");
    scanf("%f", &grossSalary);

    allowance = 0.10f * grossSalary;
    deduction = 0.03f * grossSalary;

    netSalary = grossSalary + allowance - deduction;

    printf("Net salary is: %.2f\n", netSalary);

    return 0;
}
