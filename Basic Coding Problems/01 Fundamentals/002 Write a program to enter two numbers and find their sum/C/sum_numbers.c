#include <stdio.h>

int main() {
    int first_number, second_number, sum;

    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    sum = first_number + second_number;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}