#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber, temp;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Before swapping: " << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << "After swapping: " << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    return 0;
}