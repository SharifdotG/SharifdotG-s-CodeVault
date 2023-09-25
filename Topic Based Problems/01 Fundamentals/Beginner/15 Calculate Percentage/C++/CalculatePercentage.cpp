/**
 * @file CalculatePercentage.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Calculate Percentage in C++
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
    double number, totalNumber;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter total number: ";
    cin >> totalNumber;

    cout << "Percentage of " << number << " is: " << fixed << setprecision(2) << (number / totalNumber) * 100 << "%" << endl;

    return 0;
}