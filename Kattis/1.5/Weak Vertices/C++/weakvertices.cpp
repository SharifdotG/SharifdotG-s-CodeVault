#include <bits/stdc++.h>

using namespace std;

int main() {
    int vertices;

    while (cin >> vertices && vertices != -1) {
        int matrix[vertices][vertices];

        for (int i = 0; i < vertices; ++i) {
            for (int j = 0; j < vertices; ++j) {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < vertices; ++i) {
            bool isWeakVertex = true;

            for (int j = 0; j < vertices; ++j) {
                if (matrix[i][j] == 1) {
                    for (int k = 0; k < vertices; ++k) {
                        if (matrix[j][k] == 1 && matrix[i][k] == 1) {
                            isWeakVertex = false;
                        }
                    }
                }
            }

            if (isWeakVertex) {
                cout << i << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}