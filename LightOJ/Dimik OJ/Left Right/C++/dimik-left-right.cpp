#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') {
                cout << s[i - 1];
            } else if (s[i] == 'R') {
                cout << s[i + 1];
            } else {
                cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}