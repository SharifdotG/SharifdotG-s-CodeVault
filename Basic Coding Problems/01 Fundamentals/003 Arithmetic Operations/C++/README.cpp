#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    int sum = firstNumber + secondNumber;
    int difference = firstNumber - secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}