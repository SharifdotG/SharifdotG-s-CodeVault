/**
 * @file temperature_conversion.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief A C++ program to enter temperature in Fahrenheit and convert it into Celsius.
 *
 * This program first prompts the user to enter the temperature in Fahrenheit. Then, it converts the temperature into Celsius and prints the result.
 *
 */

#include <iostream>

using namespace std;

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter the temperature in Fahrenheit, converts the temperature to Celsius, and prints the result.
 */
int main() {

    float fahrenheit, celsius;

    /**
     * @brief Prompts the user to enter the temperature in Fahrenheit.
     */
    cout << "Enter the temperature in Fahrenheit: ";

    /**
     * @brief Reads the temperature from the user.
     *
     * @param fahrenheit The temperature in Fahrenheit.
     */
    cin >> fahrenheit;

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
    cout << "The temperature in Celsius is: " << celsius << endl;

    return 0;
}