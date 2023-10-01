/**
 * @file FahrenheittoCelsius.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Fahrenheit to Celsius in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Temperature in Celsius is: %.2lf\n", (fahrenheit - 32) * 5 / 9);

    return 0;
}
