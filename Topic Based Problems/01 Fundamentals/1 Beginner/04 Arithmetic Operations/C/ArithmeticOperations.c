#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Sum of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("Difference of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
    printf("Product of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
    printf("Quotient of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber / secondNumber);

    return 0;
}
