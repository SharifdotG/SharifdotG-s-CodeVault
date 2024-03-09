#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;

    while (cin >> arraySize) {
        int matrix[arraySize][arraySize];

        for (int i = 0; i < arraySize; i++) {
            matrix[i][i] = 1;
            matrix[i][arraySize - i - 1] = 2;

            for (int j = 0; j < arraySize; j++) {
                if (i != j && j != arraySize - i - 1) {
                    matrix[i][j] = 3;
                }
            }
        }

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0;  j < arraySize; j++) {
                cout << matrix[i][j];
            }
            
            cout << endl;
        }
    }

    return 0;
}
