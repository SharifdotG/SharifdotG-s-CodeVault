#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < columns - 1; j++) {
            if (matrix[i][j] == 42 && matrix[i - 1][j - 1] == 7 &&
                matrix[i - 1][j] == 7 && matrix[i - 1][j + 1] == 7 &&
                matrix[i][j - 1] == 7 && matrix[i][j + 1] == 7 &&
                matrix[i + 1][j - 1] == 7 && matrix[i + 1][j] == 7 &&
                matrix[i + 1][j + 1] == 7) {
                cout << i + 1 << " " << j + 1 << endl;
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "0 0" << endl;
    }

    return 0;
}