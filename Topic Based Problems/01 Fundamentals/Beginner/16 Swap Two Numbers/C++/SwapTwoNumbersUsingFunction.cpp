/**
 * @file SwapTwoNumbersUsingFunction.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Swap Two Numbers in C++ using function
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
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Before swapping: " << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    swap(firstNumber, secondNumber);

    cout << "After swapping: " << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    return 0;
}