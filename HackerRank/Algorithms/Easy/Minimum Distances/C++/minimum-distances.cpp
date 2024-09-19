#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minDistance = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                minDistance = min(minDistance, j - i);
            }
        }
    }

    if (minDistance == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minDistance << endl;
    }

    return 0;
}