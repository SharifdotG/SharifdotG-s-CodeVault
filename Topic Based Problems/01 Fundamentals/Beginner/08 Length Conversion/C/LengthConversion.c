/**
 * @file LengthConversion.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Length Conversion in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double meter;

    printf("Enter meter: ");
    scanf("%lf", &meter);

    printf("Centimeter: %.2lf\n", meter * 100);
    printf("Kilometer: %.2lf\n", meter / 1000);
    printf("Mile: %.2lf\n", meter / 1609.34);
    printf("Foot: %.2lf\n", meter * 3.28084);
    printf("Inch: %.2lf\n", meter * 39.3701);

    return 0;
}
