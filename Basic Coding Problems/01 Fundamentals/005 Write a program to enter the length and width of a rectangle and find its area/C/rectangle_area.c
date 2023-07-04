#include <stdio.h>

int main() {
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}