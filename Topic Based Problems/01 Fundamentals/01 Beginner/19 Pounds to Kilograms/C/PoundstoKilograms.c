/**
 * @file PoundstoKilograms.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Pounds to Kilograms in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double pounds;

    printf("Enter the weight in Pounds: ");
    scanf("%lf", &pounds);

    printf("Weight in Kilograms = %.2lf\n", pounds * 0.453592);

    return 0;
}
