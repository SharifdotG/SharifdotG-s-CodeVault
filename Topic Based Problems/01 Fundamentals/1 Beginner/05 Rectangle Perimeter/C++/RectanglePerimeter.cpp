#include <iostream>

using namespace std;

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Perimeter of rectangle is: " << 2 * (length + width) << endl;

    return 0;
}