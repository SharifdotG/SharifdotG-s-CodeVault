/**
 * @file simple_interest.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to enter Principal, Time and Rate of Interest and calculate Simple Interest.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The principal amount.
     */
    float principal;

    /**
     * @brief The time period in years.
     */
    float time;

    /**
     * @brief The interest rate.
     */
    float rate_of_interest;

    /**
     * @brief The simple interest.
     */
    float simple_interest;

    /**
     * @brief Prompts the user to enter the principal amount.
     */
    printf("Enter the principal amount: ");

    /**
     * @brief Reads the principal amount from the user.
     */
    scanf("%f", &principal);

    /**
     * @brief Prompts the user to enter the time period in years.
     */
    printf("Enter the time period in years: ");

    /**
     * @brief Reads the time period from the user.
     */
    scanf("%f", &time);

    /**
     * @brief Prompts the user to enter the interest rate.
     */
    printf("Enter the interest rate: ");

    /**
     * @brief Reads the interest rate from the user.
     */
    scanf("%f", &rate_of_interest);

    /**
     * @brief Calculates the simple interest.
     */
    simple_interest = principal * time * rate_of_interest / 100;

    /**
     * @brief Prints the simple interest.
     */
    printf("The simple interest is: %f\n", simple_interest);

    /**
     * @brief Returns 0.
     */
    return 0;
}