#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int n;
        cin >> n;

        int sum = 0;
        for (int j = 0; j < n; j++) {
            int w;
            cin >> w;

            if (w > 0) {
                sum += w;
            }
        }

        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}