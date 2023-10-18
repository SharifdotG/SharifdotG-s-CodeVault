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