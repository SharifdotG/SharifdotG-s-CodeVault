#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string message;
        cin >> message;

        int length = sqrt(message.length());
        for (int i = length - 1; i >= 0; i--) {
            for (int j = 0; j < length; j++) {
                cout << message[i + j * length];
            }
        }
        
        cout << endl;
    }

    return 0;
}