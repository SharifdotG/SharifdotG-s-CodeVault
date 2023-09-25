/**
 * @file ArithmeticOperations.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Arithmetic Operations in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Sum of " << firstNumber << " and " << secondNumber << " is: " << firstNumber + secondNumber << endl;
    cout << "Difference of " << firstNumber << " and " << secondNumber << " is: " << firstNumber - secondNumber << endl;
    cout << "Product of " << firstNumber << " and " << secondNumber << " is: " << firstNumber * secondNumber << endl;
    cout << "Quotient of " << firstNumber << " and " << secondNumber << " is: " << firstNumber / secondNumber << endl;

    return 0;
}