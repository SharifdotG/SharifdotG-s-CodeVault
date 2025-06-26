#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (abs(a[i] - a[j]) <= 1) {
                count++;
            }
        }

        if (count > max) {
            max = count;
        }
    }

    cout << max << endl;

    return 0;
}