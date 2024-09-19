#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin >> rows;

    vector<string> grid(rows);
    for (int i = 0; i < rows; i++) {
        cin >> grid[i];
    }

    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < grid[i].size() - 1; j++) {
            if (grid[i][j] > grid[i - 1][j] && grid[i][j] > grid[i + 1][j] &&
                grid[i][j] > grid[i][j - 1] && grid[i][j] > grid[i][j + 1]) {
                grid[i][j] = 'X';
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}