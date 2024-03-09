#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++) {
        int number, sum = 0;
        scanf("%d", &number);

        for (int j = 1; j < number; j++) {
            if (number % j == 0) {
                sum += j;
            }
        }

        if (sum == number) {
            printf("%d eh perfeito\n", number);
        } else printf("%d nao eh perfeito\n", number);
    }

    return 0;
}
