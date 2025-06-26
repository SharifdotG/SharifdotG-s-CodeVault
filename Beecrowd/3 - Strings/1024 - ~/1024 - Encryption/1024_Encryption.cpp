#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        string message;
        getline(cin, message);

        for (int i = 0; i < message.size(); i++) {
            if (isalpha(message[i])) {
                message[i] += 3;
            }
        }

        reverse(message.begin(), message.end());

        for (int i = message.size() / 2; i < message.size(); i++) {
            message[i]--;
        }

        cout << message << endl;
    }

    return 0;
}