#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector<string> grid(rows);
    for (int i = 0; i < rows; ++i) {
        cin >> grid[i];
    }

    vector<string> result = grid;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (grid[i][j] == '.') {
                int count = 0;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (x == 0 && y == 0) {
                            continue;
                        }

                        int ni = i + x, nj = j + y;
                        if (ni >= 0 && ni < rows && nj >= 0 &&
                            nj < columns && grid[ni][nj] == '*') {
                            count++;
                        }
                    }
                }
                
                if (count > 0) {
                    result[i][j] = count + '0';
                }
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        cout << result[i] << endl;
    }

    return 0;
}