/**
 * @file PowerCalculation.c
 * @brief Power Calculation in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * 
 * This program calculates the power of a base to an exponent in C.
 */

#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    printf("Power of %.2lf to the %.2lf is: %.2lf\n", base, exponent, pow(base, exponent));

    return 0;
}
