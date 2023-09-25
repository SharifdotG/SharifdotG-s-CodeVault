/**
 * @file PoundstoKilograms.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Pounds to Kilograms in C++
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
    double pounds;

    cout << "Enter the weight in Pounds: ";
    cin >> pounds;

    cout << fixed << setprecision(2) << "Weight in Kilograms = " << pounds * 0.453592 << endl;

    return 0;
}