#include <bits/stdc++.h>

using namespace std;

int main() {
    string cipherText, secretWord, originalText = "";
    cin >> cipherText >> secretWord;

    for (int i = 0; i < cipherText.length(); i++) {
        int cipherCharacter = cipherText[i] - 'A';
        int secretCharacter = secretWord[i] - 'A';
        int originalCharacter = (cipherCharacter - secretCharacter + 26) % 26;

        originalText += originalCharacter + 'A';
        secretWord += originalCharacter + 'A';
    }

    cout << originalText << endl;

    return 0;
}
