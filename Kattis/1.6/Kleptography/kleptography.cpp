#include <bits/stdc++.h>

using namespace std;

int main() {
    int lengthOfAlphabet, lengthOfMessage;
    cin >> lengthOfAlphabet >> lengthOfMessage;

    string alphabet, message, plainText;
    cin >> alphabet >> message;

    for (int i = 0; i < lengthOfMessage - lengthOfAlphabet; i++) {
        plainText.push_back('$');
    }

    plainText += alphabet;

    for (int i = lengthOfMessage - lengthOfAlphabet - 1; i >= 0; i--) {
        plainText[i] = (message[i + lengthOfAlphabet] - plainText[i + lengthOfAlphabet] + 26) % 26 + 'a';
    }

    cout << plainText << endl;

    return 0;
}
