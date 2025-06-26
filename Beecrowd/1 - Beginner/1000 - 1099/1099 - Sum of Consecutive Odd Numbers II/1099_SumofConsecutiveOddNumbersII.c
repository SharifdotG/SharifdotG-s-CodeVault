#include <stdio.h>
#include <stdlib.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int number1, number2;
        scanf("%d %d", &number1, &number2);

        int sum = 0;

        if (number1 > number2) {
            for (int j = number2 + 1; j < number1; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
        } else {
            for (int j = number1 + 1; j < number2; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
