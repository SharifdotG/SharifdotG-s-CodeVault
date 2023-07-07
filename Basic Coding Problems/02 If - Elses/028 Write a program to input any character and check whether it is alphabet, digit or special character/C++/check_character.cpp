#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter any character: ";
    cin >> character;

    if (isalpha(character)) {
        cout << "The character is an alphabet.";
    } else if (isdigit(character)) {
        cout << "The character is a digit.";
    } else {
        cout << "The character is a special character.";
    }

    return 0;
}