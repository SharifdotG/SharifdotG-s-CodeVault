#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;

    while (cin >> arraySize && arraySize != 0) {
        int matrix[arraySize][arraySize];

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                matrix[i][j] = abs(i - j) + 1;
            }
        }

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize - 1; j++) {
                cout << setw(3) << matrix[i][j] << " ";
            }

            cout << setw(3) << matrix[i][arraySize - 1] << endl;
        }

        cout << endl;
    }

    return 0;
}
