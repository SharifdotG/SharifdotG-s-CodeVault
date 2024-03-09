#include <stdio.h>
#include <stdlib.h>

int main() {
    int arraySize;

    while (scanf("%d", &arraySize) == 1 && arraySize != 0) {
        int matrix[arraySize][arraySize];

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                matrix[i][j] = abs(i - j) + 1;
            }
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
