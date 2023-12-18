#include <bits/stdc++.h>

using namespace std;

int main() {
    int speed;
    cin >> speed;

    int rpm[speed];

    for (int i = 0; i < speed; i++) {
        cin >> rpm[i];
    }

    for (int i = 0; i < speed - 1; i++) {
        if (rpm[i] > rpm[i + 1]) {
            cout << i + 2 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}