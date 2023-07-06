#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive.\n";
    } else if (number < 0) {
        cout << "The number is negative.\n";
    } else {
        cout << "The number is zero.\n";
    }

    return 0;
}