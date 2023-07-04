#include <stdio.h>

int main() {
    int length, breadth, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);

    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}