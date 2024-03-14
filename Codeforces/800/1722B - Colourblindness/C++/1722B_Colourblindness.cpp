#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int gridColumns;
        cin >> gridColumns;

        string grid1, grid2;
        cin >> grid1 >> grid2;

        for (int i = 0; i < gridColumns; i++) {
            if (grid1[i] == 'G') grid1[i] = 'B';
            if (grid2[i] == 'G') grid2[i] = 'B';
        }

        if (grid1 == grid2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}