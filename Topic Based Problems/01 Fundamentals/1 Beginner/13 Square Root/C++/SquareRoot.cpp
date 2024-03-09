#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double number;

    cout << "Enter number: ";
    cin >> number;

    cout << "Square root of " << number << " is: " << fixed << setprecision(2) << sqrt(number) << endl;

    return 0;
}