/**
 * @file SquareRoot.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Square Root in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    double number;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Square root of %.2lf is: %.2lf\n", number, sqrt(number));

    return 0;
}
