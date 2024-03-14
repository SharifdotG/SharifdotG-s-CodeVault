#include <stdio.h>

int main() {
    int arraySize;

    while (scanf("%d", &arraySize) == 1) {
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
                printf("%d", matrix[i][j]);
            }
            
            printf("\n");
        }
    }

    return 0;
}
