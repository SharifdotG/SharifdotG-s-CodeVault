/**
 * @file CelsiustoFahrenheit.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Celsius to Fahrenheit in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    printf("Temperature in Fahrenheit is: %.2lf\n", (celsius * 9 / 5) + 32);

    return 0;
}
