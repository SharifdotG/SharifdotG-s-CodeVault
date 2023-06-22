/**
 * @file temperature_conversion.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief A C program to enter temperature in Fahrenheit and convert it into Celsius.
 *
 * This program first prompts the user to enter the temperature in Fahrenheit. Then, it converts the temperature into Celsius and prints the result.
 */

#include <stdio.h>

int main() {

    float fahrenheit, celsius;

    /**
     * @brief Prompts the user to enter the temperature in Fahrenheit.
     */
    printf("Enter the temperature in Fahrenheit: ");

    /**
     * @brief Reads the temperature from the user.
     *
     * @param fahrenheit The temperature in Fahrenheit.
     */
    scanf("%f", &fahrenheit);

    /**
     * @brief Converts the temperature from Fahrenheit to Celsius.
     *
     * @param fahrenheit The temperature in Fahrenheit.
     * @param celsius The temperature in Celsius.
     */
    celsius = (fahrenheit - 32) * 5 / 9;

    /**
     * @brief Prints the temperature in Celsius.
     *
     * @param celsius The temperature in Celsius.
     */
    printf("The temperature in Celsius is: %f\n", celsius);

    return 0;
}