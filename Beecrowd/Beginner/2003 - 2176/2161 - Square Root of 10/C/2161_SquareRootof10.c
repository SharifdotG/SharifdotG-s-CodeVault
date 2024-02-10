#include <stdio.h>

int main() {
    double denominatorRepetitions;
    scanf("%lf", &denominatorRepetitions);

    double result = 0;

    for (int i = 0; i < (int)denominatorRepetitions; i++) {
        if (i == 0) {
            result = 1 / (6 + result);
        } else result = 1 / (6 + result);
    }

    printf("%.10lf\n", result + 3);

    return 0;
}
