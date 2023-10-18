#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << "Temperature in Fahrenheit is: " << fixed << setprecision(2) << (celsius * 9 / 5) + 32 << endl;

    return 0;
}