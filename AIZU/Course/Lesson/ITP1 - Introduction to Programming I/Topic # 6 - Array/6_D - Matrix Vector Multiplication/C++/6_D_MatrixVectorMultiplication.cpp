#include <bits/stdc++.h>

using namespace std;

int main() {
    int matrixRows, matrixColumns;
    cin >> matrixRows >> matrixColumns;

    int matrix[matrixRows][matrixColumns];

    for (int i = 0; i < matrixRows; i++) {
        for (int j = 0; j < matrixColumns; j++) {
            cin >> matrix[i][j];
        }
    }

    int vector[matrixColumns];

    for (int i = 0; i < matrixColumns; i++) {
        cin >> vector[i];
    }

    int result[matrixRows];

    for (int i = 0; i < matrixRows; i++) {
        result[i] = 0;

        for (int j = 0; j < matrixColumns; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    for (int i = 0; i < matrixRows; i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}