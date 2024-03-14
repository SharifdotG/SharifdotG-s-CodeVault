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

    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    cout << "After swapping: " << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    return 0;
}