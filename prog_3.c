/* Write a c program to compute the gross salary of an employee by reading his basic pay from the keyboard.
Gross salary = BP + HRA + DA + TA
HR= 10% of BP
TA= 5% of Bp
DA= 15% of Bp*/

#include <stdio.h>

int main() {
    float basicPay, grossSalary, hra, da, ta;

    // Read basic pay from the user
    printf("Enter the basic pay: ");
    scanf("%f", &basicPay);

    // Calculate HRA (10% of basic pay)
    hra = 0.10 * basicPay;

    // Calculate DA (15% of basic pay)
    da = 0.15 * basicPay;

    // Calculate TA (5% of basic pay)
    ta = 0.05 * basicPay;

    // Calculate gross salary
    grossSalary = basicPay + hra + da + ta;

    // Display the gross salary
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}

