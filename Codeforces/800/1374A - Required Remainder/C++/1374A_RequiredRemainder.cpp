#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int x, y, n;
        cin >> x >> y >> n;

        int remainder = n % x;

        if (remainder == y) cout << n << endl;
        else if (remainder > y) cout << n - (remainder - y) << endl;
        else cout << n - (remainder + x - y) << endl;
    }

    return 0;
}