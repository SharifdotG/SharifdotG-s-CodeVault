#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int r, c;
        cin >> r >> c;

        int temp = grid[r - 1][c - 1]; // Top Left
        grid[r - 1][c - 1] = grid[r][c - 1]; // Top Left <- Bottom Left
        grid[r][c - 1] = grid[r + 1][c - 1]; // Bottom Left <- Bottom Right
        grid[r + 1][c - 1] = grid[r + 1][c]; // Bottom Right <- Top Right
        grid[r + 1][c] = grid[r + 1][c + 1]; // Top Right <- Top Center
        grid[r + 1][c + 1] = grid[r][c + 1]; // Top Center <- Top Left
        grid[r][c + 1] = grid[r - 1][c + 1]; // Top Left <- Top Center
        grid[r - 1][c + 1] = grid[r - 1][c]; // Top Center <- Top Right
        grid[r - 1][c] = temp; // Top Right <- Bottom Right

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << grid[i][j] << " ";
            }
            
            cout << endl;
        }
    }
    
    return 0;
}