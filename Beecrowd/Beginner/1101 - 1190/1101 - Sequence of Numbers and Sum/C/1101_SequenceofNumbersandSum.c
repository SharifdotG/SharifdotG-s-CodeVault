#include <stdio.h>

int main() {
    int number1, number2;

    while (scanf("%d %d", &number1, &number2) == 2 && number1 > 0 && number2 > 0) {
        int sum = 0;

        if (number1 > number2) {
            int temp = number1;
            number1 = number2;
            number2 = temp;
        }

        for (int i = number1; i <= number2; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
