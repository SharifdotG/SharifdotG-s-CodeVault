#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        long long s;
        cin >> s;

        long long n = ceil(sqrt(s));
        long long x = n * n - s + 1;

        if (n % 2 == 0) {
            if (x <= n) {
                cout << "Case " << i << ": " << n << " " << x << endl;
            } else {
                cout << "Case " << i << ": " << n - (x - n) << " " << n << endl;
            }
        } else {
            if (x <= n) {
                cout << "Case " << i << ": " << x << " " << n << endl;
            } else {
                cout << "Case " << i << ": " << n << " " << n - (x - n) << endl;
            }
        }
    }

    return 0;
}