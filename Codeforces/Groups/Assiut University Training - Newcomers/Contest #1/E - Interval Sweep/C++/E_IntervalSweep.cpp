#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a + b == 0) {
        cout << "NO" << endl;
    } else if ((a + b) % 2 == 0) {
        if (a == (a + b) / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        if (a == (a + b + 1) / 2 || a == (a + b - 1) / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}