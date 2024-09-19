#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector<vector<int>> pressure(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> pressure[i][j];
        }
    }

    bool found = false;

    for (int i = 1; i < rows - 1 && !found; i++) {
        for (int j = 1; j < columns - 1 && !found; j++) {
            int current = pressure[i][j];

            if (current < pressure[i-1][j] &&
                current < pressure[i+1][j] &&
                current < pressure[i][j-1] && 
                current < pressure[i][j+1]) {
                found = true;
            }
        }
    }

    if (found) {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }

    return 0;
}