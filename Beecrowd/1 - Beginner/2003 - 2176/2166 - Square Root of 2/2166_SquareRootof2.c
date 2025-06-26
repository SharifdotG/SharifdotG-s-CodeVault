#include <stdio.h>

int main() {
    int denominatorRepititions;
    scanf("%d", &denominatorRepititions);

    double result = 0;

    for (int i = 0; i < denominatorRepititions; i++) {
        result += 2;
        result = 1 / result;
    }

    result += 1;

    printf("%.10lf\n", result);

    return 0;
}
