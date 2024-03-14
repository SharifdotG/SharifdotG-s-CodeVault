#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;

        for (int i = 0; i < 3; i++) s[i] = tolower(s[i]);

        if (s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}