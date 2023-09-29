/**
 * @file FahrenheittoCelsius.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Fahrenheit to Celsius in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double fahrenheit;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Temperature in Celsius is: " << fixed << setprecision(2) << (fahrenheit - 32) * 5 / 9 << endl;

    return 0;
}