#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int stringLength;
        string message;
        cin >> stringLength >> message;

        sort(message.begin(), message.end());

        cout << message[message.size() - 1] - 'a' + 1 << endl;
    }
    
    return 0;
}