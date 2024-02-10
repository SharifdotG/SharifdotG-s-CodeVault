#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double side;
    
    cout << "Enter the side of a Square: ";
    cin >> side;

    cout << fixed << setprecision(2) << "Area of a Square = " << pow(side, 2) << endl;

    return 0;
}