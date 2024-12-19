#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int m, n;
        cin >> m >> n;

        if (m == 1 || n == 1) {
            cout << "Case " << i << ": " << max(m, n) << endl;
        } else if (m == 2 || n == 2) {
            int maxDimension = max(m, n);
            int minDimension = min(m, n);
            int remainder = maxDimension % 4;
            int result = (maxDimension / 4) * 4;

            if (remainder == 1) {
                result += 2;
            } else if (remainder > 1) {
                result += 4;
            }

            cout << "Case " << i << ": " << result << endl;
        } else {
            cout << "Case " << i << ": " << ((m * n) + 1) / 2 << endl;
        }
    }

    return 0;
}