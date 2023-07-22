#include <stdio.h>

int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}