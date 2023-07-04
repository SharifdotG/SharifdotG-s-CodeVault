#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    float square_root;

    cout << "Enter a number: ";
    cin >> number;

    square_root = sqrt(number);

    cout << "The square root of " << number << " is " << square_root << endl;

    return 0;
}