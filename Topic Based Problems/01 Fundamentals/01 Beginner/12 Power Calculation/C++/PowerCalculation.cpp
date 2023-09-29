/**
 * @file PowerCalculation.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Power Calculation in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Power of " << base << " to the " << exponent << " is: " << fixed << setprecision(2) << pow(base, exponent) << endl;

    return 0;
}