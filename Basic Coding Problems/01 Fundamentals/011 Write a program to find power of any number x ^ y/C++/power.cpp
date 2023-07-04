#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base, power, result;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    result = pow(base, power);

    cout << "The value of " << base << "^" << power << " is " << result << endl;

    return 0;
}