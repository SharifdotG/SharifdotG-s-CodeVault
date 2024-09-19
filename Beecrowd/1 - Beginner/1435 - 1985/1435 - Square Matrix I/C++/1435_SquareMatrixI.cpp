#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;

    while (cin >> arraySize && arraySize != 0) {
        int matrix[arraySize][arraySize], counter = 1;

        for (int i = 0; i < arraySize; i++) {
            for (int j = i; j < arraySize - i; j++) {
                for (int k = i; k < arraySize - i; k++) {
                    matrix[j][k] = counter;
                }
            }

            counter++;
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