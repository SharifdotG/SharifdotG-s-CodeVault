#include <stdio.h>

int main() {
    int arraySize;

    while (scanf("%d", &arraySize) != EOF) {
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
                printf("%d", matrix[i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
