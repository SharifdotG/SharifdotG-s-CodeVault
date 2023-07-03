#include <stdio.h>

int main() {
    int first_number, second_number;

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);

    int sum = first_number + second_number;
    int difference = first_number - second_number;
    int product = first_number * second_number;
    int quotient = first_number / second_number;
    int remainder = first_number % second_number;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}