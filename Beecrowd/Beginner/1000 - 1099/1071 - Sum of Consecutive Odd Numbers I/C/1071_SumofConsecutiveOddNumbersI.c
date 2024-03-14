#include <stdio.h>

int main() {
    int number1, number2, sum = 0;
    scanf("%d %d", &number1, &number2);

    if (number1 > number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    for (int i = number1 + 1; i < number2; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    
    return 0;
}
