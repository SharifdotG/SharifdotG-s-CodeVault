#include <stdio.h>

int main() {
    char operation;
    double matrix[12][12], sum = 0;
    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j ++) {
            scanf("%lf", &matrix[i][j]);

            if (i > j && i + j < 11) {
                sum += matrix[i][j];
            }
        }
    }

    if (operation == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 30);

    return 0;
}
