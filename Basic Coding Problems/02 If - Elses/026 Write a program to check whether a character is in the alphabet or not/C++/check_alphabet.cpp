#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
        cout << character << " is in the alphabet.\n";
    } else {
        cout << character << " is not in the alphabet.\n";
    }

    return 0;
}