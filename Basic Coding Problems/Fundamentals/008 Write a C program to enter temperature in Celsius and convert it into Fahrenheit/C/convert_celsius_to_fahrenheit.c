/**
 * @brief A C program to enter temperature in Celsius and convert it into Fahrenheit.
 *
 * @author SharifdotG
 * @date 2023-06-22
 *
 * @file convert_celsius_to_fahrenheit.c
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The temperature in Celsius.
     */
    float celsius;

    /**
     * @brief The temperature in Fahrenheit.
     */
    float fahrenheit;

    /**
     * @brief Prompt the user to enter the temperature in Celsius.
     */
    printf("Enter temperature in Celsius: ");

    /**
     * @brief Read the temperature from the user.
     */
    scanf("%f", &celsius);

    /**
     * @brief Calculate the temperature in Fahrenheit.
     */
    fahrenheit = (celsius * 9 / 5) + 32;

    /**
     * @brief Print the temperature in Fahrenheit.
     */
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);

    /**
     * @brief Return 0 on success.
     */
    return 0;
}