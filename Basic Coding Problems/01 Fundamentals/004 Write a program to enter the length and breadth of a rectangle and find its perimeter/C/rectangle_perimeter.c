#include <stdio.h>

int main() {
    int rectangleLength, rectangleBreadth, rectanglePerimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &rectangleLength);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &rectangleBreadth);

    rectanglePerimeter = 2 * (rectangleLength + rectangleBreadth);

    printf("The perimeter of the rectangle is: %d\n", rectanglePerimeter);

    return 0;
}