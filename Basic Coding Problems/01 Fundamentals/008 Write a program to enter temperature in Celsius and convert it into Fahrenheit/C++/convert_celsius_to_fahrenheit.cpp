/**
 * @brief A C++ program to enter temperature in Celsius and convert it into Fahrenheit.
 *
 * @author SharifdotG
 * @date 2023-07-03
 *
 * @file convert_celsius_to_fahrenheit.cpp
 */

#include <iostream>

using namespace std;

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
    cout << "Enter temperature in Celsius: ";

    /**
     * @brief Read the temperature from the user.
     */
    cin >> celsius;

    /**
     * @brief Calculate the temperature in Fahrenheit.
     */
    fahrenheit = (celsius * 9 / 5) + 32;

    /**
     * @brief Print the temperature in Fahrenheit.
     */
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    /**
     * @brief Return 0 on success.
     */
    return 0;
}