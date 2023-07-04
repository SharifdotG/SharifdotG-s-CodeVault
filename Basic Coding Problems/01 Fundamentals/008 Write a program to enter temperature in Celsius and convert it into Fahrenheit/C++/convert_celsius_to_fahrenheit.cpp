#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << fahrenheit << endl;

    return 0;
}