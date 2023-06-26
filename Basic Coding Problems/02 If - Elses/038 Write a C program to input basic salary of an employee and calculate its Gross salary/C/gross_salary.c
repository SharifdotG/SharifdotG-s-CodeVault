/**
 * @file gross_salary.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief Calculates the gross salary of an employee based on their basic salary.
 * 
 * This program calculates the gross salary of an employee based on their basic salary.
 *
 * The program first asks the user to enter their basic salary.
 * Then, the program calculates the HRA and DA for the employee based on their basic salary.
 * The HRA and DA are calculated as follows:
 *
 * * If the basic salary is <= 10000, then the HRA is 20% and the DA is 80%.
 * * If the basic salary is <= 20000, then the HRA is 25% and the DA is 90%.
 * * If the basic salary is > 20000, then the HRA is 30% and the DA is 95%.
 *
 * The gross salary is then calculated as the sum of the basic salary, HRA, and DA.
 * The gross salary is then printed to the console.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The basic salary of the employee.
     */
    double basic_salary;

    /**
     * @brief The gross salary of the employee.
     */
    double gross_salary;

    /**
     * @brief The house rent allowance of the employee.
     */
    double hra;

    /**
     * @brief The dearness allowance of the employee.
     */
    double da;

    /**
     * @brief Prompts the user to enter the basic salary.
     */
    printf("Enter the basic salary: ");

    /**
     * @brief Reads the basic salary from the user.
     */
    scanf("%lf", &basic_salary);

    /**
     * @brief Calculates the house rent allowance.
     */
    if (basic_salary <= 10000) {
        hra = basic_salary * 0.2;
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;
    } else {
        hra = basic_salary * 0.3;
    }

    /**
     * @brief Calculates the dearness allowance.
     */
    da = basic_salary * 0.8;

    /**
     * @brief Calculates the gross salary.
     */
    gross_salary = basic_salary + hra + da;

    /**
     * @brief Prints the gross salary.
     */
    printf("Gross salary: %.2lf\n", gross_salary);

    return 0;
}