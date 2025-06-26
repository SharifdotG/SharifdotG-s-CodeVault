#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int x, n;
        cin >> x >> n;

        if (x > n) {
            cout << "Invalid!" << endl;
        } else {
            for (int i = 1; i * x <= n; i++) {
                cout << i * x << endl;
            }
        }

        cout << endl;
    }

    return 0;
}