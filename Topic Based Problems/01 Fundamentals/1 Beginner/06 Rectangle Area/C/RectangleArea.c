#include <stdio.h>

int main() {
    int length, width;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Area of rectangle is: %d\n", length * width);

    return 0;
}
