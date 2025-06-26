#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b;
        cin >> a >> b;

        int minLength = a < b ? a : b;
        int maxLength = a > b ? a : b;

        if (minLength * 2 < maxLength) cout << maxLength * maxLength << endl;
        else cout << minLength * 4 * minLength << endl;
    }

    return 0;
}