#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a == b) {
            cout << (n - 1) * a;
        } else {
            if (a > b) {
                swap(a, b);
            }

            for (int j = 0; j < n; j++) {
                cout << (n - 1 - j) * a + j * b << " ";
            }
        }

        cout << endl;
    }

    return 0;
}