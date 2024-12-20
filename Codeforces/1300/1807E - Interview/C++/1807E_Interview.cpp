#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        int a[n], pfx[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pfx[i] = pfx[i - 1] + a[i];
        }

        int l = 1, r = n, res = 0;
        while (l <= r) {
            int m = (l + r) / 2;
            
            cout << "? " << m - l + 1 << " ";
            for (int i = l; i <= m; i++) {
                cout << i << " ";
            }
            cout << endl << flush;

            int x;
            cin >> x;

            if (pfx[m] - pfx[l - 1] == x) {
                l = m + 1;
            } else {
                r = m - 1;
                res = m;
            }
        }

        cout << "! " << res << endl << flush;
    }
    
    return 0;
}