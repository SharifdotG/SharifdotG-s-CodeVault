#include <stdio.h>

int main() {
    int lastValue, i = 1;

    while (scanf("%d", &lastValue) != EOF) {
        int sum = 1;

        for (int j = 1; j <= lastValue; j++) sum += j;

        if (lastValue == 0) {
            printf("Caso %d: %d numero\n", i, sum);
        } else printf("Caso %d: %d numeros\n", i, sum);

        printf("0");

        for (int j = 1; j <= lastValue; j++) {
            for (int k = 1; k <= j; k++) {
                printf(" %d", j);
            }
        }

        printf("\n\n");

        i++;
    }

    return 0;
}
