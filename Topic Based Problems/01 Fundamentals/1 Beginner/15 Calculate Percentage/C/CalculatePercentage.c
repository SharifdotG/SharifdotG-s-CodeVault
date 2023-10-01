/**
 * @file CalculatePercentage.c
 * @brief Calculate Percentage in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>

int main() {
    double number, totalNumber;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Enter total number: ");
    scanf("%lf", &totalNumber);

    printf("Percentage of %.2lf is: %.2lf%%\n", number, (number / totalNumber) * 100);

    return 0;
}
