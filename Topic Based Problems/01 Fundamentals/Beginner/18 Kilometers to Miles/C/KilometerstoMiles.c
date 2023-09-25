/**
 * @file KilometerstoMiles.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Kilometers to Miles in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double kilometers;

    printf("Enter the distance in Kilometers: ");
    scanf("%lf", &kilometers);

    printf("Distance in Miles = %.2lf\n", kilometers * 0.621371);

    return 0;
}
