#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, temp;
        cin >> n;

        vector<int> a;

        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());

        bool flag = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] > 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}