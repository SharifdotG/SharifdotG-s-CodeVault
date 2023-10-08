#include <bits/stdc++.h>

using namespace std;

int main() {
    int cameras;
    cin >> cameras;

    int grid[cameras + 1][cameras + 1];

    for (int i = 0; i < cameras + 1; i++) {
        for (int j = 0; j < cameras + 1; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < cameras; i++) {
        for (int j = 0; j < cameras; j++) {
            if (grid[i][j] + grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1] >= 2) cout << "S";
            else cout << "U";
        }

        cout << endl;
    }

    return 0;
}