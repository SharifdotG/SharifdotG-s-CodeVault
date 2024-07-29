#include <stdio.h>

int main() {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;

    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < columns - 1; j++) {
            if (matrix[i][j] == 42 && matrix[i - 1][j - 1] == 7 &&
                matrix[i - 1][j] == 7 && matrix[i - 1][j + 1] == 7 &&
                matrix[i][j - 1] == 7 && matrix[i][j + 1] == 7 &&
                matrix[i + 1][j - 1] == 7 && matrix[i + 1][j] == 7 &&
                matrix[i + 1][j + 1] == 7) {
                printf("%d %d\n", i + 1, j + 1);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("0 0\n");
    }

    return 0;
}