#include <stdio.h>

int main() {
    int first_number, second_number, max_number;

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);

    if (first_number > second_number) {
        max_number = first_number;
    } else {
        max_number = second_number;
    }

    printf("%d is the maximum number.\n", max_number);

    return 0;
}