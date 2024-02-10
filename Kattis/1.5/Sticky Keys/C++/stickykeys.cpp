#include <bits/stdc++.h>

using namespace std;

int main() {
    string message;
    getline(cin, message);

    char previousCharacter = ' ';

    for (int i = 0; i < message.length(); i++) {
        if (message[i] != previousCharacter) {
            cout << message[i];
            
            previousCharacter = message[i];
        }
    }

    return 0;
}