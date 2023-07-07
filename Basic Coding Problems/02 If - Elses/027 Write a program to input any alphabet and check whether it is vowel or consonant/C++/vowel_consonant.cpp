#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "Enter any alphabet: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        cout << "The alphabet is a vowel.\n";
    } else {
        cout << "The alphabet is a consonant.\n";
    }

    return 0;
}