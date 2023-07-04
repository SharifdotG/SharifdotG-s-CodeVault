#include <iostream>

using namespace std;

int main() {
    int length, breadth, perimeter;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    perimeter = 2 * (length + breadth);

    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}