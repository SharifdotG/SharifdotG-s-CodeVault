#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c, d;
    cin >> r >> c >> d;

    vector<string> diamond(2 * d - 1, string(2 * d - 1, '.'));
    for (int i = 0; i < 2 * d - 1; ++i) {
        for (int j = 0; j < 2 * d - 1; ++j) {
            if (abs(i - (d - 1)) + abs(j - (d - 1)) < d) {
                diamond[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << diamond[i % (2 * d - 1)][j % (2 * d - 1)];
        }
        cout << endl;
    }

    return 0;
}