#include <bits/stdc++.h>

using namespace std;

int main() {
    string message;
    cin >> message;

    for (int i = 0; i < message.size(); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] += 32;
        }

        if (message[i] != 'a' && message[i] != 'e' && message[i] != 'i' &&
            message[i] != 'o' && message[i] != 'u' && message[i] != 'y') {
            cout << "." << message[i];
        }
    }
    
    return 0;
}