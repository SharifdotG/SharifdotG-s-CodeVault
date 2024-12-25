#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector<string> field(rows);
    for (int i = 0; i < rows; i++) {
        cin >> field[i];
    }

    int safe_spots = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (field[i][j] == '.') {
                bool is_safe = true;
                if (i > 0 && field[i - 1][j] == '*') {
                    is_safe = false;
                }
                if (i < rows - 1 && field[i + 1][j] == '*') {
                    is_safe = false;
                }
                if (j > 0 && field[i][j - 1] == '*') {
                    is_safe = false;
                }
                if (j < columns - 1 && field[i][j + 1] == '*') {
                    is_safe = false;
                }
                if (is_safe) {
                    safe_spots++;
                }
            }
        }
    }

    cout << safe_spots << endl;

    return 0;
}