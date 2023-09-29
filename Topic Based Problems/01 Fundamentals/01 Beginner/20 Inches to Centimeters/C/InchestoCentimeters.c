/**
 * @file InchestoCentimeters.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Inches to Centimeters in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 */

#include <stdio.h>

int main() {
    double inches;

    printf("Enter the length in Inches: ");
    scanf("%lf", &inches);

    printf("Length in Centimeters = %.2lf\n", inches * 2.54);

    return 0;
}
