#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, m;
        cin >> n >> m;

        // Upper part including middle row
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << m;

                if (j < i) {
                    cout << " ";
                }
            }

            cout << endl;
        }

        // Lower part
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << m;

                if (j < i) {
                    cout << " ";
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}