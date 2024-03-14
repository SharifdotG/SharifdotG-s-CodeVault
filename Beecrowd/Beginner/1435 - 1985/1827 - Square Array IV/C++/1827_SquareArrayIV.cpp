#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;

    while (cin >> arraySize) {
        int matrix[arraySize][arraySize];

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                matrix[i][j] = 0;
            }
        }

        for (int i = 0; i < arraySize; i++) {
            matrix[i][i] = 2;
            matrix[i][arraySize - i - 1] = 3;
        }

        int middle = arraySize / 3;

        for (int i = middle; i < arraySize - middle; i++) {
            for (int j = middle; j < arraySize - middle; j++) {
                matrix[i][j] = 1;
            }
        }

        matrix[arraySize / 2][arraySize / 2] = 4;

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                cout << matrix[i][j];
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}