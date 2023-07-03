#include <iostream>

using namespace std;

int main() {
    int first_number, second_number;

    cout << "Enter two numbers: ";
    cin >> first_number >> second_number;

    int sum = first_number + second_number;
    int difference = first_number - second_number;
    int product = first_number * second_number;
    int quotient = first_number / second_number;
    int remainder = first_number % second_number;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}