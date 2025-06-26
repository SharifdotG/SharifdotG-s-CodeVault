#include <bits/stdc++.h>

using namespace std;

int main() {
    int digits;
    cin >> digits;

    int wheel[digits], count = 0;

    for (int i = 0; i < digits; i++) {
        cin >> wheel[i];
        if (wheel[i] == 7) {
            count++;
        }
    }

    for (int i = 0; i < digits; i++) {
        cin >> wheel[i];
        if (wheel[i] == 7) {
            count++;
        }
    }

    for (int i = 0; i < digits; i++) {
        cin >> wheel[i];
        if (wheel[i] == 7) {
            count++;
        }
    }

    if (count == 3) {
        cout << 777 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}