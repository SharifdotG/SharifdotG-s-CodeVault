#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    cin >> name;

    char lastChar = name[0];
    cout << lastChar;

    for (int i = 1; i < name.length(); i++) {
        if (name[i] != lastChar) {
            cout << name[i];
        }

        lastChar = name[i];
    }

    cout << endl;

    return 0;
}