#include <stdio.h>

int main() {
    int column;
    char operation;
    double matrix[12][12], sum = 0.0;
    scanf("%d %c", &column, &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matrix[i][j]);

            if (j == column) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 12.0);

    return 0;
}
