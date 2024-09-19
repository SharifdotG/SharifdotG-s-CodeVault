#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double fahrenheit;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Temperature in Celsius is: " << fixed << setprecision(2) << (fahrenheit - 32) * 5 / 9 << endl;

    return 0;
}