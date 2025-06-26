#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string letters;
        cin >> letters;

        if (letters.length() % 2) cout << "NO" << endl;
        else {
            if (letters.substr(0, letters.size() / 2) == letters.substr(letters.size() / 2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}