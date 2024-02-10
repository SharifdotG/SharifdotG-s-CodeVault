#include <stdio.h>

int main() {
    int length, width;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Perimeter of rectangle is: %d\n", 2 * (length + width));

    return 0;
}
