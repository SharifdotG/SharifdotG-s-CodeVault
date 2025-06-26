#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns, rowFactor, columnFactor;
    cin >> rows >> columns >> rowFactor >> columnFactor;

    char matrix[rows][columns];
    for (int i = 0; i < rows; i++) {
        string row;
        cin >> row;

        for (int j = 0; j < columns; j++) {
            matrix[i][j] = row[j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < rowFactor; k++) {
            for (int j = 0; j < columns; j++) {
                for (int l = 0; l < columnFactor; l++) {
                    cout << matrix[i][j];
                }
            }
            
            cout << endl;
        }
    }

    return 0;
}
