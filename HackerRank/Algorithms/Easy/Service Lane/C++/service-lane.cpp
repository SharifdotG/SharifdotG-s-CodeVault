#include <bits/stdc++.h>

using namespace std;

int main() {
    int numWidth, testCases;
    cin >> numWidth >> testCases;

    vector<int> width(numWidth);
    for (int i = 0; i < numWidth; i++) {
        cin >> width[i];
    }

    while (testCases--) {
        int i, j;
        cin >> i >> j;

        int ans = INT_MAX;
        for (int k = i; k <= j; k++) {
            ans = min(ans, width[k]);
        }

        cout << ans << endl;
    }

    return 0;
}