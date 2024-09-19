#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int lowestNumber = 0, lowestNumberPosition = 0;

    for (int i = 1; i <= number; i++) {
        int currentNumber;
        scanf("%d", &currentNumber);

        if (i == 1) {
            lowestNumber = currentNumber;
            lowestNumberPosition = i;
        } else {
            if (currentNumber < lowestNumber) {
                lowestNumber = currentNumber;
                lowestNumberPosition = i;
            }
        }
    }

    printf("Menor valor: %d\n", lowestNumber);
    printf("Posicao: %d\n", lowestNumberPosition - 1);
    
    return 0;
}
