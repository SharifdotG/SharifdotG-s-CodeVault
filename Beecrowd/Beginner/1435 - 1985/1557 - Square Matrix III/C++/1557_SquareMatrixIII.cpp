#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;

    while (cin >> arraySize && arraySize != 0) {
        int matrix[arraySize][arraySize];

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                matrix[i][j] = pow(2, i + j);
            }
        }

        int max_width = log10(matrix[arraySize - 1][arraySize - 1]) + 1;

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize - 1; j++) {
                cout << setw(max_width) << matrix[i][j] << " ";
            }
            
            cout << setw(max_width) << matrix[i][arraySize - 1] << endl;
        }

        cout << endl;
    }

    return 0;
}
