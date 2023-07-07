#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character >= 'A' && character <= 'Z') {
        cout << "The character is uppercase alphabet.\n";
    } else if (character >= 'a' && character <= 'z') {
        cout << "The character is lowercase alphabet.\n";
    } else {
        cout << "The character is not an alphabet.\n";
    }

    return 0;
}