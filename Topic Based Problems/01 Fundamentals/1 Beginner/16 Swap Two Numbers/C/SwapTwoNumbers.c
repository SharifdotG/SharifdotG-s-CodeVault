#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Before swapping: \n");
    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);

    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    printf("After swapping: \n");
    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);

    return 0;
}
