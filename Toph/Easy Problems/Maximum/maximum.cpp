#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > max) {
            max = x;
        }
    }

    cout << max << endl;

    return 0;
}