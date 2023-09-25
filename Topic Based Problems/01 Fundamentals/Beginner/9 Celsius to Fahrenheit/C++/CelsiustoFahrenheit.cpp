/**
 * @file CelsiustoFahrenheit.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Celsius to Fahrenheit in C++
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
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << "Temperature in Fahrenheit is: " << fixed << setprecision(2) << (celsius * 9 / 5) + 32 << endl;

    return 0;
}