#include <bits/stdc++.h>

using namespace std;

int main() {
    int rooms, teams;
    cin >> rooms >> teams;

    for (int i = 0; i < rooms; i++) {
        for (int j = 0; j < teams / rooms; j++) {
            cout << "*";
        }

        if (teams % rooms > i) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}