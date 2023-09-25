/**
 * @file LengthConversion.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Length Conversion in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    double meter;

    cout << "Enter meter: ";
    cin >> meter;

    cout << "Centimeter: " << meter * 100 << endl;
    cout << "Kilometer: " << meter / 1000 << endl;
    cout << "Mile: " << meter / 1609.34 << endl;
    cout << "Foot: " << meter * 3.28084 << endl;
    cout << "Inch: " << meter * 39.3701 << endl;

    return 0;
}