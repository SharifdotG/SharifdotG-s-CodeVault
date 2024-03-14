#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    int spreadsheet[rows + 1][columns + 1];
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;

        for (int j = 0; j < columns; j++) {
            cin >> spreadsheet[i][j];
            rowSum += spreadsheet[i][j];
        }

        spreadsheet[i][columns] = rowSum;
    }

    for (int j = 0; j < columns + 1; j++) {
        int columnSum = 0;

        for (int i = 0; i < rows; i++) {
            columnSum += spreadsheet[i][j];
        }
        
        spreadsheet[rows][j] = columnSum;
    }

    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < columns + 1; j++) {
            cout << spreadsheet[i][j] << (j == columns ? "\n" : " ");
        }
    }
    
    return 0;
}