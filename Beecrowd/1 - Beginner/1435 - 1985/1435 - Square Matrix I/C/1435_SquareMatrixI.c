#include <stdio.h>

int main() {
    int arraySize;

    while (scanf("%d", &arraySize) && arraySize != 0) {
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
                printf("%3d ", matrix[i][j]);
            }

            printf("%3d\n", matrix[i][arraySize - 1]);
        }

        printf("\n");
    }

    return 0;
}
