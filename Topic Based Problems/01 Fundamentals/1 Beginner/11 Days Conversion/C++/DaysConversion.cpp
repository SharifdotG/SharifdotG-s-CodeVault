/**
 * @file DaysConversion.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Days Conversion in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int days;

    cout << "Enter days: ";
    cin >> days;

    cout << "Years: " << days / 365 << endl;
    cout << "Remaining Months: " << (days % 365) / 30 << endl;
    cout << "Remaining Weeks: " << ((days % 365) % 30) / 7 << endl;
    cout << "Remaining Days: " << ((days % 365) % 30) % 7 << endl;

    return 0;
}