#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    int sum = firstNumber + secondNumber;
    int difference = firstNumber - secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}