#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i += 2) {
            cout << arr[i];

            if (i + 2 < n) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}